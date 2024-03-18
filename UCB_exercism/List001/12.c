#include "stdio.h"
#include "math.h"

int main(){
    float valor1,valor2;
    printf("digite dois numeros maiores que zero\n");
    scanf("%f",valor1);
    scanf("%f",valor2);
    if(valor1<0 || valor2 <0){
        printf("esse valor e n e permitido");
        return -1;
    }else{
        printf("primeira elevação: %.2f\nsegunda elevação: %.2f",(pow(valor1,valor2),pow(valor1,valor2)));
    }

    return 0;
}