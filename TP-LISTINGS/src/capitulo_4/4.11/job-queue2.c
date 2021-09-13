#include <malloc.h>  
#include <pthread.h>  
 
struct job  { 
   /* Link field for linked list.  */  
   struct  job*  next;  
 
   /* Other fields describing work to be done...  */  
};  
 
/* A linked list of pending jobs.  */  
struct job* job_queue;  
 
/* A mutex protecting job_queue.  */  
pthread_mutex_t  job_queue_mutex  =  PTHREAD_MUTEX_INITIALIZER;  
/* Process queued jobs until the queue is empty. */  
 
void* thread_function (void* arg)  
{ 
   while (1) { 
       struct job* next_job;  
 
       /*  Lock the mutex on the job queue. */  
       pthread_mutex_lock (&job_queue_mutex);  
       /*  Now it's safe to check if the queue is empty. */  
       if  (job_queue  ==  NULL)  
          next_job = NULL;  
       else  { 
           /*  Get the next available job. */  
           next_job  =  job_queue;  
           /*   Remove this job from the list.  */  
           job_queue = job_queue->next;  
        }  
        /* Unlock the mutex on the job queue because we're done with the  
              queue  for  now.  */  
         pthread_mutex_unlock  (&job_queue_mutex);  
 
         /* Was the queue empty?  If so, end the thread.  */  
         if  (next_job == NULL)  
               break;  
 
         /* Carry out the work.  */  
         //process_job (next_job);
         printf("Carry out the work");  
         /* Clean  up.  */  
         free (next_job);  
   }  
   return NULL;  
}

int main(){
	int i = 0;
	for(i = 0; i < 10; i++){
		struct job *x = (struct job*) malloc(sizeof(struct job));
		x->next = job_queue;
		job_queue = x;	
	}
	pthread_t thread1;
	pthread_create(&thread1, NULL, &thread_function, NULL);
	pthread_join(thread1, NULL);
	return 0;
}