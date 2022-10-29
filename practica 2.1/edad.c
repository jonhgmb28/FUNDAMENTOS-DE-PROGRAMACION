#include <stdio.h>

int dias, años, meses;

//int conteo=0;

int calculo(int dia1, int mes1, int año1){

  int dia2, mes2, año2;
     
  printf("Ingresa tu fecha de nacimiento en el mismo formato\n");
  scanf("%d/%d/%d", &dia2, &mes2, &año2);

            
  if (dia2 <= 31 && dia2 >=1 && mes2 <= 12 && mes2 >= 1 && año2 <= 2022 && año2 >= 0){
                  
    años = año1-año2;
    mes1 = mes1-12;
    mes2 = mes2-12;
    meses = mes1-mes2;
    dias = (31-dia1)+(31-dia2);

    return años, meses, dias;
                        
  }else{

    printf("Escribe fechas reales");
    scanf("%d/%d/%d", &dia2, &mes2, &año2);
    calculo(dia2, mes2, año2);
  }

}


int main(){
  
    int dia1, mes1, año1;
    
    printf("Bienvenido al calculo de edades, ingresa la fecha en la que estas consultando de forma 00/00/0000\n");
    scanf("%d/%d/%d", &dia1, &mes1, &año1);

    if (dia1 <= 31 && dia1 >=1 && mes1 <= 12 && mes1 >= 1 && año1 <= 2022 && año1 >= 0){ 

      calculo(dia1, mes1, año1);

      printf("Tu edad es: %d años, %d meses y %d dias.", años,meses,dias);

      /* DIAS EXTRA POR AÑOS BICIESTOS PERO NO QUIERO HACER SU PSEUDOCODIGO ASI QUE MEJOR LO DEJAMOS COMENTADO:3

      for (int i = año2; i <= año1; i++){

        if ((i % 4) == 0){

          conteo=conteo+1;
                             
        }else{

          conteo=conteo;
        }
                                                  
      }
      */

    }
    else{

      printf("Escribe fechas reales\n");
      main();

    }

    

    return 0;
}