## Makefile Source:
## https://stackoverflow.com/questions/2481269/how-to-make-a-simple-c-makefile


CC=gcc
CXX=g++
RM=rm -f
CPPFLAGS=-g -Wall
# LDFLAGS=-g
# LDLIBS=

OUTNAME=proj_2
SRCDIR=src
BUILDDIR=build
RAW_SRCS=animal.cpp main.cpp zookeeper.cpp zoo_announcer.cpp strategy_makenoise.cpp

SRCS=$(RAW_SRCS:%=$(SRCDIR)/%)
OBJS=$(subst $(SRCDIR),$(BUILDDIR),$(subst .cpp,.o,$(SRCS)))

all: $(OUTNAME)

.PHONY: all clean .depend

$(OUTNAME): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(OUTNAME) $(OBJS) $(LDLIBS)

$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

.depend: $(SRCS)
	@echo "Refreshing Dependencies"
	@$(RM) ./.depend
	@$(CXX) $(CPPFLAGS) -MM $^>>./.depend
	@sed -i -e 's/^/src\//' ./.depend

clean:
	$(RM) -rf $(BUILDDIR) $(OUTNAME)

distclean: clean
	$(RM) *~ .depend

include .depend