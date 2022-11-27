#include <stdio.h>

float datos[1], conversiones[1];
int bandera;

void llenado(){
    printf("Introduce los centimetros: ");
    scanf("%f", &datos[0]);
    printf("\n Introduce las libras: ");
    scanf("%f", &datos[1]);
}

void operaciones(){
    conversiones[0] = datos[0] / 2.54;
    conversiones[1] = datos[0] / 2.205;
    printf("%.2f centimetros son %f pulgadas \n", datos[0], conversiones[0]);
    printf("%.2f libras son %f kilogramos \n", datos[1], conversiones[1]);
}

int main(){
do
{
    llenado();
    operaciones();
    printf("Deseas repetir el programa? \n Escribe 1 para repetir sino escribe cualquier cosa.");
    scanf("%i",&bandera);
} while (bandera == 1);
    return 0;
}