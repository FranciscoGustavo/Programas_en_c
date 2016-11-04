#include<stdio.h>
#include<stdlib.h>

int main () {
    int art = 1, total = 0;
    int precio;
    while (art == 1){
        printf("Precio\n");
        scanf("%d",&precio);
        if (precio == 0) {
            art = 0;
        } else {
            total =+ precio;
        }
    }
    printf("Total %d",total);
    system("PAUSE");
    return 0;
}
