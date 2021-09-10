#include <stdio.h>
#include "tiffio.h"

int main(int argc, char** argv){
    TIFF* tiff;
    tiff = TIFFOpen (argv[1], "r");
    if(tiff){
        fprintf("Archivo encontrado");
    }
    else
    {
        fprintf("No encontrado");
    }

    TIFFClose (tiff);
    return 0;
}