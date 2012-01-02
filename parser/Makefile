
CFLAGS = -c -Wall # -pedantic
CC = g++

FILE = iexpression variable constant unary_operation binary_operation iparser parser parser_test
OBJ = $(FILE:=.o)
SRC = $(FILE:=.cpp)
HDR = $(FILE:=.h)

BIN = parser_test

DEP = Makefile


$(BIN) : $(OBJ) $(DEP) 
	$(CC) $(OBJ) -o $(BIN)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

run:
	./$(BIN) "3.141596"

clean:
	rm -f $(OBJ) $(BIN)

