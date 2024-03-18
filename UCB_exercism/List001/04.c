#include "stdio.h"
int main() {
  float salario;

  printf("digite seu salario para saber seu aumento: ");
  scanf("%f", &salario);

  printf("seu novo salrio é R$%.2f\n", (salario + (salario * 1 / 4)));
  return 0;
}
