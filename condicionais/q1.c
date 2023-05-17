/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int idade;
    
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Você já pode tirar a carteira de motorista!\n");
    } else {
        printf("Você ainda não pode tirar a carteira de motorista.\n");
    }
    
    return 0;
}