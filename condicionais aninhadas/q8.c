
#include <stdio.h>
int main() {
    float peso, altura, imc;
    
    printf("Digite o seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if (imc > 30.0) {
        printf("Seu IMC é %2f, você está obeso.", imc);
    } else {
        printf("Seu IMC é %2f, você não está obeso.", imc);
    }

}