sources := $(wildcard *.cpp)
objects := $(patsubst %.cpp,%.o,$(sources))

$(objects): $(sources)


