#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char sala[3][4];

void actualiza(){
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sala[i][j] = '_'; //asiento vacio
            
        }
        
        
    }
    
}
void salas(){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("%c", sala[i][j]);
        }
        printf("\n");
        
    }
    printf("\n");

}
void reservar(){
    int fila, columna;
    printf("Ingrese la fila: ");
    scanf("%d", &fila);
    printf("Ingrese la columna: ");
    scanf("%d", &columna);
    if (sala[fila-1][columna-1] == '_'){
        sala[fila-1][columna-1] = 'X';
        printf("Asiento reservado con exito \n");
        menu();
        
    }else{
        printf("Asiento ocupado \n");
        menu();
    }
    
}
void cancelar(){
    int fila, columna;
    printf("Ingrese la fila: ");
    scanf("%d", &fila);
    printf("Ingrese la columna: ");
    scanf("%d", &columna);
    if (sala[fila-1][columna-1] == 'X'){
        sala[fila-1][columna-1] = '_';
        printf("Cancelado con exito \n");
        menu();
        
    }else{
        printf("No puedes cancelar un asiento vacio \n");
        menu();
    }
}
void menu(){
    printf("Bienvenido al sistema de reservas de asientos de cine, esta es nuestra sala:  \n");
    
    int opcion;
    salas();
    do{   

    printf("Selecciona una opcion: ");
    printf("\n1. Reservar ");
    printf("\n2. Cancelar ");
    printf("\n3. Salir \n");
    scanf("%d", &opcion);

    } while (opcion < 1 || opcion > 3);

    switch (opcion)
    {
    case 1:
        reservar();
        break;

    case 2:
        cancelar();
        break;
    case 3:
        break;
    
    default:
        break;
    }
    
}

int main(){
    actualiza();
    menu();
    
}