CC = gcc

PROJDIR := $(realpath $(CURDIR))
SRCDIR := $(PROJDIR)
BUILDDIR := $(PROJDIR)/build

EXCEPTION := all.o

all: $(foreach i, $(shell echo *.c), $(BUILDDIR)/$(basename $i).o)

#-p is a option for : only make directory if it does not exist

%.o : $(SRCDIR)/$(basename $@).c
	echo $(basename $@).c
	mkdir -p $(BUILDDIR)
	gcc -o $@ $(SRCDIR)/$(basename $(notdir $@)).c

clean:
	rm -f *.o