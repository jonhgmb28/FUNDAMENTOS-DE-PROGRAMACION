#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <string.h>

void dados(){
    int lanzamientos[6]={0,0,0,0,0,0};
    int dado;
    //iniciamos el lanzamiento del dado

    for (int i = 0; i < 3000; i++){
        dado=0;
        dado = rand() % 6 + 1;
        if (dado == 1){
            lanzamientos[0]=lanzamientos[0]+1;
            
        }else if (dado == 2){
            lanzamientos[1]=lanzamientos[1]+1;
            
        }else if (dado == 3){
            lanzamientos[2]=lanzamientos[2]+1;

            
        }else if (dado == 4){
            lanzamientos[3]=lanzamientos[3]+1;
            
        }else if (dado == 5){
            lanzamientos[4]=lanzamientos[4]+1;
            
        }else if (dado == 6){
            lanzamientos[5]=lanzamientos[5]+1;
            
        }
    }
    
    float frecuencia[5];
    
    for (int i = 0; i <= 5; i++){
        frecuencia[i]=((float)lanzamientos[i]/3000)*100;
    }
    printf("__________________________________\n");
    printf("| CARA | FRECUENCIA | PORCENTAJE |");
    
    for (int i = 0; i <= 5; i++)
    {
        printf("\n|  %d   |     %d    |   %.2f%   |", i+1, lanzamientos[i], frecuencia[i]);
    }    
}


int main(){
    srand(time(NULL));
    printf("Bienvenido, vamos a lanzar el dado 3000 veces:)\n");
    dados();

    return 0;
}