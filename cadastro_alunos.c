#include <stdio.h>

int main(){
    int idade = 18; 
    int matricula = 100;
    float altura = 1.75;
    char nome[20] = "Roberto";

    printf("Digite o seu nome:\n");
    scanf("%s", &nome);

    printf("Digite sua matricula:\n");
    scanf("%d", &matricula);

    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    
    printf("Digite sua altura:\n");
    scanf("%.2f", &altura);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade: %d - Altura: %.2f\n", idade, altura);

    return 0;
    

}