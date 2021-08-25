
listing-1.1: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp
	mkdir -p bin/capitulo_1/1.1/ 
	g++ src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp -o bin/capitulo_1/1.1/reciprocal.o
listing-1.2 : listing-1.1
listing-1.3 : listing-1.1

listing-2.1 : src/capitulo_2/2.1/arglist.c
	mkdir -p bin/capitulo_2/2.1/ 
	g++ src/capitulo_2/2.1/arglist.c -o bin/capitulo_2/2.1/arglist.o

listing-2.2 : src/capitulo_2/2.2/getopt_long.c

listing-2.3 : src/capitulo_2/2.3/print-env.c
	mkdir -p bin/capitulo_2/2.3/
	g++ src/capitulo_2/2.3/print-env.c -o bin/capitulo_2/2.3/print-env.o

all: 
	listing-1.1

clean: 
	rm -rf bin
