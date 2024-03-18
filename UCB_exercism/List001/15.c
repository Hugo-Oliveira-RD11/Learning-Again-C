#include "stdio.h"
int main(){
    float imposto, distribuidor, fabrica;
    printf("digite na seguinte ordem, o preço de fabrica,percentual de lucro do distribuidor e percentual do imposto\n");
    scanf("%f",fabrica);
    scanf("%f",distribuidor);
    scanf("%f",imposto);

    printf("valor do lucro do distribuidor R$%.2f\nvalor do imposto pago e R$%.2f\no preço final fica em R$%.2f",(distribuidor/100)*fabrica,(imposto/100)*fabrica,(fabrica+((distribuidor/100)*fabrica)+((imposto/100)*fabrica)));
    return 0;
}