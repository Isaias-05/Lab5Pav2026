SRCDIR := src
OBJDIR := obj
BINDIR := bin
INCLDIR := include

CXX := g++
CXXFLAGS := -Wall -std=c++17
CPPFLAGS := -I$(INCLDIR) -I$(INCLDIR)/controladores -I$(INCLDIR)/datatypes -I$(INCLDIR)/manejadores -I$(INCLDIR)/icontroladores -I$(INCLDIR)/dominio -I$(INCLDIR)/fabrica
DEPFLAGS := -MMD -MP

SRCS := $(wildcard $(SRCDIR)/*/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))
DEPS := $(OBJS:.o=.d)

TARGET := $(BINDIR)/main

all: $(TARGET)

$(TARGET): dirs $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@

dirs:
	@mkdir -p $(sort $(dir $(OBJS))) $(BINDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(DEPFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	@rm -rf $(OBJDIR) $(BINDIR)
