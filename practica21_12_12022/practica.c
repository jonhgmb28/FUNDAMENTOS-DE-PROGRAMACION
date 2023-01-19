#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <time.h>

//RIVERA GARCIA JONATHAN ULISES ICV9
//PRACTICA 21/12/2020

void imprimir(int *ar, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", ar[i]);
    }
}
void mayor(int *ar, int n){
    int mayor = 0, i,j;
    for (int i = 0; i < n; i++){
        if (ar[i] > mayor){     //si el valor del espacio de memoria es mayor al valor de la variable mayor se guarda ese numero
            mayor = ar[i];
            j=i;
        }
    }
    printf("\nLa persona con la edad mas alta es %d y su edad es: %d", j+1, mayor);
}

void menor(int *ar, int n){
    int menor = 100;
    int i,j;
    for (i = 0; i < n; i++){
        if (ar[i] < menor){
            menor = ar[i];
            j=i;
        }
    }
    printf("\nLa persona con la edad mas baja es %d y su edad es: %d", j+1, menor);
}


void llenar(int *ar, int n){
    for (int i = 0; i < n; i++){
        ar[i] = rand() % 100+1;  //llena el espacio de memoria con numeros aleatorios del 1 al 100
    }
    imprimir(ar, n);
    mayor(ar, n);
    menor(ar, n);
}


int main(){
    srand(time(NULL));          
    int edad_g;
    printf("Ingrese la cantidades de personas: ");
    scanf("%d", &edad_g);                           //hasta aqui pedimos el numero de personas para el arreglo dinamico:)
    int *edades = malloc(edad_g * sizeof(int));     //reservamos la cantidad de memoria de la cantidades de edades a guardar

    llenar(edades, edad_g); //mandamos a llanar la funcion llenar y mandamos el puntero y la cantidad de personas    
    free(edades);


    return 0;
}
