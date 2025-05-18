#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

 /*int sabor;
 printf("Escolha um sabor de sorvete de 1 a 5: ");
 scanf("%d", &sabor);

switch (sabor) {
    case 1:
      printf("Você escolheu chocolate!\n");
      break;
    case 2:
      printf("Você escolheu morango!\n");
      break;
    case 3:
      printf("Você escolheu baunilha!\n");
      break;
    case 4:
      printf("Você escolheu napolitano!\n");
      break;
    case 5:
      printf("Você escolheu uva!\n");
      break;
    default:
      printf("Opção inválida\n");
}*/

    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

switch (opcao){
  
case 1: 
  srand(time(0));
  numeroSecreto = rand() % 10 + 11;
  printf("Digite um número de 0 a 20: ");
  scanf("%d", &palpite);
  if (numeroSecreto == palpite){

    printf("Você acertou!\n");
    printf("Número secreto: %d\n", numeroSecreto);
  } else {
    printf("Você errou!\n");
    printf("Número secreto: %d\n", numeroSecreto);
  }
  break;
case 2:
  printf("As regras são.....\n");
  break;
case 3:
  printf("Saindo do jogo\n");
  break;
default:
  printf("Opção inválida\n");


}
  


    return 0;
}