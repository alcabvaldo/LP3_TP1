#include <malloc.h> 
#include <pthread.h> 
#include <time.h> //para el random
#include <stdlib.h>

/* Allocate a temporary buffer. */ 
void* allocate_buffer (size_t size) 
{ 
    return malloc (size); 
} 

/* Deallocate a temporary buffer. */ 
void deallocate_buffer (void* buffer) 
{ 
    printf("se dealoco un buffer\n");
    free (buffer); 
} 

void do_some_work () 
{ 
    /* Allocate a temporary buffer. */ 
    void* temp_buffer = allocate_buffer (1024); 

    /* Register a cleanup handler for this buffer, to deallocate it in 
    case the thread exits or is cancelled. */ 
    pthread_cleanup_push (deallocate_buffer, temp_buffer); 

    /* Do some work here that might call pthread_exit or might be 
    cancelled... */ 
    if (rand()%2==1){
        printf("un hilo llamó a exit\n");
        pthread_exit(0);
    }
    
    /* Unregister the cleanup handler. Because we pass a nonzero value, 
    this actually performs the cleanup by calling 
    deallocate_buffer. */ 
    pthread_cleanup_pop (1); 
}



int main(void) {
    srand(time(NULL)); //seed nueva
    
    //tenemos tantos thread como elementos en producto[][]
    int num_de_threads = 5;
    pthread_t thread_id[num_de_threads];
    printf("Se crean %d hilos\n",num_de_threads);

    for (int i = 0; i < num_de_threads; i++) {
        //crea el hilo
        pthread_create(&thread_id[i],NULL,&do_some_work,NULL);
    }
    
    // espera a que todos los thread terminen
    for (int i=0;i<num_de_threads;i++){
        pthread_join(thread_id[i],NULL);
    }

    printf("como vemos, todos los hilos se desalocaron\n");

    return 0;
}
