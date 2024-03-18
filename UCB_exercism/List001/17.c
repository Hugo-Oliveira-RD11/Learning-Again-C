#include "stdio.h"

int main(){
    int retiradas;
    float valor;
    printf("informe o valor depositado na conta e o numero de retiradas");
    scanf("%f",valor);
    scanf("%d",retiradas);

    printf("seu saldo final, apos o imposto e de R$%.2f",(((0.38*retiradas)/100)*valor)+valor);

    
}