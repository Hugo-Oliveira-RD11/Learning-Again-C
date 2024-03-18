#include "stdio.h"
int main (){
    float deposito, juros;
    printf("digite um valor de algum deposito e seus juros para saber o rendimento\n");
    scanf("%f",deposito);
    scanf("%f",juros);
    printf("seu rendimento final e de R$%.2f",(deposito*(juros/100)));
    return 0;
}