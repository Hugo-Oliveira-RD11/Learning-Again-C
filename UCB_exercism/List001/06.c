#include "stdio.h";

int main(){
    float salarioBase,gratificacao,imposto;
    
    printf("digite seu salario");
    scanf("%f",&salarioBase);

    gratificacao = (5/100)*salarioBase;
    imposto = (7/100)*salarioBase;
    printf("seu slario final ficou em R$%.2f",(salarioBase+gratificacao-imposto));

    return 0;
}