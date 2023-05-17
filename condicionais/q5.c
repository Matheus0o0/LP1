/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    if (num1 % num2 == 0 && num2 % num1 == 0) {
        printf("%d e %d são divisores perfeitos.\n", num1, num2);
    } else {
        printf("%d e %d não são divisores perfeitos.\n", num1, num2);
    }
    
    return 0;
}