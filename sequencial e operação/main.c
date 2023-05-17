/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
float salario, imposto, gratificacao, total;
printf("infrome o salario base do trabalhador:");
scanf("%f", &salario);
imposto= (salario*7)/100;
gratificacao=(imposto*5)/100;
total= salario-imposto+gratificacao;
printf("a valor com o desconto aplicado é:" "%f", total);
}