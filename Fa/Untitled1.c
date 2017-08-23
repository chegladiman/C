#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;

    printf("ingrese edad: ");
    scanf("%d",&edad);
    while(edad<0){
    printf("ingrese edad: ");
    scanf("%d",&edad);
    }
    return 0;
}
