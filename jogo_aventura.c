#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int ajuda = 0;
int historia = 0;
char *visao[] = {"Anemo", "Geo", "Electro", "Dendro", "Hydro", "Pyro", "Cryo"};
int escolha1, escolha2, escolha3, escolha4, escolha5;
int perg1, perg2, perg3;

    printf("Quem é você em Teyvat?\n");
    printf("Escolha aleatoriamente sua visão, arma, nação de origem, facção, e companheiro de viagem\n");
    printf("\n");

    printf("Primeiro, qual a sua VISÃO? Escolha sua flor preferida:\n");
    printf("1. Lírio de vidro\n");
    printf("2. Cecília\n");
    printf("3. Flor de seda\n");
    printf("4. Rosa arco-íris\n");
    printf("5. Qingxin\n");
    printf("6. Flor rociomarinha\n");
    printf("7. Lótus nilotpala\n");
    printf("\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("\n");
    printf("***--------------***\n");
    printf("\n");

    printf("Próxima questão! Qual a sua ARMA? Escolha um dos seguintes pratos:\n");
    printf("1. Gateau Debord\n");
    printf("2. Pudim de padisarah\n");
    printf("3. Macarons\n");
    printf("4. Tofu de amêndoas\n");
    printf("5. Frango assado com mel\n");
    printf("\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    
    printf("\n");
    printf("***--------------***\n");
    printf("\n");

    printf("Qual é a sua NAÇÃO DE ORIGEM? Escolha uma das criaturinhas a seguir:\n");
    printf("1. Porcogumelo\n");
    printf("2. Foquinha rotunda\n");
    printf("3. Saurianos\n");
    printf("4. Raposa do deserto\n");
    printf("5. Kitsune\n");
    printf("6. Lontra descontraída\n");
    printf("7. Aranaras\n");
    printf("8. Capivarinha\n");
    printf("\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha3);

    printf("\n");
    printf("***--------------***\n");
    printf("\n");
    
    printf("Qual é a sua FACÇÃO? Escolha uma das frutinhas a seguir:\n");
    printf("1. Valberry\n");
    printf("2. Fruta Harra\n");
    printf("3. Melão de lavanda\n");
    printf("4. Cacahuatl\n");
    printf("5. Tâmara\n");
    printf("6. Fruta bulle\n");
    printf("\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha4);

    printf("\n");
    printf("***--------------***\n");
    printf("\n");

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

    printf("\n");
    printf("***--------------***\n");
    printf("\n");


    if (escolha1 == 1){
        printf("Sua visão é: %s\n", visao[6]);
    }else if (escolha1 == 2){
        printf("Sua visão é: %s\n", visao[4]);
    }else if (escolha1 == 3){
        printf("Sua visão é: %s\n", visao[0]);
    }else if (escolha1 == 4){
        printf("Sua visão é: %s\n", visao[5]);
    }else if (escolha1 == 5){
        printf("Sua visão é: %s\n", visao[3]);
    }else if (escolha1 == 6){
        printf("Sua visão é: %s\n", visao[2]);   
    }else if (escolha1 == 7){
        printf("Sua visão é: %s\n", visao[1]);
    }


    if (escolha2 == 1){
        printf("Sua arma é: espadão\n");
    }else if (escolha2 == 2){
        printf("Sua arma é: arco\n");
    }else if (escolha2 == 3){
        printf("Sua arma é: espada\n");
    }else if (escolha2 == 4){
        printf("Sua arma é: catalisador\n");
    }else if (escolha2 == 5){
        printf("Sua arma é: lança\n");
    }


    if (escolha3 == 1){
        printf("Sua nação de origem é: Mondstadt\n");
    }else if (escolha3 == 2){
        printf("Sua nação de origem é: Inazuma\n");
    }else if (escolha3 == 3){
        printf("Sua nação de origem é: Snezhnaya\n");
    }else if (escolha3 == 4){
        printf("Sua nação de origem é: Khaenri'ah\n");
    }else if (escolha3 == 5){
        printf("Sua nação de origem é: Natlan\n");
    }else if (escolha3 == 6){
        printf("Sua nação de origem é: Fontaine\n");   
    }else if (escolha3 == 7){
        printf("Sua nação de origem é: Sumeru\n");
    }else if (escolha3 == 8){
        printf("Sua nação de origem é: Liyue\n");
    }


    if (escolha4 == 1){
        printf("A sua facção é: Fatui\n");
    }else if (escolha4 == 2){
        printf("A sua facção é: Guilda de aventureiros\n");
    }else if (escolha4 == 3){
        printf("A sua facção é: Cavaleiros de Favonius\n");
    }else if (escolha4 == 4){
        printf("A sua facção é: Adepti\n");
    }else if (escolha4 == 5){
        printf("A sua facção é: Academia de Sumeru\n");
    }else if (escolha4 == 6){
        printf("Sem facção, você é um viajante independente\n");
    }


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

    printf("\n");
    printf("***--------------***\n");
    printf("\n");

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
          printf("Resultado: na confusão, vocês se atrapalham e perdem grande parte dos suprimentos que compraram no mar!\n");
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
          printf("Resultado: viagem mais longa, mais energia gasta. Vocês chegam tarde da noite ao seu destino!\n");
          historia + 2;
          break;
    }











srand(time(0));
int bossHP = 500;
int act, dado, atk1, atk2;


//act1 = espada - 25 + random entre 0 e 20)
//act2 = magia - 30 + random entre 0 e 20)

    printf("Você encontrou um inimigo poderoso pelo caminho!\n");
    printf("Ele é agressivo e iniciou um combate! O HP inicial dele é 500\n");

do{
    printf("escolha uma ação \n");
    printf("1. ataque com espada\n");
    printf("2. ataque com magia\n");
    printf("digite a sua escolha: ");
    scanf("%d", &act);

int dado = rand() % 21;
int atk1 = 25 + dado;
int atk2 = 30 + dado;

    if (act == 1){
        printf("O dano foi %d\n", atk1);
        bossHP = bossHP - atk1;
        printf("HP atual do boss: %d\n", bossHP);
    }else{
        printf("O dano foi %d\n", atk2);
        bossHP = bossHP - atk2;
        printf("HP atual do boss: %d\n", bossHP);
    }

} while (bossHP > 0);

    printf("parabéns, você venceu!");






    return 0;
}