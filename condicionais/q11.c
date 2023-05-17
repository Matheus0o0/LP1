/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main() {
    float custo_fabricacao, custo_consumidor;
    
    printf("Digite o custo de fabricacao do carro: ");
    scanf("%f", &custo_fabricacao);
    
    custo_consumidor = custo_fabricacao + (0.28 * custo_fabricacao) + (0.45 * custo_fabricacao);
    
    printf("O custo ao consumidor sera de R$ %.2f\n", custo_consumidor);
    
    return 0;
}
