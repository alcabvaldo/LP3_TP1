
listing-1.1: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp
	mkdir -p bin/capitulo_1/1.1/ 
	g++ src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp -o bin/capitulo_1/1.1/reciprocal.o
listing-1.2 : listing-1.1
listing-1.3 : listing-1.1


listing-2.1 : src/capitulo_2/2.1/arglist.c
	mkdir -p bin/capitulo_2/2.1/ 
	g++ src/capitulo_2/2.1/arglist.c -o bin/capitulo_2/2.1/arglist.o

listing-2.2 :

listing-2.3 :

listing-2.4 :

listing-2.5 :

listing-2.6 : src/capitulo_2/2.6/readfile.c
	mkdir -p bin/capitulo_2/2.6/ 
	g++ src/capitulo_2/2.6/readfile.c -o bin/capitulo_2/2.6/readfile.o

all: 
	listing-1.1

clean: 
	rm -rf bin