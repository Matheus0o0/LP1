#include <stdio.h>

int main() {
    float salario, salarioN;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);

    if (salario < 500.0) {
        salarioN = salario * 1.15;
    } else if (salario >= 500.0 && salario <= 1000.0) {
        salarioN = salario * 1.08;
    } else {
        salarioN = salario * 1.03;
    }

    printf("O novo salário é: R$ %2f ", salarioN);
}