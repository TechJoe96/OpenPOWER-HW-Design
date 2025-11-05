# Makefile for QNNA C Demo
# Supports both cross-compilation (PowerPC) and native compilation

# Default compiler (native)
CC = gcc

# Compiler flags
CFLAGS = -O2 -Wall -Wextra -std=c99

# Target executable
TARGET = qnna_demo

# Source files
SRCS = qnna_demo.c
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Cross-compilation for PowerPC (64-bit little-endian)
powerpc64le:
	powerpc64le-linux-gnu-gcc $(CFLAGS) -o $(TARGET) $(SRCS)

# Cross-compilation for PowerPC (32-bit)
powerpc:
	powerpc-linux-gnu-gcc $(CFLAGS) -o $(TARGET) $(SRCS)

# Native compilation (if running on PowerPC or x86)
native:
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Simulation mode (for testing without real hardware)
sim:
	$(CC) $(CFLAGS) -DSIM_MODE -o $(TARGET) $(SRCS)

# Build the target
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Clean build artifacts
clean:
	rm -f $(TARGET) $(OBJS) *.o

# Run the demo (in simulation mode)
run: sim
	./$(TARGET)

# Help target
help:
	@echo "QNNA C Demo Makefile"
	@echo ""
	@echo "Targets:"
	@echo "  all          - Build with default compiler (gcc)"
	@echo "  powerpc64le  - Cross-compile for PowerPC 64-bit little-endian"
	@echo "  powerpc      - Cross-compile for PowerPC 32-bit"
	@echo "  native       - Build with native compiler"
	@echo "  sim          - Build in simulation mode (for testing)"
	@echo "  run          - Build in sim mode and run"
	@echo "  clean        - Remove build artifacts"
	@echo "  help         - Show this help message"
	@echo ""
	@echo "Examples:"
	@echo "  make powerpc64le  # Cross-compile for PowerPC"
	@echo "  make sim && ./qnna_demo  # Build and run in simulation mode"
	@echo "  make clean        # Clean build files"

.PHONY: all powerpc64le powerpc native sim clean run help

