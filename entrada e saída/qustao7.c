/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int a, b, c, soma;
printf("primeiro numero");
scanf("%d", &a);
printf("segundo numero");
scanf("%d", &b);
printf("terceiro numero");
scanf("%d", &c);


a = a*a;
b = b*b;
c = c*c;
soma = a+b+c;

printf ("O valor da soma de todos os quadrados é""%d" , soma);
}
