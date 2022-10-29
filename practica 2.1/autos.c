#include <stdio.h>
#include <math.h>

float sueldo = 7000.00, ventas = 0.0;

float calculo(){
        if (ventas >= 1000 && ventas <= 2999)
        {
            return sueldo + (ventas * 0.05);
        }else if (ventas >= 3000 && ventas <= 4999)
        {
            return sueldo + (ventas * 0.06);
        }else if (ventas >= 5000 && ventas <= 6999)
        {
            return sueldo + (ventas * 0.07);
        }else if (ventas > 6999)
        {
            return sueldo + (ventas * 0.08);
        }else{
            return sueldo;
        }
    
}

int validarFlotante(const char* caracter1, void* var)
{
    int val1;

    if(!scanf(caracter1, var))
    {     
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }
    if(getchar() != '\n')
    {
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }
    return 0;
}

int main(){

    do
    {
    printf("Bienvenido, porfavor ingresa el total de ventas: \n");
    
    }while(validarFlotante("%f", &ventas));
            if (ventas >= 0)
            {
                calculo();
                printf("Su sueldo es de: $%2.f",calculo());
            }else{
                main();
            }
    return 0;  
}




