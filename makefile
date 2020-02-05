## Makefile Source:
## https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile


CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -Wall
# LDFLAGS=-g
# LDLIBS=

OUTNAME=proj_2
SRCS=src/animal.cpp src/main.cpp src/zookeeper.cpp
OBJS=$(subst src,build,$(subst .cpp,.o,$(SRCS)))

all: $(OUTNAME)

builddir:
	mkdir -p build

$(OUTNAME): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(OUTNAME) $(OBJS) $(LDLIBS)

build/%.o: src/%.cpp builddir
	$(CC) $(CPPFLAGS) -c $< -o $@

depend: .depend

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS) $(OUTNAME)
	rmdir build

distclean: clean
	$(RM) *~ .depend

include .depend