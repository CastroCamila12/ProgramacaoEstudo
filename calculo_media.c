#include <stdio.h>

int main(){

    int nota1 = 3;
    int nota2 = 2;
    int nota3 = 1;
    float media;

    printf("Programa de cálculo de média\n");

    printf("Digite a primeira nota:\n");
    scanf("%df", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A média é: %.2f", media);


return 0;

}