#include <stdio.h>
#include <string.h>
#include "funcionesAsignaciones.h"

int main()
{
    struct alumno alumnos[2];
    int i;
        for(i=0;i<2;i++){

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(&alumnos[i].nombre);

    printf("Ingrese legajo: ");
    scanf("%d",&alumnos[i].legajo);
        }


    for(i=0;i<2;i++){
    printf("\nAlumno ingresado: %s",alumnos[i].nombre);
    printf("\nLegajo Nro.: %d",alumnos[i].legajo);
    }





}
