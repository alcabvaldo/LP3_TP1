
listing-1.1: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp
	mkdir -p bin/capitulo_1/1.1/ 
	g++ src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp -o bin/capitulo_1/1.1/reciprocal.o
listing-1.2 : listing-1.1
listing-1.3 : listing-1.1

listing-2.1 : src/capitulo_2/2.1/arglist.c
	mkdir -p bin/capitulo_2/2.1/ 
	g++ src/capitulo_2/2.1/arglist.c -o bin/capitulo_2/2.1/arglist.o

listing-2.4: src/capitulo_2/2.4/client.c
	mkdir -p bin/capitulo_2/2.4/
	cc  -o bin/capitulo_2/2.4/client src/capitulo_2/2.4/client.c

listing-3.2: src/capitulo_3/3.2/system.c
	mkdir -p bin/capitulo_3/3.2/
	cc  -o bin/capitulo_3/3.2/system src/capitulo_3/3.2/system.c

listing-3.6: src/capitulo_3/3.6/zombie.c
	mkdir -p bin/capitulo_3/3.6/
	cc  -o bin/capitulo_3/3.6/zombie src/capitulo_3/3.6/zombie.c

listing-4.3: src/capitulo_4/4.3/thread-create2.c
	mkdir -p bin/capitulo_4/4.3/ 
	cc  -o  bin/capitulo_4/4.3/thread-create2  src/capitulo_4/4.3/thread-create2.c  -lpthread

listing-4.7: src/capitulo_4/4.7/tsd.c
	mkdir -p bin/capitulo_4/4.7/ 
	cc  -o  bin/capitulo_4/4.7/tsd  src/capitulo_4/4.7/tsd.c  -lpthread

listing-4.11: src/capitulo_4/4.11/job-queue2.c
	mkdir -p bin/capitulo_4/4.11/ 
	cc  -o  bin/capitulo_4/4.11/job-queue2  src/capitulo_4/4.11/job-queue2.c  -lpthread

listing-4.15: src/capitulo_4/4.15/thread-pid.c
	mkdir -p bin/capitulo_4/4.15/ 
	cc  -o  bin/capitulo_4/4.15/thread-pid  src/capitulo_4/4.15/thread-pid.c  -lpthread

listing-5.4: src/capitulo_5/5.4/sem_pv.c
	mkdir -p bin/capitulo_5/5.4/
	cc  -o  bin/capitulo_5/5.4/sem_pv  src/capitulo_5/5.4/sem_pv.c

listing-5.8: src/capitulo_5/5.8/dup2.c
	mkdir -p bin/capitulo_5/5.8/
	cc  -o  bin/capitulo_5/5.8/dup2  src/capitulo_5/5.8/dup2.c

listing-5.12: src/capitulo_5/5.12/socket-inet.c
	mkdir -p bin/capitulo_5/5.12/
	cc  -o  bin/capitulo_5/5.12/socket-inet src/capitulo_5/5.12/socket-inet.c

all: listing-2.4 listing-3.2 listing-3.6 listing-4.3 listing-4.7 listing-4.15 listing-4.11 listing-5.4 listing-5.8 listing-5.12
clean: 
	rm -rf bin
