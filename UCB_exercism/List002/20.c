#include "stdio.h"

int main() {
  int pais, produto, juros, preGrama;
  float peso;
  printf("digite o codigo do pais (de 1 a 3), do produto (de 1 a 10) e tambem "
         "o peso do produto em quilos\n");
  scanf("%d", &pais);
  scanf("%d", &produto);
  scanf("%f", &peso);
  switch (pais) {
  case 1:
    juros = 0;
    break;
  case 2:
    juros = 15;
    break;
  case 3:
    juros = 25;
    break;
  }
  if (produto >= 1 && produto <= 4)
    preGrama = 10;
  else if (produto >= 5 && produto <= 7)
    preGrama = 25;
  else
    preGrama = 35;

  printf(
      "o peso em gramas e R$%.2f\no preco total do produto e de R$%.2f\no "
      "imposto combrado e de R$%.2f\nvalor total R$%.2f",
      (peso * 1000), (preGrama * (1000 * peso)),
      (preGrama * (1000 * peso) * juros / 100),
      ((preGrama * (1000 * peso)) + (preGrama * (1000 * peso) * juros / 100)));

  return 0;
}
