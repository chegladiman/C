#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT  3



    int auxNom;
    char nota[CANT];
    int i;
    int j;
    char notaAux;
    int nombre[CANT];

int main()
{

    for(i=0;i<CANT;i++){

        printf("Nombre: ");
        fflush(stdin);
        scanf("%d",&nombre[i]);
        printf("Nota: ");
        fflush(stdin);
        scanf("%c",&nota[i]);
    }

     for(i=0;i<CANT-1;i++)
        {
        for (j=i+1;j<CANT;j++)
        {
            if(nota[i]< nota[j]){

                strcpy(auxNom,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],auxNom);
                notaAux=nota[i];
                nota[i]=nota[j];
                nota[j]=notaAux;

            }
        }
     }for(i=0;i<CANT;i++){
        printf("El nombre es: %d",nombre);
        printf("La nota es: %s",nota);
     }
}



