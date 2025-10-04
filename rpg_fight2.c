#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  int itemCura;
  int itemCuraGrande;
  
} inventorio;


int validaEscolha (int playerAP){
  int actPlayer;

  do{
    printf("Digite sua escolha: ");
    scanf("%d", &actPlayer);

      if(actPlayer < 1 || actPlayer > 4){
        printf("Opção inválida!\n");
        printf("\n");
       } else if ((actPlayer == 1 && playerAP < 2) || (actPlayer == 2 && playerAP < 4)){
        printf("Sem AP para atacar! Use a estância de defesa para recuperar 2 AP ou mude sua ação\n");
      }

  } while ((actPlayer < 1 || actPlayer > 4) || (actPlayer == 1 && playerAP < 2) || (actPlayer == 2 && playerAP < 4));

  return actPlayer;
}


int calculaDano (int dado2, int actPlayer, int danoRecebido){
  
  if (dado2 == 20){
    printf("\nVocê recebeu um ATAQUE CRÍTICO! >_<\n");
    danoRecebido = danoRecebido * 2;

  } else if (actPlayer == 3){
    printf("\nMitigou metade do prejuízo por estar defendendo!\n");
    danoRecebido = danoRecebido / 2;
  }
  

  return danoRecebido;

} 



// --------------------------------------------------------------------------

