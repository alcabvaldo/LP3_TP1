#include <sys/ipc.h>  
#include <sys/sem.h>  
#include <sys/types.h>
#include <stdio.h>

#define KEY 1000
/* We must define union semun ourselves. */  
 
union semun { 
    int val;  
    struct semid_ds *buf;  
    unsigned short int *array;  
    struct seminfo *__buf;  
};  
 
/* Obtain a binary semaphore's ID, allocating if necessary. */  
 
int binary_semaphore_allocation (key_t key, int sem_flags)  
{ 
    return semget (key, 1, sem_flags);  
}  
 
/* Deallocate a binary semaphore. All users must have finished their  
   use. Returns -1 on failure. */  
 
int binary_semaphore_deallocate (int semid)  

{ 
     union semun ignored_argument;  
     return semctl (semid, 1, IPC_RMID, ignored_argument);  
} 
int main(){
    //alocar
    int nroSem = binary_semaphore_allocation(KEY, IPC_CREAT); 
    int deall;
    if (nroSem != -1 ){
        printf("Allocation posible, sem Nro %d\n", nroSem);
        deall = binary_semaphore_deallocate(nroSem);
        if(deall == -1 )
            printf("No sepudo desallocar,sem nro %d\n", nroSem);
        else
            printf("Desallocado con exitod, sem nro %d\n", nroSem);
    }
    else 
        printf("Allocation imposible\n");
}