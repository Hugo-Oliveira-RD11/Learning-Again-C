#include "stdio.h"

int main() {
  float salario;
  printf("digite seu salario para saber sua bonificacao:\n");
  scanf("%f", &salario);

  if (500.00 >= salario) {
    printf("seu novo salario e acrescido de 5%% mais auxilo-escola de "
           "R$150\nsalario:%.2f",
           (salario + (salario * 5 / 100) + 150));
  } else if (501.00 < salario && salario > 1200.00) {
    if (salario > 600.0) {
      printf("seu novo salario e acrescido de 12%% mais auxilo-escola de "
             "R$100\nsalario:%.2f",
             (salario + (salario * 12 / 100) + 100));
    } else {
      printf("seu novo salario e acrescido de 12%% sem auxilo-escola\nsalario: "
             "R$%.2f",
             (salario + (salario * 12 / 100)));
    }
  } else {
    printf("seu salario nao tem modificacao");
  }
  return 0;
}
