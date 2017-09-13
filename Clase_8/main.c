#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
   struct alumno alu;

   printf("Ingrese nombre: ");
   scanf("%c",&alu.nombre);
   fflush(stdin);
   printf("Ingrese legajo: ");
   scanf("%d",&alu.legajo);

   printf("Ingrese nota del primer parcial: ");
   scanf("%d",&alu.n1);

   printf("Ingrese nota del segundo parcial: ");
   scanf("%d",&alu.n2);

   alu.prom=((alu.n1+alu.n2)/2);


   printf("Su numero de legajo es: %d",alu.legajo);
   printf("\nEl promedio del alumno es: %.2f", alu.prom);




}

