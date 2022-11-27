#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tiradas = 0, random = 0, dado[1];
float cuenta = 0.0;

int main(){

    do
    {
    printf("Introduce el numero de tirardas que quieres realizar: ");
    scanf("%i",&tiradas);
    } while (tiradas < 0);
    srand(time(NULL));
    random = (6 - 1 + 1) + 1;
    for(int i = 1; i<= tiradas;i++){
        dado[0]= rand() % random;
        dado[1]= rand() % random;
        printf("Tirada %i \n", i);
        printf("Dado 1: %i \n", dado[0]);
        printf("Dado 2: %i \n", dado[1]);
        int suma = dado[0] + dado[1];
        printf("%i + %i = %i", dado[0], dado[1], suma);
        if (suma % 2 == 0 )
        {
            if(suma == 12)
            {
                printf(" \nNada! \n");
                cuenta = cuenta;
                printf("Cuenta: %.2f \n", cuenta);
            }else{
                printf("\n Par! \n");
                cuenta = cuenta + suma * 10.50;
                printf("Cuenta: %.2f \n", cuenta);
            }
        }else{
            printf("\n Impar! \n");
            cuenta = cuenta - suma * 10;
            printf("Cuenta: %.2f \n", cuenta);
        }
        
    }

    return 0;
}