#include <stdio.h>

int main(){
    int idade, idioma;
    float altura;
    printf("informe sua idade");
    scanf("%d", &idade);

    printf("informe sua altura");
    scanf("%f", &altura);

    printf("em quantos idiomas você é fluente");
    scanf("%d", &idioma);


    if (idade>=24 & altura>=1.70 & idioma>=2)
    {
       printf("voce atende aos requisitos da empresa ");
    }else{
        printf("voce nao atende aos requisitos da empresa");
    }
    

}