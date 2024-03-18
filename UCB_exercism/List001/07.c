
#include "stdio.h"
int main(){
    float salarioBase,imposto;
    imposto = 10/100;
    printf("digite seu salario:");
    scanf("%f",salarioBase);

    printf("seu salario final sera R$%.2f",((salarioBase-imposto)+50));
    return 0;
}