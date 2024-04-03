#include <stdio.h>

void cuadradoNumero(int *n);

int main(){
    int *n;
    int num;
    printf("Ingresar el numero: ");
    scanf("%d", &num);

    n = &num;

    cuadradoNumero(n);

    printf("\nEl valor elevado al cuadrado es: %d", *n);
    
    printf("\npep la rana");
}

void cuadradoNumero(int *n){
    *n = (*n)*(*n);
}


