/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    float altura_degrau, altura_desejada;
    int num_degraus;
    printf("Digite a altura do degrau da escada: ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura que você deseja alcançar subindo a escada: ");
    scanf("%f", &altura_desejada);
    num_degraus = ceil(altura_desejada / altura_degrau);
    printf("Você deverá subir %d degraus para alcançar %.2f metros de altura.\n", num_degraus, altura_desejada);

    return 0;
}