
listing-1.1: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp
	mkdir -p bin/capitulo_1/1.1/ 
	g++ src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp -o bin/capitulo_1/1.1/reciprocal.o
listing-1.2 : listing-1.1
listing-1.3 : listing-1.1

listing-2.1 : src/capitulo_2/2.1/arglist.c
	mkdir -p bin/capitulo_2/2.1/ 
	g++ src/capitulo_2/2.1/arglist.c -o bin/capitulo_2/2.1/arglist.o

listing-2.2 : src/capitulo_2/2.2/getopt_long.c

listing-4.3 : src/capitulo_4/4.3/thread-create2.c
	mkdir -p bin/capitulo_4/4.3/ 
	cc  -o  bin/capitulo_4/4.3/thread-create2  src/capitulo_4/4.3/thread-create2.c  -lpthread

listing-4.7 : src/capitulo_4/4.7/tsd.c
	mkdir -p bin/capitulo_4/4.7/ 
	cc  -o  bin/capitulo_4/4.7/tsd  src/capitulo_4/4.7/tsd.c  -lpthread

listing-4.15 : src/capitulo_4/4.15/thread-pid.c
	mkdir -p bin/capitulo_4/4.15/ 
	cc  -o  bin/capitulo_4/4.15/thread-pid  src/capitulo_4/4.15/thread-pid.c  -lpthread

all: 
	listing-1.1
	listing-4.3
	listing-4.7
	listing-4.15
clean: 
	rm -rf bin
