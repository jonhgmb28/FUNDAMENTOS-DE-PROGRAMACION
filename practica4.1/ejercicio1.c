#include <stdio.h>
#define MAX 19
#include <stdlib.h>
#include <time.h>

void comparar(float arregloa[], float arreglob[]){
    int com=0;
    for(int i=0; i<=MAX; i++){
        if(arregloa[i] == arreglob[i]){
             com=1;
        }
    }
    if(com==0){
        printf("\nLos arreglos son diferentes");
    }else{
        printf("\nLos arreglos son iguales");
    }

}

int main(){
    srand(time(NULL));
    float arregloa[MAX];
    float arreglob[MAX];

    for(int i=0; i<=MAX; i++){
        arregloa[i]= (float)rand() * (100-1)/RAND_MAX;
        arreglob[i]= (float)rand() * (100-1)/RAND_MAX;
    }
    for(int i=0; i<=MAX; i++){
        printf("%.2f ", arregloa[i]);
    }
    printf("\n");
    for (int i = 0; i <= MAX; i++)
    {
        printf("%.2f ", arreglob[i]);
    }
    

    comparar(arregloa, arreglob);


    return 0;
}