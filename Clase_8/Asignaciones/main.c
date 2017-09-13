#include <stdio.h>
#include <string.h>
struct fecha { int dia,mes,anio;};
struct gente {
char nombre[20];
struct fecha f_nacimiento;
};
void main(void)
{
struct gente pers;
struct fecha fn;
printf("Ingrese nombre: ");
gets(pers.nombre);
printf("Ingrese dia de nacimiento: ");
scanf("%d",&fn.dia);
printf("Ingrese mes de nacimiento: ");
scanf("%d",&fn.mes);
printf("Ingrese a¤o de nacimiento: ");
scanf("%d",&fn.anio);
pers.f_nacimiento=fn;

printf("El nombre es: %s",pers.nombre);
printf("\nLa fecha de nacimiento es: %d/%d/%d",fn.dia,fn.mes,fn.anio);

}
