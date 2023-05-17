#include <stdio.h>

int main() {
    int num;
    char resp1, resp2;

    printf("Pense em um número de 1 a 4.\n");
    printf("O número é maior que 2? (S/N)\n");
    scanf(" %c", &resp1);

    if (resp1 == 'S' || resp1 == 's') {
        printf("O número é maior que 3? (S/N)\n");
        scanf(" %c", &resp2);
        if (resp2 == 'S' || resp2 == 's') {
            num = 4;
        } else {
            num = 3;
        }
    } else {
        printf("O número é maior que 1? (S/N)\n");
        scanf(" %c", &resp2);
        if (resp2 == 'S' || resp2 == 's') {
            num = 2;
        } else {
            num = 1;
        }
    }

    printf("O número que você pensou é: %d\n", num);
    return 0;
}