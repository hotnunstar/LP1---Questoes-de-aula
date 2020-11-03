/**
 * @file main.c
 * @author Nuno Araújo(20078)
 * @brief 
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float soma, subtracao, divisao, multiplicacao, num1, num2;

    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);
    
    soma = num1+num2;
    subtracao = num1-num2;
    divisao = num1/num2;
    multiplicacao = num1*num2;

    printf("\n%f+%f= %f", num1, num2, soma);
    printf("\n%f-%f= %f", num1, num2, subtracao);
    printf("\n%f/%f= %f", num1, num2, divisao);
    printf("\n%f*%f= %f", num1, num2, multiplicacao);

    getchar();
    return 0;
}
