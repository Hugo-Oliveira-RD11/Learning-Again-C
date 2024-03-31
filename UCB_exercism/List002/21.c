#include "stdio.h"

int main() {
  int preQuilo, codQuilo, origem, imposto;
  float peso, quilos;
  printf("digite o codigo do estado de origem(de 1 a 5), peso do caminhão em "
         "toneladas e codigo da carga(de 10 a 40)");
  scanf("%d", &origem);
  scanf("%f", &peso);
  scanf("%d", &codQuilo);

  quilos = 1000 * peso;

  if (codQuilo >= 10 && codQuilo <= 20)
    preQuilo = 100;
  else if (codQuilo >= 21 && codQuilo <= 30)
    preQuilo = 250;
  else
    preQuilo = 340;

  switch (origem) {
  case 1:
    imposto = 35;
    break;
  case 2:
    imposto = 25;
    break;
  case 3:
    imposto = 15;
    break;
  case 4:
    imposto = 5;
    break;
  case 5:
    imposto = 0;
    break;
  }
  printf("peso quilos R$%.2f\npreco da carga do caminhao R$%.2f\no valor do "
         "imposto R$%.2f\nvalor total: R$%.2f",
         (quilos), (preQuilo * quilos),
         ((preQuilo * quilos) * (imposto / 100.0)),
         (preQuilo * quilos + (preQuilo * quilos * imposto / 100)));

  return 0;
}
