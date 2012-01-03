

CC = g++

CFLAGS = -c `pkg-config --cflags gtk+-2.0` 
LIBS = `pkg-config --libs gtk+-2.0`

DEBUGGING = `pkg-config --cflags --libs gtk+-2.0`

helloworld:
	rm -f helloworld.o helloworld
	$(CC) helloworld.cpp -o helloworld.o $(CFLAGS) 
	$(CC) helloworld.o -o helloworld $(LIBS)
	./helloworld

helloeasy:
	rm -f helloworld
	$(CC) helloworld.cpp -o helloworld $(DEBUGGING)

clean:
	rm *.o helloworld

