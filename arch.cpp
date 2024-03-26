#include <stdio.h>

int main(){
    printf("Hola Mundo");

    int *punt, dato = 21;
    punt  = &dato;

    printf("\n%d", *punt);

    printf("\n%p", punt);


    return 0;
}