driver: driver.o hailstone.o 
	g++ driver.o hailstone.o

driver.o: driver.cpp
	g++ -c driver.cpp

hailstone: hailstone.cpp
	g++ -c hailstone.cpp
