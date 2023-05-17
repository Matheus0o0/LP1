/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main() {
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 == 0) {
                printf("Erro: divisão por zero\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operação inválida\n");
    }

    return 0;
}