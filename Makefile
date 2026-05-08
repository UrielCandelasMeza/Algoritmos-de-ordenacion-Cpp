CXX        := g++
CXXFLAGS   := -Wall -Wextra -O2 -std=c++17
TARGET     := programa
BUILD_DIR  := build

SRCS       := main.cpp modules/modules.cpp
# Mapea los .cpp a build/%.o
OBJS       := $(SRCS:%.cpp=$(BUILD_DIR)/%.o)
DEPS       := modules/modules.hpp

all: $(TARGET)

# Enlace del binario final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla de compilación con creación automática de directorio
$(BUILD_DIR)/%.o: %.cpp $(DEPS)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza profunda
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
