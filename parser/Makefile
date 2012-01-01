
CFLAGS = -c -Wall # -pedantic
CC = g++

FILE = iparser parser iexpression variable constant binary_operation unary_operation parser_test
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