int main(){

srand(time(0));
int bossHP = 500;
int playerHP = 500;
int playerAP = 20;
int rodada = 1;
int turnoConsumido = 0;
int a, actBoss, actPlayer, actInventorio, atk1, atk2, atkBoss1, atkBoss2, atkBoss3, danoRecebido;

inventorio var1;
var1.itemCura = 2;
var1.itemCuraGrande = 1;

//act1 = espada - 25 + random entre 1 e 20)
//act2 = magia - 40 + random entre 1 e 20)

    printf("Você encontrou um inimigo poderoso pelo caminho!\n");
    printf("Ele é agressivo e iniciou um combate! O HP inicial dele é 500\n");
    printf("Seu HP inicial é 500\n");

    printf("\nCombate em andamento!\n");
    

do{
    printf("\n");
    printf("*------------- Rodada %d! -------------*\n", rodada);
    rodada++;

    printf(" ------------ \n");
    printf("| SEU TURNO! |\n");
    printf(" ------------ \n");
    printf("*-----------------------* *----------------------*\n");
    printf("|        JOGADOR        | |      ADVERSÁRIO      |\n");
    printf("|                       | |                      |\n");
    printf("| HP = %-4d             | | HP = %-4d            |\n", playerHP, bossHP);
    printf("| AP = %-4d             | |                      |\n", playerAP);
    printf("| 1. ataque com espada  | |                      |\n");
    printf("| 2. ataque com magia   | |                      |\n");
    printf("| 3. defender           | |                      |\n");
    printf("| 4. ver inventório     | |                      |\n");
    printf("*-----------------------* *----------------------*\n");
    
    actPlayer = validaEscolha(playerAP);
    
    printf("\n");

int dado1 = rand() % 20 + 1 ;
atk1 = 25 + dado1;
atk2 = 40 + dado1;

while (actPlayer == 4){
    printf("*-------------------------------*\n");
    printf("|          INVENTÓRIO           |\n");
    printf("| 1.Poção de cura: %-4d         |\n", var1.itemCura);
    printf("| 2.Poção de cura grande: %-4d  |\n", var1.itemCuraGrande);
    printf("|                               |\n");
    printf("*-------------------------------*\n");
    printf("Usar item? Digite o número do item ou 0 para voltar ao menu principal: \n");
    scanf("%d", &actInventorio);

      while (actInventorio < 0 || actInventorio > 2){
        printf("Opção inválida!\n");
        printf("Escolha novamente: \n");
        scanf("%d", &actInventorio);
      } 
      
      if(actInventorio == 1){
        if (var1.itemCura > 0) {

          playerHP += 80;
          var1.itemCura--;
          printf("Você usou poção de cura e recuperou 80 HP!\n");

        } else {
          printf("Não há itens para usar!\n");
        }

      } else if (actInventorio == 2){
        if(var1.itemCuraGrande > 0){

          playerHP += 120;
          var1.itemCuraGrande--; 
          printf("Você usou poção de cura grande e recuperou 120 HP!\n");

        } else {
         printf("Não há itens para usar!\n");
        }

      } else if (actInventorio == 0);
        break;


    actPlayer = validaEscolha(playerAP);

}
        
    switch (actPlayer) {
      case 1:
        if(dado1 == 20){
            printf("Você usou sua espada e conseguiu um ATAQUE CRÍTICO!\n");
            printf("\n* Causou %d de dano no adversário! *\n", atk1 * 2);
            bossHP -= atk1 * 2;
        } else {
            printf("Você desferiu um ataque certeiro com sua espada\n");
            printf("\n* Causou %d de dano no adversário! *\n", atk1) ;
            bossHP -= atk1;
        }

        playerAP -= 2;

      break;
     
      case 2:
        if(dado1 == 20){
            printf("Você usou uma magia poderosa e conseguiu um ATAQUE CRÍTICO!\n");
            printf("\n* Causou %d de dano no adversário! *\n", atk2 * 2);
            bossHP -= atk2 * 2;
        } else {
            printf("Você usa magia para atacar seu adversário\n");
            printf("\n* Causou %d de dano no adversário! *\n", atk2);
            bossHP -= atk2;
        }

        playerAP -= 4;

      break;

      case 3:
        printf("\nDefesa!\n");
        
        if (playerAP < 20){   
          playerAP += 2;  
        } 
      
      break;

     
    }

    if (bossHP <= 0) break;

int dado2 = rand() % 20 + 1;
int dado3 = rand() % 10 + 1;
atkBoss1 = 10 + dado2;
atkBoss2 = 15 + dado2;
atkBoss3 = 30 + dado2;

    printf("\n");
    printf(" ---------------------- \n");
    printf("| TURNO DO ADVERSÁRIO! |\n");
    printf(" ---------------------- \n");
    printf("\n");

    
    if (dado3 >= 1 && dado3 <= 4) {
        printf("O adversário usou ataque 1\n");
        danoRecebido = atkBoss1;

      danoRecebido = calculaDano(dado2, actPlayer, danoRecebido);


      printf("\n* Você sofreu %d de dano! *\n", danoRecebido);
      playerHP = playerHP - danoRecebido;

    }
       
    if (dado3 >= 5 && dado3 <= 7){
        printf("O adversário usou ataque 2\n");
        danoRecebido = atkBoss2;
        
      danoRecebido = calculaDano(dado2, actPlayer, danoRecebido);
      

      printf("\n* Você sofreu %d de dano! *\n", danoRecebido);
      playerHP = playerHP - danoRecebido;

    } 
    
    if (dado3 == 8 || dado3 == 9){
        printf("O adversário usou ataque 3\n");
        danoRecebido = atkBoss3;

        danoRecebido = calculaDano(dado2, actPlayer, danoRecebido);
     
 
      printf("\n* Você sofreu %d de dano! *\n", danoRecebido);
      playerHP = playerHP - danoRecebido;

    }

    
    if (dado3 == 10) {
        printf("O adversário errou o ataque!\n");
        printf("\n* Você não recebeu nenhum dano! *\n");
    }


    if (playerHP <= 0) break;

} while (1);

    printf("\n");
    printf("*** ------------------ ***\n");
    printf("***   Fim do combate   ***\n");
    printf("*** ------------------ ***\n");
    printf("\n");

    if (playerHP <= 0){
        printf("Você foi derrotado!\n");
        printf("\n");
    } else {
        printf("**************************\n");
        printf("* Parabéns, você venceu! *\n");
        printf("**************************\n");
        printf("\n");
    }
        



    return 0;
}