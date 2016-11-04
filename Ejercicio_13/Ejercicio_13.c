//Elabore un algoritmo que imprima una tabla de multiplicar'

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, num, mult;

    printf("Introduce el numero de la tabla: ");
    scanf("%d",&num);

    printf("\nLa tabla de multiplicar es: %d\n",num);
    for (i = 1; i <= 10; i++){
        mult = i * num;
        printf("%d * %d = %d\n",i,num,mult);
    }

    system("PAUSE");
    return 0;
}
