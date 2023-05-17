/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    float investimento1, investimento2, investimento3, premio, proporcao1, proporcao2, proporcao3, total;

    printf("Digite o valor investido pelo primeiro apostador: ");
    scanf("%f", &investimento1);
    printf("Digite o valor investido pelo segundo apostador: ");
    scanf("%f", &investimento2);
    printf("Digite o valor investido pelo terceiro apostador: ");
    scanf("%f", &investimento3);
    total = investimento1 + investimento2 + investimento3;
    printf("Digite o valor do premio da loteria: ");
    scanf("%f", &premio);
    proporcao1 = (investimento1 / total) * premio;
    proporcao2 = (investimento2 / total) * premio;
    proporcao3 = (investimento3 / total) * premio;
    printf("O primeiro apostador ganhará %.2f reais\n", proporcao1);
    printf("O segundo apostador ganhará %.2f reais\n", proporcao2);
    printf("O terceiro apostador ganhará %.2f reais\n", proporcao3);

    return 0;
}