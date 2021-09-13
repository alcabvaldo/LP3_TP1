
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#define FILE_LENGTH 0x100 

int main(int argc, char * const argv[]){     
    
    char str[] = "file";
    char* nombre;
    if (argc>1){
        nombre = argv[1];
    }else{
        nombre = str;
    }
    printf("Se leera lo que esta en el archivo mapeado: %s\n",nombre);

    int fd;
    void * file_memory;
    int integer;

    /*Open the file */
    fd = open(nombre, O_RDWR, S_IRUSR | S_IWUSR);

    /*Create a memory mapping*/
    file_memory = mmap(0,FILE_LENGTH, PROT_READ | PROT_WRITE, MAP_SHARED, fd ,0);
    
    close(fd);

    /*Read the integer, print it out, and double it */
    sscanf(file_memory,"%d", &integer);
    printf("value: %d\n",integer);
    sprintf((char *) file_memory, "%d\n ",2*integer);

    /*Release the memory (unnecessary because the program exits)*/
    munmap(file_memory,FILE_LENGTH);

    return 0;
}