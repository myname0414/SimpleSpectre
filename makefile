CC = gcc
SRC = spectre.c
OUT = spectre.out

all:
	$(CC) $(SRC) -o $(OUT)