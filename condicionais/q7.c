/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
    float peso, altura, imc;
    
    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc > 30.0) {
        printf("Seu IMC é %.2f, você está obeso.\n", imc);
    } else {
        printf("Seu IMC é %.2f, você não está obeso.\n", imc);
    }
    
    return 0;
}