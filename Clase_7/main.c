#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT  31


    char nombre[CANT];
    char apellido[CANT];
    char apellidoNombre[CANT];
    char i;


int main()
{

        for(i=0;i<CANT;i++)
        {

            printf("ingrese nombre: ");
            fflush(stdin);
            scanf("%[^\n]", nombre);
            printf("ingrese apellido: ");
            fflush(stdin);
            scanf("%[^\n]",apellido);
            strlwr(nombre);
            strlwr(apellido);

            nombre[0] = toupper(nombre[0]);
            apellido[0] = toupper(apellido[0]);

            for(i=0; i<30; i++){
                if(nombre[i] == ' ' && nombre[i+1] != ' '){
                nombre[i+1] = toupper(nombre[i+1]);
            }
}

            for(i=0; i<30; i++){
                if(apellido[i] == ' ' && apellido[i+1] != ' '){
                apellido[i+1] = toupper(apellido[i+1]);
        }
	}


            strcpy(apellidoNombre,nombre);
            strcat(apellidoNombre," ");
            strcat(apellidoNombre,apellido);

            printf("Apellido y Nombre: %s",apellidoNombre);

            return 0;
        }


}
