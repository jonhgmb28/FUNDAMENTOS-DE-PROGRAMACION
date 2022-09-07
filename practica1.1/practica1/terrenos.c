#include <stdio.h>

int main(){
float terreno = 0.0;
    do
    {
        printf("  Bienvenido! \n \n  Introduce el numero de Acre que contiene tu terreno: ");
    }while(validarFlotante("%f", &terreno));
            if (terreno > 0.0)
            {
                terreno = (terreno * 4047)/10000;
                printf("  Su Terreno tiene: %.4f hectareas.", terreno);
            }else{
                main();
            }
    return 0;  
}

//============= METODOS AUXILIARES ===============================================

//--------------------VALIDAR QUE ES UN FLOTANTE--------------------------------
int validarFlotante(const char* caracter, void* var)
{
    int val1;
// CUANDO SEA 0 ES QUE NO SE CUMPLE, SI ES 1 ES QUE SI SE CUMPLE
    if(!scanf(caracter, var))
    {     
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }

// SE LIMPIA LAS ENTRADAS POR SI HAY SALTOS DE LINEAS, ESPACIOS, ETC. (EL BUFER ENTERO DEL TECLADO O MEMORIA INTERMEDIA)    
    if(getchar() != '\n')
    {
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }
    return 0;
}
//--------------------FIN VALIDAR QUE ES UN FLOTANTE-----------------------------