//============= BIBLIOTECAS ===============================================
#include <stdio.h>
int bandera = 0;
float examen1, examen2, examen3, examenF, trabajoF;
//============= METODO MAIN ===============================================
int main(){

if (bandera == 0)
{
    exa1();
}
else if (bandera == 1)
{
    exa2();
}
else if (bandera == 2)
{
    exa3();
}
else if (bandera == 3)
{
    exaF();
}
else if (bandera == 4)
{
    trF();
}

    return 0;  
}

//============= METODOS AUXILIARES ===============================================


void exa1(){
    do
    {
        printf("\nIntroduce la calificacion de tu primer examen: ");
    }while(validarFlotante("%f", &examen1));
        if (examen1 >= 0.0 && examen1 <= 10)
        {
            examen1 = examen1;
            bandera = 1;
            main();
        }else{
            exa1();
        }
        
return 0;

}

void exa2(){
    do
    {
        printf("\nIntroduce la calificacion de tu segundo examen: ");
    }while(validarFlotante("%f", &examen2));
        if (examen2 >= 0.0 && examen2 <= 10)
        {
            examen2 = examen2;
            bandera = 2;
            main();
        }else{
            exa2();
        }
        
return 0;

}

void exa3(){
    do
    {
        printf("\nIntroduce la calificacion de tu tercer examen: ");
    }while(validarFlotante("%f", &examen3));
        if (examen3 >= 0.0 && examen3 <= 10)
        {
            examen3 = examen3;
            bandera = 3;
            main();
        }else{
            exa3();
        }
        
return 0;

}

void exaF(){
    do
    {
        printf("\nIntroduce la calificacion de tu examen final: ");
    }while(validarFlotante("%f", &examenF));
        if (examenF >= 0.0 && examenF <= 10)
        {
            examenF = examenF;
            bandera = 4;
            main();
        }else{
            exaF();
        }
        
return 0;

}

void trF(){
    do
    {
        printf("\nIntroduce la calificacion de tu trabajo final: ");
    }while(validarFlotante("%f", &trabajoF));
        if (trabajoF >= 0.0 && trabajoF <= 10)
        {
            trabajoF = trabajoF;
            float calF = 0.0;
            calF = (((examen1 + examen2 + examen3) / 3) * 0.55) + (examenF * 0.30) + (trabajoF * 0.15);
            printf("\nTu calificacion final es: %.2f", calF);
        }else{
            trF();
        }
        
return 0;

}

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

//Este bucle descarta los caracteres no deseados de la entrada para que la siguiente función de entrada tenga un flujo limpio y devuelve EOF(-1) en caso de un error al leer 
    if(getchar() != '\n')
    {
        while((val1 = getchar()) != '\n' && val1 != EOF);
        return 1;
    }
    return 0;
}
//--------------------FIN VALIDAR QUE ES UN FLOTANTE-----------------------------