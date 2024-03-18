#include "stdio.h"

int main() {
  float salario, percAumento, salarioFinal;
  printf("digite seu salario e o percentual de aumento: \n");
  scanf("%f", &salario);
  scanf("%f", &percAumento);
  salarioFinal = ((percAumento / 100) * salario) + salario;
  printf("seu salario atual: R$%.2f\nSeu percentual de aumento: %.2f\%\nSeu "
         "novo salario: R$%.2f",
         salario, percAumento, salarioFinal);

  return 0;
}
