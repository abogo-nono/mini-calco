CC = gcc
CFLAGS = -Wall -Wextra -g
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# List your source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Generate the names of object files by replacing .c with .o
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Name of the final executable
TARGET = $(BIN_DIR)/my_program

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link object files into the final executable
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

# Rule to clean up generated files
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Default target
all: $(TARGET)

# Phony target to avoid conflicts with files of the same name
.PHONY: clean all
