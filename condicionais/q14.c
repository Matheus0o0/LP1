/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Digite o tempo de aquecimento em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600; // 1 hora = 3600 segundos
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60; // 1 minuto = 60 segundos
    segundos_restantes = segundos_restantes % 60;

    printf("%d segundos = %d:%02d:%02d\n", segundos, horas, minutos, segundos_restantes);

    return 0;
}