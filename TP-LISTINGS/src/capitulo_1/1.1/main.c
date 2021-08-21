#include <stdio.h>
#include "reciprocal.hpp"
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv)
{
    int i;
    if (argc>1){
        i = atoi (argv[1]);
    }else{
        i=2;
    }
    printf ("The reciprocal of %d is %g\n", i, reciprocal (i));
    return 0;

}