/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número ímpar.\n", num);
    }
    
    return 0;
}