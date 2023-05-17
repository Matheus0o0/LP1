/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float temperatura;
    
    printf("Qual é a temperatura do paciente? ");
    scanf("%f", &temperatura);
    
    if (temperatura > 37) {
        printf("O paciente está com febre.\n");
    } else {
        printf("A temperatura do paciente está normal.\n");
    }
    
    return 0;
}