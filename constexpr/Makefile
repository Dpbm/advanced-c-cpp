CXX_SOURCE := test.cpp
CXX_OUTPUT := testcpp.o
CXX := clang++
CXX_LDFLGAS := -std=c++2a

all: $(CXX_OUTPUT)

$(CXX_OUTPUT): $(CXX_SOURCE)
	$(CXX) $(CXX_LDFLAGS) $(CXX_SOURCE) -o $(CXX_OUTPUT)
