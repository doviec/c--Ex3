# -*- Makefile -*-

all: isort txtfind

txtfind: txtfind.o main_txt.o
	gcc -Wall -fPIC -o txtfind main_txt.o txtfind.o

main_txt.o: main_txt.c txtfind.h
	gcc -Wall -c main_txt.c

txtfind.o: txtfind.c txtfind.h
	gcc -Wall -fPIC -c txtfind.c	

isort: isort.o main_isort.o
	gcc -Wall -fPIC -o isort main_isort.o isort.o

main_isort.o: main_isort.c isort.h
	gcc -Wall -c main_isort.c

isort.o: isort.c isort.h
	gcc -Wall -fPIC -c isort.c	

.PHONY: clean all 

clean:
	rm -f *.o isort txtfind