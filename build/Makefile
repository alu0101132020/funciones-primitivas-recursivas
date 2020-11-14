IDIR = ../include
CC=g++
CFLAGS=-I$(IDIR) -std=c++17 -g

ODIR=../src

.PHONY: all

_OBJ = main.o fpr.o basic-functions.o addFPR.o multiplicationFPR.o powerFPR.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: fpr

$(ODIR)/addFPR.o: $(ODIR)/addFPR.cpp $(IDIR)/addFPR.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/multiplicationFPR.o: $(ODIR)/multiplicationFPR.cpp $(IDIR)/multiplicationFPR.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/powerFPR.o: $(ODIR)/powerFPR.cpp $(IDIR)/powerFPR.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/basic-functions.o: $(ODIR)/basic-functions.cpp $(IDIR)/basic-functions.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/fpr.o: $(ODIR)/fpr.cpp $(IDIR)/fpr.hpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: $(ODIR)/main.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

fpr: $(OBJ)
	$(CC)  -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o ./P1