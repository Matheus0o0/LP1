/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int f;
printf("informe a temperatura em fahrenheit");
scanf("%d", &f);
int c=5*(f-32)/9;
printf("a temperatura em graus celcius é:" "%d", c);
}
