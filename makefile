all: collectiondriver

collectiondriver: driver.o
	g++ -Wall driver.o -o collectiondriver

driver.o: driver.cc Collection.cc
	g++ -Wall -c driver.cc

clean:
	rm -rf *.o
