/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main() {
    int idade;
    
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade >= 5 && idade <= 7) {
        printf("Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        printf("Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        printf("Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        printf("Juvenil B");
    } else if (idade >= 18) {
        printf("Adulto");
    } else {
        printf("Nadador abaixo de 5 anos.");
    }
    
    return 0;
}