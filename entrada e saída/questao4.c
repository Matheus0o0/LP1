/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int k;
printf("informe a temperatura em kelvin");
scanf("%d", &k);
float c=(k-273.15);
printf("a temperatura em graus celcius é:" "%f", c);
}
