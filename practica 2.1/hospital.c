#include <stdio.h>
#include <ctype.h>
#include <math.h>

int dias = 0, edad = 0, enfermedad = 0;

float calculo(float costo){
    dias = 0;
    printf("Introduzca la cantidad de dias hospitalizado: \n");
    scanf("%i",&dias);
    if(dias >= 0 && !isalpha(dias) && !isblank(dias) && !isdigit(dias) && !ispunct(dias))
    {
        printf("Introduzca su edad: \n");
        scanf("%i",&edad);
        if (edad > 0 && !isalpha(edad) && !isblank(edad) && !isdigit(edad) && !ispunct(edad))
        {
            if (edad >= 14 && edad <= 22)
            {
                printf("El total es de: $");
                return ((costo + (costo * 0.1)) * dias); 
            }else{
                printf("El total es de: $");
                return costo * dias;
            }
        }else{
            calculo(costo);
        }
        
    }else{
        calculo(costo);
    }
    printf("Hubo un fallo, porfavor intentalo denuevo Error: ");
    return EOF;
}

int main(){
    do
    {
        printf("Introduzca su padecimiento: \n 1. Diabetes \n 2. Hipertensi%cn \n 3. C%cncer \n",162, 160);
        scanf("%i",&enfermedad);
    }while(enfermedad < 1 && enfermedad > 3);
        switch (enfermedad)
        {
        case 1: 
            printf("%2.f",calculo(1300.0));
            break;
        case 2:
            printf("%2.f",calculo(900.0));
            break;
        case 3:
            printf("%2.f",calculo(2200.0));
            break;
        default:
            break;
        }
    return 0;
}



