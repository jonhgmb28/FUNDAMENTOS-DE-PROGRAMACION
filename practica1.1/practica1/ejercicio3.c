#include <stdio.h>
#include <math.h>


int main(){

    float radio;
    double perimetro, area;
    
    printf("Bienvenido al calculo de areas y perimetros de circulos\n");

    do{

     printf("Ingresa el valor del radio del circulo\n");

    } while (validardatos("%f", &radio));

    if (radio > 0){

        perimetro = 2*(M_PI)*(radio);
        area = M_PI * (pow(radio, 2 ));
        printf("EL perimetro del circulo es %f", perimetro);
        printf("\nEL area del circulo es %f", area);
        
    }else{

        main();

    }

    //para compilar pow utilizar "-lm" para el ejecutable

    

    return 0;
}
int validardatos(const char* caracter, void* var){

    int val1;

    if (!scanf(caracter, var)){
        
        while ((val1=getchar())!= '\n' && val1 != EOF);
     
        return 1;
           
    }

    if (getchar()!='\n'){
        
        while ((val1=getchar())!= '\n' && val1 != EOF);
        
        return 1;
           
    }
     
    return 0;
    

}