/*
Elaborar un algoritmo que imprima la palabra Hola diez veces
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

    int i = 1;

    do {
        printf("%d Hola\n",i);
        i++;
    } while(i <= 10);

/*
    while(i <= 10){
        printf("%d Hola\n",i);
        i++;
    }
*/
   /* for(i = 1; i <= 10; i++){
        printf("%d Hola\n",i);
    }*/

    system("PAUSE");
    return 0;
}
