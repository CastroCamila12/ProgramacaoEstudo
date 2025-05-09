#include <stdio.h>

int main(){

/*  int numero1, numero2;
    int soma,subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2:\n");
    scanf("%d", &numero2);


    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);*/


/* lembrete:
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)  */
    
    /*int numero1 = 10, numero2, resultado;

    resultado = 10;
    printf("resultado: %d\n", resultado);

    resultado += 20;
    printf("resultado: %d\n", resultado);

    resultado -= numero1;
    printf("resultado: %d\n", resultado);

    resultado *= 5;
    printf("resultado: %d\n", resultado);

    resultado /= 2;
    printf("resultado: %d\n", resultado);*/

    /*int numero1 = 1;

        printf("antes incremento: %d\n", numero1);
        
        numero1++;
        printf("depois incremento: %d\n", numero1);

        numero1--;
        printf("depois decremento: %d\n", numero1);*/

    
    int numero1 = 1, resultado;
        
        resultado = numero1++;
        printf("depois pós-incremento - número 1: %d - resultado: %d\n", numero1, resultado);

        resultado = ++numero1;
        printf("depois pré-incremento - número 1: %d - resultado: %d\n", numero1, resultado);

        resultado = numero1--;
        printf("depois pós-decremento - número 1: %d - resultado: %d\n", numero1, resultado);

        resultado = --numero1;
        printf("depois pós-decremento - número 1: %d - resultado: %d\n", numero1, resultado);


    return 0;

}
    




