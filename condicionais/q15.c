/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int valor, notas100, notas50, notas10, notas5, notas1;

    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    printf("O valor R$ %d pode ser decomposto em:\n", valor);
    
    notas100 = valor/100;
    valor = valor%100;

    printf("%d de 100\n", notas100);
    notas50 = valor/50;
    valor = valor%50;
  printf("%d de 50\n", notas50);
    notas10 = valor/10;
    valor = valor % 10;
    
    printf("%d de 10\n", notas10);

    notas5 = valor/5;
    valor = valor%5;
  
    printf("%d de 5\n", notas5);
    notas1 = valor;


    printf("%d de 1\n", notas1);

    return 0;
}