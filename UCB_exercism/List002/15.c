#include "stdio.h"

int main() {
  float salario, vthora, salMes;
  int horas, dependentes, horasExtras, NhorasExtras, nDependentes;

  printf("digite o seu salario, numero de horas trabalhadas, numero dos seus "
         "dependentes,quantidade de horas extras trabalhadas\n");
  scanf("%f", &salario);
  scanf("%d", &horas);
  scanf("%d", &dependentes);
  scanf("%d", &horasExtras);

  vthora = 20.0 / 100 * salario;
  nDependentes = dependentes * 32;
  NhorasExtras = (horasExtras * 20 / 100) + (horasExtras * 50 / 100);
  salMes = horas * vthora + nDependentes + NhorasExtras;

  if (salMes < 200.0) {
    printf("seu salario e %.2f", (salMes + 100));
  } else if (salMes >= 200.0 && salMes <= 500.0) {
    salMes = salMes + (salMes * 10 / 100);

    if (salMes <= 350.0)
      printf("seu salario e de %.2f", (salMes + 100));
    else
      printf("seu salario e de %.2f", (salMes + 50));
  } else {
    salMes = salMes + (salMes * 20 / 100);
    printf("seu salario e de %.2f", salMes);
  }

  return 0;
}
