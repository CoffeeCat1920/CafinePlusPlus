# Define the compiler
CXX = g++

# Define the directories
SRCDIR = src
INCDIR = include
BINDIR = bin
LIBDIR = lib

# Define the target executable
TARGET = $(BINDIR)/app

# Define the source files
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Define the object files
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(BINDIR)/%.o, $(SOURCES)) main.cpp

# Define the compiler flags
CXXFLAGS = -I$(INCDIR)

# Define the linker flags
LDFLAGS = -L$(LIBDIR) -lraylib

# Default rule to build the target
all: $(TARGET)

# Rule to link the object files into the target executable
$(TARGET): $(OBJECTS)
	@echo "Linking: $(OBJECTS)"
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

# Rule to compile source files into object files
$(BINDIR)/%.o: $(SRCDIR)/%.cpp
	@echo "Compiling $<"
	mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up generated files
clean:
	rm -rf $(BINDIR)/*.o $(TARGET)

# Print variables for debugging
debug:
	@echo "Sources: $(SOURCES)"
	@echo "Objects: $(OBJECTS)"
	@echo "Target: $(TARGET)"

# Phony targets
.PHONY: all clean debug
