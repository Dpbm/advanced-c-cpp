CC := clang++
sources := $(wildcard *.cpp)
objects := $(patsubst %.cpp,%.o,$(sources))

$(objects): $(sources)
	$(CC) $(sources) -o $(objects)


