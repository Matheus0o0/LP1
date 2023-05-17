/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
    float salario_base, ratificacoes, imposto, salario_liquido;
    
    printf("Digite o salário base do usuário: ");
    scanf("%f", &salario_base);
    
    printf("Digite o valor das ratificações: ");
    scanf("%f", &ratificacoes);
    
    salario_liquido = salario_base + ratificacoes;
    
    if (salario_liquido <= 999.00) {
        imposto = 0;
    } else if (salario_liquido <= 1499.00) {
        imposto = salario_liquido * 0.15;
    } else {
        imposto = salario_liquido * 0.27;
    }
    
    salario_liquido -= imposto;
    
    printf("O salário líquido é R$ %.2f.\n", salario_liquido);
    
    return 0;
} return 0;
}