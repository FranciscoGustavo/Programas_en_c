//Elaborar un programa que imprima una serie de
//10 numeros de forma decendente entre el 1 y 10

#include<stdio.h>
#include<stdlib.h>

int main (){
    int i;

    for (i = 10; i >= 1; i--){
        printf("%d\n",i);
    }

    system("PAUSE");
    return 0;
}
