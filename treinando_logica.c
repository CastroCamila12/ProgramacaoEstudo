#include <stdio.h>

int main(){

    float temperatura = 25;
    float umidade = 25;
    
    if (temperatura < 30 && temperatura > 20 && umidade < 60 && umidade > 25){
        printf("As condições de temperatura e umidade estão adequadas.\n");
    } else {
        printf("As condições de temperatura e umidade estão inadequadas.\n");
    }




    return 0;
}

