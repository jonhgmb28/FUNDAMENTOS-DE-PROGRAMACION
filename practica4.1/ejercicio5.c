#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 99

void cambio(char frase[MAX], int conteo){

    frase[0]=toupper(frase[0]);
    for (int i = 0; i <= conteo; i++)
    {
        if (frase[i] == ' ')
        {
            frase[i+1]=toupper(frase[i+1]);
        }
        
    }
    for (int i = 0; i <= conteo; i++)
    {
        if (frase[i] == ' ')
        {
            for (int j = i; j <= conteo; j++)
            {
                frase[j]=frase[j+1];
            }
            
            
        }
        
    }
    
    
}

int main(){
    char frase[MAX];

    printf("Ingrese una frase: ");
    fgets(frase, MAX, stdin);
    int conteo = strlen(frase);

    for (int i = 0; i <= conteo; i++)
    {
        frase[i] =  tolower(frase[i]);
    
    }
    cambio(frase, conteo);
    printf("%s", frase);
}


