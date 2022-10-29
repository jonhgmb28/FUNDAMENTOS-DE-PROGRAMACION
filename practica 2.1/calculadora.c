#include <stdio.h>

char operdador;
float num1, num2;
float resultado;

float calculo(float num1, float num2, char operador){
    
    switch (operador){
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
        break;
    case '%':
         num1 = (int)num1;
         num2 = (int)num2;
        resultado = num1 % num2;
        break;
    default:
        printf("Operacion no valida");
        break;
    }
    return resultado;
}

int main(){

    printf("Bienvenido a la calculadora, tu operacion de forma n+n siendo (+) el operador deseado y n los numeros a operar\n");
    scanf("%.2f%.2c%f", &num1 ,&operdador, &num2);
    calculo(num1, num2, operdador);
    printf("El resultado es: %.2f", resultado);

    return 0;
}