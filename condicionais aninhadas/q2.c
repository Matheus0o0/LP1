#include <stdio.h>

int main(){
    int idade, peso;
    printf("informe sua idade");
    scanf("%d", &idade);
    printf("informe o seu peso");
    scanf("%d", &peso);

    if (idade>18 & idade<65 & peso>=50)
    {
        printf("voce atende aos requisitos para doar sangue");
    } else{
        printf("Voce nao atende aos requisitos para doar sangue");
    }
    
}