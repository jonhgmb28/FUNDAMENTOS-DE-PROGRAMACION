#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct punto{
    int x;
    int y;
};
int distancia(struct punto p1, struct punto p2){
    int distancia;
    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distancia;
}

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    int lado1,lado2,lado3,lado4;
    
    
    printf("BIENVENIDO\n");
    printf("Ingrese las cordenadas del punto 1= 0,0\n");
    scanf("%d,%d", &x1,&y1);
    struct punto punto1={
        x1,y1
    };
    printf("Ingrese las cordenadas del punto 2= 0,0\n");
    scanf("%d,%d", &x2,&y2);
    struct punto punto2={
        x2,y2
    };
    printf("Ingrese las cordenadas del punto 3= 0,0\n");
    scanf("%d,%d", &x3,&y3);
    struct punto punto3={
        x3,y3
    };
    printf("Ingrese las cordenadas del punto 4= 0,0\n");
    scanf("%d,%d", &x4,&y4);
    struct punto punto4={
        x4,y4
    };
    //solo 2 lados por que como es un rectangulo tiene dos lados iguales 
    lado1 = distancia(punto1,punto2);
    lado2 = distancia(punto2,punto3);
    lado3 = distancia(punto3,punto4);
    lado4 = distancia(punto1,punto4);
    
    printf("\nEl perimetro es: %d", lado1+lado2+lado3+lado4);
    printf("\nEl area es: %d", lado1*lado2);
    

}