// no main
#include <sys/types.h>
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/sem.h>
#define key 10

/* We must define union semun ourselves. */
union semun {
    int val;
    struct semid_ds *buf;
    unsigned short int *array;
    struct seminfo *__buf;
};
/* Initialize a binary semaphore with a value of 1. */
int binary_semaphore_initialize (int semid)
{
    union semun argument;
    unsigned short values[1];
    values[0] = 1;
    argument.array = values;
    return semctl (semid, 0, SETALL, argument);
}

int main(){
    int semid = semget(key, 1, 0666 | IPC_CREAT);
    int semaforo = binary_semaphore_initialize(semid);
    if(semaforo >= 0){
        printf("Semaforo iniciado \n");
    }else{
        printf("error\n");
    }
    
    return 0;
}