CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g
LDFLAGS=-g
LDLIBS=

SRCS=fib.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

all: fib

fib: $(OBJS)
	    $(CXX) $(LDFLAGS) -o fib $(OBJS) $(LDLIBS) 

fib.o: fib.cpp

clean:
	    $(RM) $(OBJS)

distclean: clean
	    $(RM) fib
