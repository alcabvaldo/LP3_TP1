#include <stdlib.h> 
#include <stdio.h> 
#include <fcntl.h> 
#include <sys/mman.h> // este es para la memoria mapeada
#include <sys/stat.h> 
#include <time.h> 
#include <unistd.h> 

#define FILE_LENGTH 0x100 

/* Return a uniformly random number in the range [low,high]. */ 
int random_range (unsigned const low, unsigned const high) 
{ 
    unsigned const range = high - low + 1; 
    return low + (int) (((double) range) * rand () / (RAND_MAX + 1.0)); 
} 


int main (int argc, char **argv) 
{     
    char str[] = "file";
    char* nombre;
    if (argc>1){
        nombre = argv[1];
    }else{
        nombre = str;
    }

    int fd; 
    void* file_memory; 

    /* Seed the random number generator. */ 
    srand (time (NULL)); 

    /* Prepare a file large enough to hold an unsigned integer. */ 
    fd = open (nombre, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR); 
    lseek (fd, FILE_LENGTH+1, SEEK_SET); 
    write (fd, "", 1); 
    lseek (fd, 0, SEEK_SET); 

    /* Create the memory mapping. */ 
    //le pone ese 0 pq en el mismo directorio se crea
    file_memory = mmap (0, FILE_LENGTH, PROT_WRITE, MAP_SHARED, fd, 0); 
    close (fd); 

    /* Write a random integer to memory-mapped area. */ 
    sprintf((char*) file_memory, "%d\n", random_range (-100, 100)); 

    /* Release the memory (unnecessary because the program exits). */ 
    munmap (file_memory, FILE_LENGTH); 

    printf("Se cargo un numero random en el archivo mapeado: %s\n",nombre);

    return 0; 
} 