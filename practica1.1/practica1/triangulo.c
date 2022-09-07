//============= BIBLIOTECAS ===============================================
#include <stdio.h>
#include <math.h>
//============= METODO MAIN ===============================================
int main(){
float lado1 = 0.0, lado2 = 0.0, lado3 = 0.0, area = 0.0;;
    do
    {
        printf("  Bienvenido! \n \n  Introduce las medidas de los lados del triangulo. ");
    }while(validarFlotante("%f %f %f", &lado1, &lado2, &lado3));
            if (lado1 > 0.0 && lado2 > 0.0 && lado3 > 0.0)
            {
                float sp = (lado1 + lado2 + lado3)/2;
                area = sqrt(sp*(sp - lado1) * (sp - lado2) * (sp - lado3));
                printf("El area es: %.2f", area);
            }else{
                main();
            }
    return 0;  
}

//============= METODOS AUXILIARES ===============================================

//--------------------VALIDAR QUE ES UN FLOTANTE--------------------------------
int validarFlotante(const char* caracter1, char* caracter2, char* caracter3, void* var)
{
    int val1;
// CUANDO SEA 0 ES QUE NO SE CUMPLE, SI ES 1 ES QUE SI SE CUMPLE
    if(!scanf(caracter1, caracter2, caracter3, var))
    {     
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }

//Este bucle descarta los caracteres no deseados de la entrada para que la siguiente función de entrada tenga un flujo limpio y devuelve EOF(-1) en caso de un error al leer   
    if(getchar() != '\n')
    {
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }
    return 0;
}
//--------------------FIN VALIDAR QUE ES UN FLOTANTE-----------------------------