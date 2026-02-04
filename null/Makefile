CXX_SOURCE := test.cpp
C_SOURCE := test.c

CXX_OUTPUT := testcpp.o
C_OUTPUT := testc.o

CXX := clang++
CC := clang

CXX_LDFLGAS := -std=c++2a

all: $(CXX_OUTPUT) $(C_OUTPUT)

$(CXX_OUTPUT): $(CXX_SOURCE)
	$(CXX) $(CXX_LDFLAGS) $(CXX_SOURCE) -o $(CXX_OUTPUT)

$(C_OUTPUT): $(C_SOURCE)
	$(CC) $(C_SOURCE) -o $(C_OUTPUT)
