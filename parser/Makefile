
CFLAGS = -c -Wall # -pedantic
CC = g++

FILE = iparser parser iexpression variable constant binary_operation unary_operation
OBJ = $(FILE:=.o)
SRC = $(FILE:=.cpp)
HDR = $(FILE:=.h)

BIN = parser

DEP = Makefile


$(BIN) : $(OBJ) $(DEP) 
	$(CC) $(OBJ) -o $(BIN)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ) $(BIN)


