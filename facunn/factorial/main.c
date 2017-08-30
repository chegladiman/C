#include <stdio.h>
#include <stdlib.h>
#include "factorial.h"

void main(void)
{
int valor,result;
printf("\nIngrese numero:");
scanf("%d",&valor);
result=factorial(valor);
printf("\nEl factorial de %d es %d",valor,result);
}
