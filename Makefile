# Use the C++ compiler to link
LINK.o = $(LINK.cc)
# Flags to compile for the debugger
CXXFLAGS =-Wall -ggdb3

all: main 

runtests: main.o

clean:
	rm -f main *.o
