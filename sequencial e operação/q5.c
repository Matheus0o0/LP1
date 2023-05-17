/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
float salario, dias, pagamento, imposto;
printf("dias trabalhados");
scanf("%f", &dias);
salario= dias*30;
imposto=(salario*8)/100;
pagamento= salario-imposto;
printf("a valor com o desconto aplicado é:" "%f", pagamento);
}