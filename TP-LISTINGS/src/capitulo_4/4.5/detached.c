#include  <pthread.h>  
#include <stdio.h>
 #include <unistd.h>

void*  thread_function  (void*  thread_arg)  
{ 
   /* Do  work  here...  */ 
   sleep(1);
   printf("hilo\n");
   return NULL;
}  
 
int  main  ()  
{ 
   pthread_attr_t attr;  
   pthread_t  thread;  
 
   pthread_attr_init  (&attr);  
   pthread_attr_setdetachstate  (&attr,  PTHREAD_CREATE_DETACHED);  
   pthread_create  (&thread,  &attr,  &thread_function,  NULL);  
   pthread_attr_destroy  (&attr);  
   int contador_seg = 0;
   /* Do  work  here...  */ 
   while(contador_seg < 500){
       printf("Desde el main, %d\n",contador_seg++); //puede que no termine antes de que regrese al hilo
   }  
       
   /* No  need  to  join  the  second  thread.  */  
   //esperamos hasta que el hilo termine o bien podiamos agregar un 
   //tiempo mayor al main, ya que el main no deberia terminar antes que los hilos.
   pthread_exit(&thread);
   return 0;  
} 