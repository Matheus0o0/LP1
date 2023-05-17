/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float prova1, prova2, trabalho, media;
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &prova1);
    
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &prova2);
    
    printf("Digite a nota do trabalho: ");
    scanf("%f", &trabalho);
    
    media = ((prova1 + prova2) * 3 + trabalho) / 7;
    
    if (media >= 7) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
    
    return 0;
}