/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>

int main()
{
    float cargo, sal;
    int vt, vt2, programador;
    
    printf("informe seu salario:");
    scanf("%f", &sal);
    
    printf("informe seu cargo:");
    scanf("%f", &cargo);
    
    if(cargo == programador) {
        vt = 0.30*sal;
        vt2 = vt+sal;
        printf("seu salario é de ""%d", vt2);
    }
    else {
        vt = 0.10*sal;
        vt2 = vt+sal;
        printf("seu salario é de:""%d", vt2);
    }
    
}
