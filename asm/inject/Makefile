ASM_FILE := injected.s
OBJ_FILE := inject.out
OBJS := $(ASM_FILE) $(OBJ_FILE)

SOURCE := test-inject.cpp

CXX := clang++


all: $(OBJS)

$(ASM_FILE): $(SOURCE)
	@echo "Extracting asm..."
	$(CXX) $(SOURCE) -fverbose-asm -S -o $(ASM_FILE)

$(OBJ_FILE): $(SOURCE)
	@echo "Compiling..."
	$(CXX) $(SOURCE) -o $(OBJ_FILE)


