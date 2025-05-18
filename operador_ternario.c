#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));
    int numeroSecreto = rand() % 10 + 11;
    int numeroJogador;
    printf("Digite um número de 0 a 20: \n");
    scanf("%d", & numeroJogador);

    (numeroJogador = numeroSecreto) ? printf("Você acertou!\n") : printf("Você errou!\n");
 



    return 0;
}