#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(0));
int bossHP = 500;
int playerHP = 500;
int playerAP = 20;
int actBoss, actPlayer, atk1, atk2, atkBoss1, atkBoss2, atkBoss3;


//act1 = espada - 25 + random entre 1 e 20)
//act2 = magia - 30 + random entre 1 e 20)

    printf("Você encontrou um inimigo poderoso pelo caminho!\n");
    printf("Ele é agressivo e iniciou um combate! O HP inicial dele é 500\n");
    printf("Seu HP inicial é 500\n");

    printf("\nCombate em andamento!\n");
    
do{
    printf("\n");
    printf(" ------------ \n");
    printf("| SEU TURNO! |\n");
    printf(" ------------ \n");
    printf("*-----------------------*\n");
    printf("| HP = %-4d             |\n", playerHP);
    printf("| AP = %-4d             |\n", playerAP);
    printf("| 1. ataque com espada  |\n");
    printf("| 2. ataque com magia   |\n");
    printf("| 3. defender           |\n");
    printf("*-----------------------*\n");
    printf("digite a sua escolha: ");
    scanf("%d", &actPlayer); 
    
    printf("\n");

int dado1 = rand() % 20 + 1 ;
atk1 = 25 + dado1;
atk2 = 30 + dado1;

    if (actPlayer == 1 || actPlayer == 2){
        while (playerAP <= 1 && actPlayer != 3){
            printf("Sem AP para atacar! Use a estância de defesa para recuperar AP.\n");
            printf("Digite novamente sua escolha: ");
            scanf("%d", &actPlayer);

            printf("\n");
        }
        
    }

    if (actPlayer == 1){
        printf("Você desferiu um ataque certeiro com sua espada\n");
        printf("\n* Causou %d de dano no adversário! *\n", atk1);
        playerAP -= 2;
        bossHP -= atk1;

    } else if (actPlayer == 2){
        printf("Você ataca com uma magia poderosa\n");
        printf("\n* Causou %d de dano no adversário! *\n", atk2);
        playerAP -= 4;
        bossHP -= atk2;
        
    } else if (actPlayer == 3){
        printf("\nDefesa!\n");
        if (playerAP < 20){
          playerAP += 2;  
        } 
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
    printf("*-----------------------*\n");
    printf("| HP = %-4d             |\n", bossHP);
    printf("*-----------------------*\n");
    printf("\n");

    if (dado3 >= 1 && dado3 <= 4) {
        if(actPlayer == 3){
        printf("O adversário usou ataque 1\n");
        printf("\n* Você sofreu %d de dano! *\n", atkBoss1 / 2);
        } else {
            printf("O adversário usou ataque 1\n");
            printf("\n* Você sofreu %d de dano! *\n", atkBoss1);
        }
        
        playerHP = playerHP - atkBoss1;
    } 

    if (dado3 >= 5 && dado3 <= 7){
        if(actPlayer == 3){
        printf("O adversário usou ataque 2\n");
        printf("\n* Você sofreu %d de dano! *\n", atkBoss2 / 2);
        } else {
            printf("O adversário usou ataque 2\n");
            printf("\n* Você sofreu %d de dano! *\n", atkBoss2);
        }

        playerHP = playerHP - atkBoss2;
    } 
    
    if (dado3 == 8 || dado3 == 9){
        if(actPlayer == 3){
        printf("O adversário usou ataque 3\n");
        printf("\nVocê sofreu %d de dano!\n", atkBoss3 / 2);
        } else {
            printf("O adversário usou ataque 3\n");
            printf("\n* Você sofreu %d de dano! *\n", atkBoss3);
        }

        playerHP = playerHP - atkBoss3;
    } 
    
    if (dado3 ==10) {
        printf("O adversário errou o ataque!\n");
        printf("\n* Você não recebeu nenhum dano! *\n");
    }

    if (playerHP <= 0) break;

} while (1);

    if (playerHP <= 0){
        printf("Você foi derrotado!\n");
    } else {
        printf("Parabéns, você venceu!\n");
    }
        



    return 0;
}