
listing-1.1: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp
	mkdir -p bin/capitulo_1/1.1/ 
	g++ src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp -o bin/capitulo_1/1.1/reciprocal.o

listing-1.2 : listing-1.1

listing-1.3 : listing-1.1

#########

listing-2.1 : src/capitulo_2/2.1/arglist.c
	mkdir -p bin/capitulo_2/2.1/ 
	g++ src/capitulo_2/2.1/arglist.c -o bin/capitulo_2/2.1/arglist.o

listing-2.2 :

listing-2.3 : src/capitulo_2/2.3/print-env.c
	mkdir -p bin/capitulo_2/2.3/
	g++ src/capitulo_2/2.3/print-env.c -o bin/capitulo_2/2.3/print-env.o

listing-2.4 :

listing-2.5 :

listing-2.6 : src/capitulo_2/2.6/readfile.c
	mkdir -p bin/capitulo_2/2.6/ 
	g++ src/capitulo_2/2.6/readfile.c -o bin/capitulo_2/2.6/readfile.o

listing-2.7 : src/capitulo_2/2.7/app.c
	mkdir -p bin/capitulo_2/2.7/
	g++ src/capitulo_2/2.3/app-env.c -o bin/capitulo_2/2.7/app.o
	
listing-2.8 : listing-2.7

listing-2.9 : 

#########################

listing-3.1 : src/capitulo_2/3.1/print-pid.c
	mkdir -p bin/capitulo_2/3.1/
	g++ src/capitulo_2/3.1/print-pid.c -o bin/capitulo_2/3.1/print-pid.o
	
listing-3.2 :

listing-3.3 : src/capitulo_3/3.3/fork.c
	mkdir -p bin/capitulo_3/3.3/ 
	g++ src/capitulo_3/3.3/fork.c -o bin/capitulo_3/3.3/fork.c
	
listing-3.4 : 

listing-3.5 : src/capitulo_2/3.5/sigusr1.c
	mkdir -p bin/capitulo_2/3.5/
	g++ src/capitulo_2/3.5/sigusr1.c -o bin/capitulo_2/3.5/sigusr1.o
	
listing-3.6 :
	
listing-3.7 :

############################

listing-4.1 : src/capitulo_2/4.1/thread-create.c
	mkdir -p bin/capitulo_2/4.1/
	g++ src/capitulo_2/4.1/thread-create.c -o bin/capitulo_2/4.1/thread-create.o -lpthread

listing-4.2 : src/capitulo_2/4.2/pthread_create.c
	mkdir -p bin/capitulo_2/4.2/
	g++ src/capitulo_2/4.2/pthread_create.c -o bin/capitulo_2/4.2/pthread_create.o -lpthread
	
listing-4.3 :
	
listing-4.4 :
	
listing-4.5 :

listing-4.6 : src/capitulo_2/4.6/critical-section.c
	mkdir -p bin/capitulo_2/4.6/
	g++ src/capitulo_2/4.6/critical-section.c -o bin/capitulo_2/4.6/critical-section.o
	
listing-4.7 :
	
listing-4.8 :
	
listing-4.9 :
	
listing-4.10 :
	
listing-4.11 :
	
listing-4.12 :
	
listing-4.13 :

listing-4.14 : src/capitulo_2/4.14/condvar.c
	mkdir -p bin/capitulo_2/4.14/
	g++ src/capitulo_2/4.14/condvar.c -o bin/capitulo_2/4.14/condvar.o -lpthread
	
listing-4.15 :
	
#############################

listing-5.1 :
	
listing-5.2 :

listing-5.3 : src/capitulo_2/5.3/sem_init.c
	mkdir -p bin/capitulo_2/5.3/
	g++ src/capitulo_2/5.3/sem_init.c -o bin/capitulo_2/5.3/sem_init.o
	
listing-5.4 :
	
listing-5.5 :
	
listing-5.6 :

listing-5.7 : src/capitulo_2/5.7/pipe.c
	mkdir -p bin/capitulo_2/5.7/
	g++ src/capitulo_2/5.7/pipe.c -o bin/capitulo_2/5.7/pipe.o
	
listing-5.8 :
	
listing-5.9 :
	
listing-5.10 :

listing-5.11 : src/capitulo_2/5.11/socket-client.c
	mkdir -p bin/capitulo_2/5.11/
	g++ src/capitulo_2/5.11/socket-client.c -o bin/capitulo_2/5.11/socket-client.o
	
listing-5.12 :

##################################

all : listing-1.1 listing-2.1 listing-2.2 listing-2.3 listing-2.4 listing-2.5 listing-2.6 listing-2.7 listing-2.9 listing-3.1 listing-3.2 listing-3.3 listing-3.4 listing-3.5 listing-3.6 listing-3.7 listing-4.1 listing-4.2 listing-4.3 listing-4.4 listing-4.5 listing-4.6 listing-4.7 listing-4.8 listing-4.9 listing-4.10 listing-4.11 listing-4.12 listing-4.13 listing-4.14 listing-4.15 listing-5.1 listing-5.2 listing-5.3 listing-5.4 listing-5.5 listing-5.6 listing-5.7 listing-5.8 listing-5.9 listing-5.10 listing-5.11 listing-5.12

clean: 
	rm -rf bin
