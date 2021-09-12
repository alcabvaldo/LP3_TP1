#include <fcntl.h> 
#include <stdlib.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <cstdio>
#include <string.h>

char* read_from_file (const char* filename, size_t length) 
{ 
    char* buffer; 
    int fd; 
    ssize_t bytes_read; 

    /* Allocate the buffer. */ 
    buffer = (char*) malloc (length); 
    if (buffer == NULL) 
        return NULL; 

    /* Open the file. */ 
    fd = open (filename, O_RDONLY); 
    if (fd == -1) { 
        /* open failed. Deallocate buffer before returning. */ 
        free (buffer); 
        return NULL; 
    } 

    /* Read the data. */ 
    bytes_read = read (fd, buffer, length); 
    if (bytes_read != length) { 
        /* read failed. Deallocate buffer and close fd before returning. */ 
        free (buffer); 
        close (fd); 
        return NULL; 
    } 

    buffer[length] =  '\0';

    /* Everything's fine. Close the file and return the buffer. */ 
    close (fd); 
    return buffer; 
}




//crea archivo con 10 numeros, retorna length
int crear_archivo_prueba (char* filename){
    FILE* fp = fopen( filename, "w" );
    int i;
    for (i=0; i<10;i++){
        fprintf(fp,"%d",i);
    }
    fclose(fp);
    return i;
}






//añadido para probar el código
int main(){
    //creo un archivo y cargo un int para realizar la prueba
    char filename[] = "archivo.txt";

    int leng = crear_archivo_prueba(filename);

    char* buffer = read_from_file (filename,leng); 
    printf("se leyó el erchivo sin problemas y el buffer es: %s\n",buffer);

    return 0;
}

