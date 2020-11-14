IDIR = ../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++17 -g

ODIR=../src

.PHONY: all

_OBJ = main.o fpr.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: fpr

$(ODIR)/fpr.o: $(ODIR)/fpr.cpp $(IDIR)/fpr.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: $(ODIR)/main.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

fpr: $(OBJ)
	$(CC)  -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o ./P1