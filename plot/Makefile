CC = g++

CFLAGS = -c `pkg-config --cflags gtk+-3.0` 
LIBS = `pkg-config --libs gtk+-3.0`

helloworld:
	$(CC) helloworld.cpp -o helloworld.o $(CFLAGS) 
	$(CC) helloworld.o -o helloworld $(LIBS)
	./helloworld

helloglade:
	$(CC) glade_helloworld.cpp -o glade_helloworld.o $(CFLAGS) 
	$(CC) glade_helloworld.o -o glade_helloworld $(LIBS)
	./glade_helloworld

clean:
	rm -f *.o helloworld

