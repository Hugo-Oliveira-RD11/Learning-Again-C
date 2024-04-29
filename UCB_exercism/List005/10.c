#include "stdio.h"
#define LIM 100
int main(){
    int array[LIM], number=0,cont2=0;

    while (number != 999 && cont2 < LIM) {
        printf("digite um numero (ou digite 999 para sair do programa)\n");
        scanf("%d", &number);
        array[cont2] = number;
        cont2++;

    }

    for (int i = (cont2 -2); i >= 0; i--) {
        printf("%d\n",array[i]);

    }

    return 0;
}
