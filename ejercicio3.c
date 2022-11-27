#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float calificaciones[19], calificacionesF[5], aux = 0.0;
int aprobado = 0, reprobado = 0;

void llenado(){
    for (int i = 0; i <= 19; i++)
    {
           calificaciones[i] = rand() % (10 - 0 + 1) + 0;   
    }
}

void operaciones(){
    for (int i = 0; i <= 3; i++)
    {
        aux += calificaciones[i];
    }
    calificacionesF[0] = aux / 4;
    aux = 0.0;

    for (int i = 4; i <= 7; i++)
    {
        aux += calificaciones[i];
    }
    calificacionesF[1] = aux / 4;
    aux = 0.0;

    for (int i = 8; i <= 11; i++)
    {
        aux += calificaciones[i];
    }
    calificacionesF[2] = aux / 4;
    aux = 0.0;

    for (int i = 12; i <= 15; i++)
    {
        aux += calificaciones[i];
    }
    calificacionesF[3] = aux / 4;
    aux = 0.0;

    for (int i = 16; i <= 19; i++)
    {
        aux += calificaciones[i];
    }
    calificacionesF[4] = aux / 4;
    aux = 0.0;

    for (int i = 0; i <= 19; i++)
    {
        aux += calificaciones[i];     
    }
    calificacionesF[5] = aux / 20;
}

void comprobaciones(){
        for (int i = 0; i < 5; i++)
    {
        if (calificacionesF[i] < 6)
        {
            reprobado ++;
        }
        else if (calificacionesF[i] >= 6 || calificacionesF[i] <= 10)
        {
            aprobado ++;
        }
        printf("calificacion del estudiante %i: %.2f \n", i + 1, calificacionesF[i]);  
    }
    printf("calificacion del grupo: %.2f \n", calificacionesF[5]); 
    printf("Hay %i APROBADOS, %i REPROBADOS. \n", aprobado, reprobado);
}

int main(){
srand(time(NULL));
llenado();
operaciones();
comprobaciones();
    return 0;
}