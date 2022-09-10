CC=gcc
CFLAGS=-Wall

SRC=$(wildcard *.c)

all: $(SRC)
	@mkdir -p build
	$(CC) -o build/$@ $^ $(CFLAGS)

