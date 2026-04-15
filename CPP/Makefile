CXX ?= g++
CXXFLAGS ?= -std=c++20 -O2 -Wall -Wextra -pedantic

BIN := lld_cpp
SRCS := src/main.cpp src/Hello.cpp

.PHONY: build run clean

build:
	$(CXX) $(CXXFLAGS) -Iinclude $(SRCS) -o $(BIN)

run: build
	./$(BIN)

clean:
	rm -f $(BIN)

