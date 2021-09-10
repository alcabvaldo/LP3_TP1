#include <stdio.h>

/* The ENVIRON variable contains the environment.
extern char** environ;
*/
extern char **environ;
int main ()
{
    char** var;
    
    //char* server_name = getenv ("SERVER_NAME");
    for (var = environ; *var != NULL; ++var)
        printf ("%s\n", *var);
    return 0;
}


