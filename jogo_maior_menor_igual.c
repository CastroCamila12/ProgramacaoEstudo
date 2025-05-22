#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

  int numeroJogador, numeroComputador, resultado;
  char tipoComparacao;

  srand(time(0));
  numeroComputador = rand() % 100 + 1;

  printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
  printf("Você deve escolher um número e uma comparação.\n");
  printf("M - Maior\n");
  printf("N - Menor\n");
  printf("I - igual\n");

  printf("Escolha a comparação: ");
  scanf("%c", &tipoComparacao);

  printf("Escolha um número de 1 a 100: ");
  scanf("%d", &numeroJogador);

  switch (tipoComparacao)
  {
  case 'M': 
  case 'm':  
    printf("Você escolheu a opção Maior!\n");
    resultado = numeroJogador > numeroComputador ? 1 : 0; 
  break;
  
  case 'N': 
  case 'n':  
    printf("Você escolheu a opção Menor!\n");
    resultado = numeroJogador < numeroComputador ? 1 : 0; 
  break;

  case 'I': 
  case 'i': 
    printf("Você escolheu a opção Igual!\n");
    resultado = numeroJogador == numeroComputador ? 1 : 0; 
  break;

  default:
  printf("Opção inválida\n");
  break;
  }

  printf("O número do computador é %d e o número do jogador é %d\n", numeroComputador, numeroJogador);
  if (resultado == 1) {
    printf("Parabéns, você ganhou!\n");
  } else {
    printf("Infelizmente, você perdeu!\n");
  }






    return 0;
}