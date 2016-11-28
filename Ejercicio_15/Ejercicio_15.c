//Calcular el valor de "Y" cuando el valor de "X" cambia del 1 al 10,
//en la siguiente ecuacion y = x + 12

#include<stdio.h>
#include<stdlib.h>

#define doce 12

int main (){
    int x = 1, y;

    while(x <= 10){
        y = x + doce;
        printf("Cuando X = %d, Y = %d\n",x,y);
        x++;
    }


    system("PAUSE");
    return 0;
}
