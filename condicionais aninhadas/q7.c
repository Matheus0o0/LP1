#include <stdio.h>

int main() {
    float valor1, valor2, resultado;
    char operacao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = valor1 + valor2;
            break;
        case '-':
            resultado = valor1 - valor2;
            break;
        case '*':
            resultado = valor1 * valor2;
            break;
        case '/':
            if (valor2 == 0) {
                printf("Erro: divisão por zero.");
                return 1;
            } else {
                resultado = valor1 / valor2;
            }
            break;
        default:
            printf("Erro: operação inválida.");
            return 1;
    }

    printf("Resultado: %2f", resultado);

}