#include <stdio.h>

int main() {
    int velocidadeMaxima, velocidadeVeiculo, excesso, multa;
    float percentualExcesso;

    printf("Digite a velocidade máxima permitida: ");
    scanf("%d", &velocidadeMaxima);

    printf("Digite a velocidade do veiculo: ");
    scanf("%d", &velocidadeVeiculo);

    excesso = velocidadeVeiculo - velocidadeMaxima;
    percentualExcesso = excesso * 100.0 / velocidadeMaxima;

  if (percentualExcesso <= 0) {
    multa = 0;
    } else if (percentualExcesso <= 20) {
    multa = 250;
    } else {
    multa = 750;
}
    printf("valor da multa: R$ %d", multa);

}