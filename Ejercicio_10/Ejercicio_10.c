/*
    En una disco necesitan evaluar, de una muestra de 20 jóvenes,
    cuántos son mayores de 25 años, y de ellos, cuántos son mujeres y cuántos son hombres.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int mayores = 0, mujeres = 0, hombres = 0;
    int genero, edad, i;

    for (i = 1; i <= 20; i++) {
        printf("Introduce tu edad: ");
        scanf("%d",&edad);

        if (edad > 25){
            mayores++;

            printf("Introduce tu genero Hombre = 1, Mujer = 2: ");
            scanf("%d",&genero);

            if (genero == 1){
                hombres++;
            }else if (genero == 2){
                mujeres++;
            } else {
                printf("Error de genero\n");
            }


        }
    }

    printf("%d son mayores de edad\n%d son mujeres\n%d son hombres\n",mayores,mujeres,hombres);

    system("PAUSE");
    return 0;
}
