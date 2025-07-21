#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int ajuda = 0;
int historia = 0;
char *visao[] = {"Anemo", "Geo", "Electro", "Dendro", "Hydro", "Pyro", "Cryo"};
int escolha1, escolha2, escolha3, escolha4, escolha5;
int perg1, perg2, perg3;
     
    printf("Por fim, qual o seu COMPANHEIRO DE VIAGEM? Escolha uma cor:\n");
    printf("1. Azul\n");
    printf("2. Vermelho\n");
    printf("3. Branco\n");
    printf("4. Amarelo\n");
    printf("5. Verde\n");
    printf("6. Violeta\n");
    printf("7. Cinza\n");
    printf("8. Laranja\n");
    printf("\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha5);


    if (escolha5 == 1){
        printf("Seu companheiro é: Mualani\n");
        ajuda += 4;
    }else if (escolha5 == 2){
        printf("Seu companheiro é: Paimon\n");
    }else if (escolha5 == 3){
        printf("Seu companheiro é: Xiao\n");
        ajuda += 5;
    }else if (escolha5 == 4){
        printf("Seu companheiro é: Andarilho\n");
        ajuda += 2;
    }else if (escolha5 == 5){
        printf("Seu companheiro é: Nahida\n");
        ajuda += 3;
    }else if (escolha5 == 6){
        printf("Seu companheiro é: Furina\n");
        ajuda += 1;   
    }else if (escolha5 == 7){
        printf("Seu companheiro é: Navia\n");
        ajuda += 3;
    }else if (escolha5 == 8){
        printf("Seu companheiro é: Heizou\n");
        ajuda += 5;
    }

    printf("Você e o seu companheiro de viagem começam uma pequena aventura!\n");
    printf("\n");
    printf("Vocês estão de passagem em Fontaine.\n");
    printf("Depois de comprarem suprimentos por lá, seguirão para Mondstadt.\n");
    printf("Então, você se depara com uma escolha:\n");
    printf("1. Escolher o navio maior. É uma embarcação moderna de Fontaine porém seu capitão é um pouco inexperiente.\n");
    printf("2. Escolher embarcar numa pequena embarcação dos mercenários de Sumeru. Ao menos terão uma viagem segura.\n");
    printf("3. Vamos de econômica mesmo, deixa eu chamar o quebra-mar ali.\n");
    printf("4. Perguntar a opinião do seu companheiro de viagem?\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg1);
    printf("\n");
    
    while (perg1 < 1 || perg1 > 4){
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &perg1);
        printf("\n");
    } 
    
    if (perg1 == 4){
        switch (escolha5){
          case 1:
          printf("Mualani: O importante é curtir a jornada, vamos sentir o vento nos nossos rostos, é como surfar!\n");
          printf("Mualani: Bora de quebra-mar!\n");
          break;
          case 2:
          printf("Paimon: Paimon acha que o navio maior de Fontaine é a melhor escolha.\n");
          printf("Paimon: Certamente tem muita comida! O que poderia dar errado?\n");
          break;
        }
     printf("\n");
     printf("Depois de conversar com seu companheiro, faça a sua escolha: ");
     scanf("%d", &perg1);
     printf("\n");

    }

    while (perg1 < 1 || perg1 > 3){
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &perg1);
        printf("\n");
    } 
    
    switch (perg1){
      case 1:
          printf("Vocês viajam com conforto. A rota escolhida entretanto os levam a um pequeno tumulto entre aberrações primordiais.\n");
          printf("A inexperiência do capitão pesa e as ondas desestabilizam muito o navio.\n");
          printf("Resultado: na confusão, vocês perdem grande parte dos suprimentos que compraram no mar!\n");
          historia + 1;
          break;
          
      case 2:
          printf("Vocês viajam junto com os mercenários de Sumeru.\n");
          printf("O capitão faz amizade com vocês após saber que são amigos e já trabalharam com a Dehya :D\n");
          printf("Resultado: viagem tranquila, mas a proteção dos mercenários não é baratinha. Menos mora na carteira!\n");
          historia + 3;
          break;
          
      case 3:
          printf("Espírito aventureiro a todo vapor! O quebra-mar é pequeno mas é igual coração de mãe!\n");
          printf("A viagem econômica demora mais e é mais cansativa que as outras opções.\n");
          printf("Resultado: viaem mais longa, mais energia gasta. Vocês chegam tarde da noite ao seu destino!");
          historia + 2;
          break;
    }









    return 0;
}