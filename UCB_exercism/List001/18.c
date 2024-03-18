#include "stdio.h"
int main(){
    float racao, gatos;
    printf("digite o peso da ração em quilos e logo em seguida, a quantidade fornecida para um dos gatos\n");
    scanf("%f",racao);
    scanf("%f",gatos);

    printf("a quatidade que restarar da sua ração em 5 dias sera de %.2f",(racao*1000)-(2*5*gatos));
    return 0;
}