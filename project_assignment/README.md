# Project Assignment , C++ programming , ZMQ , PyQt

```

	AUTHOR : Tarokh Yaghoubi
	DATE : June 2023

```

```

	This is a client/server program .
	The server is written in C++ . 
	The client has a C++ version and a Python version .
	The C++ version is just as a test .
	The main client , is the python version . pyclient.py

```

```
	Server :
	
		the server will generate a bunch of float numbers and saves them 
		inside of a file , then it will open the file and takes FFT from
		the files data . then it will send the result to the client :
		python client .

```

```
	
	Client :
		
		the Client , will recv the data from server , it will draw a chart 
		using PyQt5 according to the data that it has recieved . then it will
		wait for the user to close the window .


```

## How to use :


```

	Install the requirements :
 
	- PyQt5
	- Zeromq (ZMQ) for C++
	- FFTw3
	- Numpy
	- pyzmq

```

```
	Compile the program using g++ and also link the program with the essential libraries

	g++ -o server final_server.cpp -lmzq -lfftw3f
	
	for the Client :
	
	python3 pyclient.py


```


