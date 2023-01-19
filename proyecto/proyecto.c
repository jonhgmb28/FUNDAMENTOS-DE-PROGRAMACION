#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char tablero_aleatorio(char tablero[5][5]){
  int x;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      x = rand() % 2;
      if (x==1){
        tablero[i][j] = '*';
      }
      else{
        tablero[i][j] = '_';
      }
      
      
    }
  }
  return tablero;
}
char tablero_manual(char tablero[5][5]){
  int x;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      printf("Ingresa el valor de la posicion (%d,%d), viva (1), muerta (0): ", i+1, j+1);
      scanf("%d", &x);
      if (x==1){
        tablero[i][j] = '*';
      }
      else{
        tablero[i][j] = '_';
      }
    }
  }
  return tablero;
}

void imprimir_tablero(char tablero[5][5], int d){

  system("cls");
  printf("Instante %d\n", d);

  for (int i = 0; i < 5; i++){

    printf("_________________________\n");

    for (int j = 0; j < 5; j++){

      printf("| %c |", tablero[i][j]);

    }
    
    printf("\n");
    
  }

  printf("_________________________\n\n\n");

}

char reglas(int vivas , int muertas, char letra){
  //validacion
  char viva = '*';
  char muerto = '_';

  //validacion
  if (letra == '*'){
    if (vivas >= 2 && vivas <= 3){
      return viva;
    }else if (vivas < 2 || vivas > 3){
      return muerto;
    }
    
    
  }else if (letra == '_'){
    if (vivas==3){
      return viva;
    }else{
      return muerto;
    }
  }
  


}

char actualizar_tablero(char tablero[5][5]){
  
    char tablero_aux[5][5];
    int vivas=0, muertas=0;
  
    for (int i = 0; i < 5; i++){
  
      for (int j = 0; j < 5; j++){
  
        tablero_aux[i][j] = tablero[i][j];
  
      }
  
    }
    //esquina [0][0]
    vivas=0, muertas=0;
    if (tablero_aux[0][1] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[0][1] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[1][1] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[1][1] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[1][0] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[1][0] == '_'){
      muertas = muertas + 1;
    }

    

  tablero[0][0] = reglas(vivas, muertas, tablero_aux[0][0]);

  //esquina [0][4]
  vivas=0, muertas=0;

    if (tablero_aux[1][3] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[1][3] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[0][3] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[0][3] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[1][4] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[1][4] == '_'){
      muertas = muertas + 1;
    }
    

    

    tablero[0][4] = reglas(vivas, muertas, tablero_aux[0][4]);

    //esquina [4][0]
    vivas=0, muertas=0;

    if (tablero_aux[4][1] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[4][1] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[3][0] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[3][0] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[3][1] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[3][1] == '_'){
      muertas = muertas + 1;
    }

    

        tablero[4][0] = reglas(vivas, muertas, tablero_aux[4][0]);

    //esquina [4][4]
    vivas=0, muertas=0;
    
    if (tablero_aux[4][3] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[4][3] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[3][3] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[3][3] == '_'){
      muertas = muertas + 1;
    }
    if (tablero_aux[3][4] == '*'){
      vivas = vivas + 1;
    }
    else if (tablero_aux[3][4] == '_'){
      muertas = muertas + 1;
    }

    

      tablero[4][4] = reglas(vivas, muertas, tablero_aux[4][4]);

    

    //lateral superior
    muertas=0;
    vivas=0;
    for (int i = 0; i < 1; i++){
      
      for (int j = 1; j < 4; j++){
        muertas=0;
        vivas=0;
        if (tablero_aux[i][j-1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i][j+1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j-1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i+1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j+1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i+1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i+1][j] == '_'){
          muertas = muertas + 1;
        }   

        char letras = tablero_aux[i][j];

        tablero[i][j] = reglas(vivas, muertas, letras);
      } 
    }

    //lateral inferior
    muertas=0;
    vivas=0;
    for (int i = 4; i < 5; i++){
      
      for (int j = 1; j < 4; j++){
        muertas=0;
        vivas=0;
        if (tablero_aux[i][j-1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i][j+1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j-1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i-1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j+1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i-1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i-1][j] == '_'){
          muertas = muertas + 1;
        }   

        char letras = tablero_aux[i][j];

        tablero[i][j] = reglas(vivas, muertas, letras);
      } 
    }

    //lateral izquierdo

    
    for (int i = 1; i < 4; i++){
      
      for (int j = 0; j < 1; j++){
        muertas=0;
        vivas=0;
        if (tablero_aux[i-1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i-1][j] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i+1][j] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j+1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i+1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j+1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i-1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i][j+1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i][j+1] == '_'){
          muertas = muertas + 1;
        }

        char letras = tablero_aux[i][j];

        tablero[i][j] = reglas(vivas, muertas, letras);
      } 
    }

    //lateral derecho

    
    for (int i = 1; i < 4; i++){
      
      for (int j = 4; j < 5; j++){
        muertas=0;
        vivas=0;
        if (tablero_aux[i-1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i-1][j] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i+1][j] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j-1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i+1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j-1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i-1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i][j-1] == '*'){
          vivas = vivas + 1;
        }else if (tablero_aux[i][j-1] == '_'){
          muertas = muertas + 1;
        }

        char letras = tablero_aux[i][j];

        tablero[i][j] = reglas(vivas, muertas, letras);
      } 
    }

    //centro

    for (int i = 1; i < 4; i++){
      for (size_t j = 1; j < 4; j++)
      {
        muertas=0;
        vivas=0;
        if (tablero_aux[i][j-1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i][j+1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j-1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i-1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j+1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i-1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i-1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i-1][j] == '_'){
          muertas = muertas + 1;
        }
        
        if (tablero_aux[i+1][j-1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i+1][j-1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j+1] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i+1][j+1] == '_'){
          muertas = muertas + 1;
        }
        if (tablero_aux[i+1][j] == '*'){
          vivas = vivas + 1;
        }
        else if (tablero_aux[i+1][j] == '_'){
          muertas = muertas + 1;
        }
        char letras = tablero_aux[i][j];

        tablero[i][j] = reglas(vivas, muertas, letras);
      }
    }  

  
  return tablero;
}


int main(){

  int instantes, respuesta, d=0, tecla;
  char tablero[5][5];

  srand(time(NULL));

  printf("BIENVENIDO AL JUEGO DE LA VIDA");
  printf("\nIngresa el numero de instantes: \n");
  scanf("%d", &instantes);
  printf("Deseas que el tablero sea aleatorio? (1)Si (2)No \n");
  scanf("%d", &respuesta);

  if (respuesta == 1){

    tablero_aleatorio(tablero);

  }
  else{

    tablero_manual(tablero);

  }
  
  while (d <= instantes){

    imprimir_tablero(tablero, d);
    
    do
    {
      printf("Presiona 0 para continuar para continuar\n");
      scanf("%d", &tecla);
    } while (tecla != 0);
    d = d + 1;
    actualizar_tablero(tablero);
    
    //aqui pones el metodo del juego y ya solo se va actualizando el tablero en pantalla

  }

  return 0;
}