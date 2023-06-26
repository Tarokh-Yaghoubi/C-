import zmq
import numpy as np
from scipy.fftpack import fft
import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QSizePolicy
from PyQt5.QtChart import QChart, QChartView, QLineSeries
from PyQt5.QtGui import QPen
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QPen, QPainter
from PyQt5.QtCore import QPointF


# Initialize the ZeroMQ context and socket
context = zmq.Context()
socket = context.socket(zmq.PULL)
socket.connect("tcp://localhost:5555")

# Receive the data from the server
message = socket.recv()
in_data = np.frombuffer(message, dtype=np.complex64)

# Apply FFT using SciPy
out_data = fft(in_data)

# Save the data to a file
with open("fft_result.txt", "w") as out_file:
    for x in out_data:
        out_file.write(f"{x.real}\n")

# Print DONE on the screen
print("DONE")

# Create a PyQt5 application
app = QApplication(sys.argv)

# Create a line series for the chart
series = QLineSeries()

# Load the data from the file into the line series
with open("fft_result.txt", "r") as in_file:
    for line in in_file:
        value = float(line.strip())
        point = QPointF(series.count(), value)
        series.append(point)

# Create a chart and set the line series as its data source
chart = QChart()
chart.addSeries(series)

# Set the chart title and axis labels
chart.setTitle("FFT Result")
chart.setAnimationOptions(QChart.SeriesAnimations)
chart.createDefaultAxes()
chart.axisX().setTitleText("Index")
chart.axisY().setTitleText("Value")

# Set the chart pen
pen = QPen(Qt.blue)
pen.setWidth(2)
series.setPen(pen)

# Create a chart view and set the chart as its data source
chart_view = QChartView(chart)
chart_view.setRenderHint(QPainter.Antialiasing)

# Create a main window and set the chart view as its central widget
window = QMainWindow()
window.setCentralWidget(chart_view)

# Set the window size
window.resize(800, 600)

# Show the window and start the PyQt5 event loop
window.show()
sys.exit(app.exec_())

# Shutdown the client
socket.close()
context.term()