#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int oper1,oper2,result;

    printf("ingrese un numero: ");

    scanf("%d",&oper1);

    printf("ingrese un numero: ");

    scanf("%d",&oper2);


    system("cls");

    result=suma(oper1,oper2);

    printf("La suma es: %d", result);

    result=resta(oper1,oper2);

    printf("\nLa resta es: %d", result);

    return 0;

}

