
'''

    Author : Tarokh Yaghoubi
    Date : June , 2023

'''


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


context = zmq.Context()
socket = context.socket(zmq.PULL)
socket.connect("tcp://localhost:5555")

message = socket.recv()
in_data = np.frombuffer(message, dtype=np.complex64)

out_data = fft(in_data)

# Save the data to a file
with open("fft_result.txt", "w") as out_file:
    for x in out_data:
        out_file.write(f"{x.real}\n")

print("DONE")


app = QApplication(sys.argv)


series = QLineSeries()


with open("fft_result.txt", "r") as in_file:
    for line in in_file:
        value = float(line.strip())
        point = QPointF(series.count(), value)
        series.append(point)

chart = QChart()
chart.addSeries(series)

chart.setTitle("FFT Result")
chart.setAnimationOptions(QChart.SeriesAnimations)
chart.createDefaultAxes()
chart.axisX().setTitleText("Index")
chart.axisY().setTitleText("Value")

pen = QPen(Qt.blue)
pen.setWidth(2)
series.setPen(pen)

chart_view = QChartView(chart)
chart_view.setRenderHint(QPainter.Antialiasing)

window = QMainWindow()
window.setCentralWidget(chart_view)


window.resize(800, 600)

window.show()
sys.exit(app.exec_())


socket.close()
context.term()