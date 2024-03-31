#include "stdio.h"
float imposto(float sal, float perc) { return sal + (sal * (perc / 100)); }

int main() {
  int I;
  float salario, novoSal;
  printf("menu de opção:\n 1 - imposto\n 2 - Novo salario\n 3 - "
         "Classificacao\ndigite: ");
  scanf("%d", &I);
  switch (I) {
  case 1:
    printf("digite seu salario para saber o tanto de imposto a pagar:\n");
    scanf("%f", &salario);
    if (salario > 850.00) {
      novoSal = imposto(salario, 15);
    } else if (salario > 500.00 && salario < 850.00) {
      novoSal = imposto(salario, 10);
    } else {
      novoSal = imposto(salario, 5);
    }
    printf("seu salario e R$%.2f", novoSal);
    break;
  case 2:
    if (salario > 1500.00) {
      novoSal = salario + 25.0;
    } else if (salario <= 1500.00 && salario >= 750.0) {
      novoSal = salario + 50.0;
    } else if (salario >= 450.0 && salario < 750.0) {
      novoSal = salario + 75.0;
    } else {
      novoSal = salario + 100.0;
    }
    printf("seu salario com aumento sera de R$%.2f", novoSal);
    break;
  case 3:
    if (salario > 700)
      printf("voce e bem remunerado");
    else
      printf("voce e mal remunerado");

    break;
  default:
    break;
  }
  return 0;
}
