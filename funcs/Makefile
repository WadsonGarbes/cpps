# Define compiler and flags
CC := g++
CFLAGS := -Wall -g
LFLAGS :=
LIBS :=

# Sources and objects
SOURCES := t.cpp
OBJS := $(SOURCES:.cpp=.o)

# Phony targets
.PHONY: all clean

# Default target
all: t

# Link objects to create the binary
t: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LFLAGS) $(LIBS)

# Compile .cpp to .o
.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean up generated files
clean:
	rm -f $(OBJS) t
