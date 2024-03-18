#include "stdio.h"
#include "math.h"

int main(){
    float valor;
    printf("digite um valor:\n");
    scanf("%f",valor);
    if(valor>0){
        printf("quadrado do valor: %.2f\ncubo do valor: %.2f\nraiz quadrada do valor: %.2f\nraiz cubica do valor: %.2f",(pow(valor,2)),(pow(valor,3)),(pow(valor,1/2),(pow(valor,1/3))));
    }else{
        printf("esse valor n e permitido");
        return -1;
    }
    return 0;
}