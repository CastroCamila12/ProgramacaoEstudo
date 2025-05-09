#include <stdio.h>

//int idade; Declara uma variável inteira chamada "idade"
//float altura; Declara uma variável de ponto flutuante chamada "altura"
//double salario; Declara uma variável de ponto flutuante de dupla precisão chamada "salario"
//char opcao; Declara uma variável de caractere chamada "opcao"

int main(){
    int idade = 31;
    float altura = 1.60;
    char opcao = 'a';
    char nome[20] = "Camila";

//printf(“%formato1 %formato2”, variável1, variável2);
/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.*/

   /*printf("A idade é: %d anos\n", idade );
    printf("A altura é: %.2f metros\n", altura);
    printf("Meu nome é: %s\n", nome);*/ 
   
//scanf(''formato'', &variavel);

    /*printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);*/

    printf("Digite seu nome aqui: \n");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Nome digitado: %s\n", nome);



    return 0;


}


