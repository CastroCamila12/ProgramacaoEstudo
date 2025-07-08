#include <stdio.h>

int main(){

int perg1, perg2, perg3, perg4, perg5, perg6, perg7, perg8, perg9, perg10;
int pontos = 0;

    printf("*** TESTE DE PERSONALIDADE DE JOJO'S ***\n");
    printf("\n");

    printf("Você vai responder a 10 perguntas e no final vai descorir qual o seu stand!\n");
    printf("Vamos começar!\n");
    printf("\n");

    printf("Qual o seu animal de estimação favorito?\n");
    printf("1. cachorro \n");
    printf("2. gato \n");
    printf("3. hamster \n");
    printf("4. cavalo\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg1);
    
    printf("\n");

    switch (perg1) {
        case 1:
          pontos += 4;
          break;
        case 2:
          pontos += 2;
          break;
        case 3:
          pontos += 3;
          break;
        case 4:
          pontos ++;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Escolha entre as opções a cor que você gosta mais:\n");
    printf("1. branco\n");
    printf("2. azul\n");
    printf("3. amarelo\n");
    printf("4. vermelho\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg2);

    printf("\n");

    switch (perg2) {
        case 1:
          pontos ++;
          break;
        case 2:
          pontos += 4;
          break;
        case 3:
          pontos += 3;
          break;
        case 4:
          pontos += 2;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Escolha sua comida favorita:\n");
    printf("1. chocolate\n");
    printf("2. sushi\n");
    printf("3. pizza\n");
    printf("4. hambúrguer\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg3);

    printf("\n");

    switch (perg3) {
        case 1:
          pontos += 2;
          break;
        case 2:
          pontos += 3;
          break;
        case 3:
          pontos ++;
          break;
        case 4:
          pontos += 4;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual passeio seria mais interesante para você?\n");
    printf("1. cachoeira\n");
    printf("2. parque de diversões\n");
    printf("3. cinema\n");
    printf("4. praia\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg4);

    printf("\n");

    switch (perg4) {
        case 1:
          pontos += 4;
          break;
        case 2:
          pontos += 2;
          break;
        case 3:
          pontos ++;
          break;
        case 4:
          pontos += 3;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual o seu passatempo favorito?\n");
    printf("1. ler um livro\n");
    printf("2. assistir televisão\n");
    printf("3. jogar vídeo game\n");
    printf("4. desenhar\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg5);

    printf("\n");

    switch (perg5) {
        case 1:
          pontos += 3;
          break;
        case 2:
          pontos += 4;
          break;
        case 3:
          pontos ++;
          break;
        case 4:
          pontos += 2;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Para você qual o tipo de combate mais legal?\n");
    printf("1. espadas duplas\n");
    printf("2. artes marciais\n");
    printf("3. arte samurai\n");
    printf("4. superpoderes\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg6);

    printf("\n");

    switch (perg6) {
        case 1:
          pontos ++;
          break;
        case 2:
          pontos += 4;
          break;
        case 3:
          pontos += 2;
          break;
        case 4:
          pontos += 2;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual a característica mais importante em um herói:\n");
    printf("1. força\n");
    printf("2. inteligência\n");
    printf("3. coragem\n");
    printf("4. determinação\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg7);

    printf("\n");

    switch (perg7) {
        case 1:
          pontos += 2;
          break;
        case 2:
          pontos += 3;
          break;
        case 3:
          pontos ++;
          break;
        case 4:
          pontos += 4;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual destes superpoderes você queria ter?\n");
    printf("1. voar\n");
    printf("2. super força\n");
    printf("3. visão do futuro\n");
    printf("4. ler mentes\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg8);

    printf("\n");

    switch (perg8) {
        case 1:
          pontos ++;
          break;
        case 2:
          pontos += 2;
          break;
        case 3:
          pontos += 4;
          break;
        case 4:
          pontos += 3;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual dessas matérias você gosta mais? \n");
    printf("1. matemática\n");
    printf("2. geografia\n");
    printf("3. ciências\n");
    printf("4. educação física\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg9);

    printf("\n");

    switch (perg9) {
        case 1:
          pontos += 4;
          break;
        case 2:
          pontos += 2;
          break;
        case 3:
          pontos += 3;
          break;
        case 4:
          pontos ++;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Qual o destino do seu dinheiro?:\n");
    printf("1. guardar tudo\n");
    printf("2. comprar as coisas que eu quero\n");
    printf("3. usar para passear em um lugar legal\n");
    printf("4. comprar muitas comidas saborosas\n");
    printf("Digite sua escolha: ");
    scanf("%d", &perg10);

    printf("\n");

    switch (perg10) {
        case 1:
          pontos += 3;
          break;
        case 2:
          pontos += 2;
          break;
        case 3:
          pontos += 4;
          break;
        case 4:
          pontos ++;
          break;
        default:
          printf("Opção inválida\n");
    }

    printf("Sua pontuação foi %d\n", pontos);
    printf("\n");
    printf(" *****--------------*****");
    printf("\n");

    if (pontos >= 10 && pontos < 15){
      printf("Seu stand é o Silver Chariot!\n");
    }

    if (pontos >= 15 && pontos < 20){
      printf("Seu stand é o Shining Diamond!\n");
    }

    if (pontos >= 20 && pontos < 25){
      printf("Seu stand é o Hieronfant Green\n");
    }

    if (pontos >= 25 && pontos < 30){
      printf("Seu stand é o Star Platinum!\n");
    }

    if (pontos >= 30 && pontos < 35){
      printf("Seu stand é O Mundo!\n");
    }

    if (pontos >= 35 && pontos <= 40){
      printf("Seu stand é o Golden Experience!\n");
    }

    printf(" *****--------------*****");
    printf("\n");

    return 0;
}