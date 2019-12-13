CC = g++
LIBS = liostream

Main: Main.o GeometricSeries.o
	$(CC) Main.o GeometricSeries.o -o Main
Main.o: Main.cpp
	$(CC) Main.cpp -c

GeometricSeries.o: GeometricSeries.cpp
	$(CC) GeometricSeries.cpp -c

