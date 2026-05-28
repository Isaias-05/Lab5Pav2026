
SHELL := /bin/bash

CXX := g++
CXXFLAGS := -Iinclude
LDFLAGS :=

SRCDIR := src
OBJDIR := obj
BINDIR := bin
INCLDIR := include


CONTROLS_SRCS = $(wildcard $(SRCDIR)/controladores/*.cpp)
DATATYPS_SRCS = $(wildcard $(SRCDIR)/datatypes/*.cpp)
MANEJADR_SRCS = $(wildcard $(SRCDIR)/manejadores/*.cpp)
ICONTROL_SRCS = $(wildcard $(SRCDIR)/interfaces/*.cpp)
DOMINIO_SRCS = $(wildcard $(SRCDIR)/dominio/*.cpp)
FABRICA_SRCS = $(wildcard $(SRCDIR)/fabrica/*.cpp)





TARGET := $(BINDIR)/main



all: dirs $(TARGET)

dirs:
	@mkdir -p $(OBJDIR) $(BINDIR)



clean:
	@rm -rf $(OBJDIR) $(BINDIR)
