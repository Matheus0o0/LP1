/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float quantia_total = 780000;
    float quantia_primeiro = 0.46 * quantia_total;
    float quantia_segundo = 0.32 * quantia_total;
    float quantia_terceiro = quantia_total - quantia_primeiro - quantia_segundo;

    printf("Quantia do primeiro ganhador: R$ %.2f\n", quantia_primeiro);
    printf("Quantia do segundo ganhador: R$ %.2f\n", quantia_segundo);
    printf("Quantia do terceiro ganhador: R$ %.2f\n", quantia_terceiro);

    return 0;
}