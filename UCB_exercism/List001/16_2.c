#include "stdio.h"
int main(){
    float valorHora; 
    int Hora;
    printf("digite valor da hora trabalhada e as horas trabalhadas\n");
    scanf("%f",valorHora);
    scanf("%d",Hora);

    printf("seu salario e de R$%.2f",((valorHora/2)*Hora)-(3/100));



    return 0;
}