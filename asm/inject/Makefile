ASM_FILE1 := injected.s
OBJ_FILE1 := inject.out
ASM_FILE2 := injected2.s
OBJ_FILE2 := inject2.out

OBJS := $(ASM_FILE1) $(OBJ_FILE1) $(ASM_FILE2) $(OBJ_FILE2)

SOURCE1 := test-inject.cpp
SOURCE2 := inject-2.cpp

CXX := clang++


all: $(OBJS)

$(ASM_FILE1): $(SOURCE1)
	@echo "Extracting asm $(SOURCE1)..."
	$(CXX) $(SOURCE1) -fverbose-asm -S -o $(ASM_FILE1)

$(OBJ_FILE1): $(SOURCE1)
	@echo "Compiling $(SOURCE1)..."
	$(CXX) $(SOURCE1) -o $(OBJ_FILE1)


$(ASM_FILE2): $(SOURCE2)
	@echo "Extracting asm $(SOURCE2)..."
	$(CXX) $(SOURCE2) -fverbose-asm -S -o $(ASM_FILE2)

$(OBJ_FILE2): $(SOURCE2)
	@echo "Compiling $(SOURCE2)..."
	$(CXX) $(SOURCE2) -o $(OBJ_FILE2)

.PHONY: clean

clean:
	@echo "Removing files: $(OBJS) ..."
	rm -rf $(OBJS)
