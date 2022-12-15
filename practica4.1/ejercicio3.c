#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#include <string.h>

int main(){

    char frase[MAX];
    char adios[MAX] = "ADIOS";

    printf("Ingrese una palabra: ");
    gets(frase);

    if (strcmp(frase, adios) == 0)
    {
        printf("Adios");
    }else{
        main();
    }

    return 0;
}