
CFLAGS = -c -Wall -pedantic
CC = g++

FILE = iparser parser iexpression constant variable binary_operation unary_operation
OBJ = $(FILE:=.o)
SRC = $(FILE:=.cpp)
HDR = $(FILE:=.h)

EXE = parser

DEP = Makefile

all:
	make $(EXE)

$(EXE) : $(OBJ) $(DEP) 
	$(CC) $(OBJ) -o $(EXE)
	
$(OBJ) : $(SRC) $(HDR) $(DEP)
	$(CC) -o $(EXE)

clean:
	rm -f $(OBJ) $(EXE)


