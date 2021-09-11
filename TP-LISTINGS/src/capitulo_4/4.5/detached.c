#include  <pthread.h>  
 
void*  thread_function  (void*  thread_arg)  
{ 
   /* Do  work  here...  */ 
   while(1){
       printf("Hola desde el mhilo");
   } 
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
   int count=0;
   /* Do  work  here...  */  
    while(count < 1000){
        printf("hola desde el main");
        count++;
    }
   /* No  need  to  join  the  second  thread.  */  
   return 0;  
} 