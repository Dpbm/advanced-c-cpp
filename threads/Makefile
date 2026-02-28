OBJ1 := test1.out
SRC1 := test1.cpp

OBJ2 := test2.out
SRC2 := test2.cpp

CC := clang++

OBJS := $(OBJ1) $(OBJ2)

all: $(OBJS)

$(OBJ1): $(SRC1)
	$(CC) -o $(OBJ1) $(SRC1)

$(OBJ2): $(SRC2)
	$(CC) -o $(OBJ2) $(SRC2)
