
SHELL := /bin/bash

CXX := g++
CXXFLAGS := -std=gnu++17 -O2 -Wall -Wextra -Iinclude
LDFLAGS :=

SRCDIR := src
OBJDIR := obj
BINDIR := bin

SRCS := $(shell find $(SRCDIR) -name '*.cpp' -print)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))

TARGET := $(BINDIR)/main

.PHONY: all clean dirs print

all: dirs $(TARGET)

dirs:
	@mkdir -p $(OBJDIR) $(BINDIR)

$(TARGET): $(OBJS)
	@mkdir -p $(dir $@)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

print:
	@echo "SRCS=$(SRCS)"
	@echo "OBJS=$(OBJS)"

clean:
	@rm -rf $(OBJDIR) $(BINDIR)
