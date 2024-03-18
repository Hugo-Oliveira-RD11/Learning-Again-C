#include "stdio.h"

int main(){
    float pes, milhas, jardas, polegadas;
    printf("digite um valor em pes :");
    scanf("%f",pes);
    milhas=(pes/3)/1760;
    jardas= pes/3;
    polegadas=pes*12;

    printf("milhas:%.2f\njardas: %.2f\npolegadas: %.2f",milhas,jardas,polegadas);
    return 0;
}