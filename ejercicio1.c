#include <stdio.h>

void ejercicio(){
    int num;

    do{
        printf("Ingrese un numero mayor a 0: ");
        scanf("%d", &num);
        
    } while (num < 0);

    int contador = num;

    for (int i = 1; i <= contador; i++){
        for (int j = 1; j <= num; j++){
        
        printf("%d", j);
        
        }
        printf("\n");
        num = num-1;
    }

}

int main(){

    ejercicio();

    return 0;
}