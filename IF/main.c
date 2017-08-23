#include <stdio.h>
#include <stdlib.h>

#define enero 0
#define febrero 1
int main()
{
    int i;

        for(i=1;i<10;i++){
            if(i%2==0){
                continue;
            }
            printf("%d es impar\n", i);

        }



    return 0;
}
