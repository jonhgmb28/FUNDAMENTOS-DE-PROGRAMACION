#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int main(){

    char frase[MAX];
    char volteo[MAX];
    int palindromo;
    
    printf("Ingrese una palabra: ");
    gets(frase);

    int conteo = strlen(frase);

    conteo=conteo-1;
    
    for (int i = 0; i <= conteo; i++)
    {
        volteo[i] = frase[conteo - i];
    }

  
    if (strcmp(frase, volteo) == 0)
    {
            printf("Es palindromo");
       
    }else{
            printf("No es palindromo");
    }
    
    
    return 0;
}