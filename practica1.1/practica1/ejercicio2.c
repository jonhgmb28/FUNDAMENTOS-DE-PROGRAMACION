#include <stdio.h>

int main(){

    float minutos;
    int segundos1, segundos;

    printf("Bienvenido\n");

    do{
        
        printf("Ingresa el tiempo de tu recorrido en minutos para calcular tu velocidad media\n");

    } while (validardatos("%f", &minutos));
    
    if (minutos > 0){

        segundos1=(minutos*100);
        segundos=segundos1%100;
        float total_m=(((segundos1-segundos)/100)*60)+segundos;
        
        
        //No se si esta es la forma corecta de hacerlo pero se confia 
        

        double velocidad = 1500/total_m;

        printf("%f", velocidad);

    }else{

        main();
    
    }
    
    
    

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