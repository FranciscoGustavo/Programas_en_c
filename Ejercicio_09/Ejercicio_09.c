/*
Realice un algoritmo que acepte un número e indique si es positivo, negativo o es cero.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;

    printf("Introduce el numero: ");
    scanf("%d",&num);

    if (num > 0) {
        printf("El numero es positivo\n");
    } else if (num < 0) {
        printf("El numero es negativo\n");
    } else {
        printf("El numero es cero\n");
    }


    system("PAUSE");
    return 0;
}
