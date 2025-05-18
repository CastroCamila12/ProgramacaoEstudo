#include <stdio.h>

int main(){

    /*int idade1 = 25; //Pedro
    int idade2 = 30; //João

    if (idade1 > idade2){
        printf("Pedro  é mais velho\n");
    }else{
        printf("João é mais velho\n");
    }


    int numero = 4;

    if (numero % 2 == 0){
        printf("O número é par\n");
    } else{
        printf("O número é ímpar\n");
    }

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Temperatura está alta.\n");
    } else {
        printf("Temperatura está dentro dos parâmetros.\n");
    }

    if(umidade > 50){
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade está dentro dos parâmetros.\n");
    }

    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo.\n");
    } else {
        printf("Estoque normal!\n");
    }

//estuturas encadeadas

    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if(idade > 60){
        printf("Você é um idoso.\n");
    } else if(idade < 60 && idade >= 18){
        printf("Você é um adulto.\n");
    } else if(idade < 18 && idade >= 12){
        printf("Você é um adolescente.\n");
    } else  {
        printf("Você é uma criança.\n");
    }


//estruturas aninhadas

int idade;
float renda;
int dependentes;

printf("Digite a sua idade:\n");
scanf("%d", &idade);

printf("Digite a sua renda mensal:\n");
scanf("%f", &renda);

printf("Digite o número de depentes:\n");
scanf("%d", &dependentes);

if(idade >= 18 && idade < 65){
    if(renda < 3000){
        if(dependentes > 2){
            printf("Você atende a todos os critérios.\n");
        } else {
            printf("Você não atende ao critério número de dependentes.\n");
        }

    } else {
        printf("Você não atende ao critério renda.\n");
    }

} else {
    printf("Você não atende ao critério idade.\n");
}*/

int numero;

printf("Digite um número:\n");
scanf("%d", &numero);

if (numero > 0){
    if (numero % 2 == 0){
        printf("O número é par\n");
    } else {
        printf("O número é impar\n");
    } 
} else if (numero < 0) {
    printf("O número é negativo\n");
    } else{
        printf("O número é 0\n");
    }


return 0;

}