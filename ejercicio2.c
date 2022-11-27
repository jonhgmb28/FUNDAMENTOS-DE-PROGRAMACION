#include <stdio.h>

void ejercicio(){

    int num;
    int factorial=1;

    do{
        printf("Ingrese un numero mayor a 0: ");
        scanf("%d", &num);
        
    } while (num <= 0);
    
    int suma=0;
    for (int i = 1; i <= num; i++){
        int fac = 1; //cada numero para cacular su factorial se necesita que se inicialice como 1 para 2! = 1*1*2
        printf("%d! + ", i);
        for (int j = 1; j <= i; j++){
           
           fac = fac * j;
             
        }
        suma=fac+suma;
    
    }
    printf(" = %d", suma);
    

}

int main(){

    ejercicio();

    return 0;
}