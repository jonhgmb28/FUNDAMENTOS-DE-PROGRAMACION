#include <stdio.h>

void ejercicio(){

    int num;
    int factorial=1;

    do{
        printf("Ingrese un numero mayor a 0: ");
        scanf("%d", &num);
        
    } while (num < 0);
    
    int suma=0;//esta variable es para guardar el factorial, ya que como incializo la variable factorial en cada iteracion del for en 1, los datos se pierden
    
    for (int i = 1; i <= num; i++){
        int fac = 1;
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