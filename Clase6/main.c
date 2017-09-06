#include <stdio.h>
#include <stdlib.h>
#define ESC 27
#define CANT 30
int main()
{
   char nombre[CANT];
   char letra;

    do{
        system("cls");
        printf("Ingrese un nombre: ");
        fflush(stdin);
        scanf("%[^\n]s",nombre);
        printf("El nombre es: %s",nombre);

        printf("\n\n Presionar cualquier tecla para continuar... ESC para cancelar.");

        letra=getch();
    }while(letra != ESC);

    return 0;

}


