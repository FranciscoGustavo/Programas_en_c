/*
Diseñar un algoritmo que calcule el cubo de un número,
Siempre y cuando sea positivo, en caso contrario indicar que no es positivo
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int num, res;

    printf("Introduce un numero: ");
    scanf("%d",&num);

    if (num > 0){
        res = pow(num,3);
        printf("El cubo de %d es: %d\n
               ",num,res);
    } else {
        printf("El numero no es positivio\n");
    }

    system("PAUSE");
    return 0;
}
