#include <stdio.h>
#include <math.h>

int main(){

    //Supongamos que tenemos un triangulo abc y si queremos calcular primero que nada el radio del circulo.
    //Primero dividimos el triangulo equilatero en 2 y pintamos un punto a la mitad de esa linea
    //EL segmento de ese punto medio (G) a uno de los puntos A B o C, sera el segmento A o B o C (G), el cual equivale radio del circulo

    //Primero pedimos un lado del triangulo y aplicamos un pitagoraso de la mitad de un triangulo equilatero

    float lado, pitagoraso, radio, area;

    printf("Bienvenido\n");
    do{
    printf("Ingresa el valor de un lado del triangulo\n");
    }while (validardatos("%f", &lado));
    

    //Aplicamos pitagoraso
    if (lado > 0)
    {

        pitagoraso = pow(lado, 2)-pow(lado/2, 2);
        pitagoraso = sqrt(pitagoraso); 

        //printf("%f", pitagoraso);
        //Ahora teniendo  el pitagoraso aplicamos la relacion 2/3 = .6666 * CA para calcular el radio del circulo uwu

        radio = .6666*pitagoraso;

        //printf("%f", radio);

        //Y ya calculamos todo normal ez

        area = M_PI * pow(radio, 2);

        printf("EL area del circulo es %f", area);
    }else{
        main();
    }

    //recordar agregar el -lm pa compilar xd 

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