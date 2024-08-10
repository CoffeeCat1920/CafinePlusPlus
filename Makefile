# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
INCLUDES = -Iengine/include -Igame/include
LDFLAGS = -Lengine/lib -lraylib -lm -lpthread -ldl

# Directories
BUILD_DIR = build
ENGINE_SRC_DIR = engine/src
GAME_SRC_DIR = game/src

# Source files
ENGINE_SRCS = $(wildcard $(ENGINE_SRC_DIR)/*.cpp)
GAME_SRCS = $(wildcard $(GAME_SRC_DIR)/*.cpp)
MAIN_SRC = main.cpp

# Object files
ENGINE_OBJS = $(patsubst $(ENGINE_SRC_DIR)/%.cpp,$(BUILD_DIR)/engine/%.o,$(ENGINE_SRCS))
GAME_OBJS = $(patsubst $(GAME_SRC_DIR)/%.cpp,$(BUILD_DIR)/game/%.o,$(GAME_SRCS))
MAIN_OBJ = $(BUILD_DIR)/main.o

# Executable
TARGET = $(BUILD_DIR)/game_executable

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(ENGINE_OBJS) $(GAME_OBJS) $(MAIN_OBJ)
	@mkdir -p $(@D)
	$(CXX) $^ -o $@ $(LDFLAGS)

# Compile engine source files
$(BUILD_DIR)/engine/%.o: $(ENGINE_SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Compile game source files
$(BUILD_DIR)/game/%.o: $(GAME_SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Compile main.cpp
$(MAIN_OBJ): $(MAIN_SRC)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean build files
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean
