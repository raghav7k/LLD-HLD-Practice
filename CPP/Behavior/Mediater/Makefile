CXX ?= g++
CXXFLAGS ?= -std=c++17 -O2 -Wall -Wextra -pedantic

BIN := state_main
SRCS := Main.cpp \
        AuctionHouse.cpp \
        Bidder.cpp \
		ExtendedAuctionHouse.cpp \

.PHONY: all build run clean

all: build

build:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(BIN)

run: build
	./$(BIN)

clean:
	rm -f $(BIN)
