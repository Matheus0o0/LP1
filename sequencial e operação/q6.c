/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float salario, gratificacao, imposto, salario_receber;

    printf("Digite o salário-base do funcionário: ");
    scanf("%f", &salario);

    gratificacao = 0.05 * salario;
    imposto = 0.07 * salario;

    salario_receber = salario + gratificacao - imposto;

    printf("O salário a receber é R$ %.2f\n", salario_receber);

    return 0;
}