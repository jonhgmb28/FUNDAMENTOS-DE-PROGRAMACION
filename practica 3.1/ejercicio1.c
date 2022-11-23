#include <stdio.h>

void validar(){
    int num;
    do{
        printf("Ingrese un numero mayor a 0: ");
        scanf("%d", &num);
    } while (num < 0);
    
   
    
}

int main(){

    validar();

    return 0;
}