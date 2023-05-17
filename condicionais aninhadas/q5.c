#include <stdio.h>

int main() {
    float pesocachorro, pesoracao, diaria;
    int duracaopacote;

    printf("informe o peso do cachorro: ");
    scanf("%f", &pesocachorro);

    printf("informe o peso da embalagem de ração em quilos: ");
    scanf("%f", &pesoracao);

    if (pesocachorro <= 5) {
        diaria = 60;
    } else if (pesocachorro <= 10) {
        diaria = 95;
    } else if (pesocachorro <= 15) {
        diaria = 135;
    } else if (pesocachorro <= 20) {
        diaria = 170;
    } else {
        diaria = 215;
    }

    duracaopacote = (int) (pesoracao * 1000 / diaria);

    printf("O pacote de ração vai durar aproximadamente %d dias.", duracaopacote);

}