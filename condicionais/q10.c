/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main() {
    int idade_dias, anos, meses, dias;
    
    printf("Digite a idade em dias: ");
    scanf("%d", &idade_dias);
    
    anos = idade_dias / 365;
    meses = (idade_dias % 365) / 30;
    dias = (idade_dias % 365) % 30;
    
    printf("%d anos, %d meses e %d dias.\n", anos, meses, dias);
    
    return 0;
}
