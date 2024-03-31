#include "stdio.h"
float NovoSalario(float sal, float perc) { return sal + (sal * (perc / 100)); }

int main() {
  int codigo;
  float salario, novoSal;
  printf("tabela dos funcionarios:\n 1 | escriturario\n 2 | secretario\n 3 | "
         "Caixa\n 4 | Gerente\n 5 | Diretor\ndigite seu codigo:\n");
  scanf("%d", &codigo);
  printf("digite seu salario: \nR$");
  scanf("%f", &salario);
  switch (codigo) {
  case 1:
    novoSal = NovoSalario(salario, 50);
    printf("seu novo salario e %.2f", novoSal);
    break;
  case 2:
    novoSal = NovoSalario(salario, 35);
    printf("seu novo salario e %.2f", novoSal);
    break;
  case 3:
    novoSal = NovoSalario(salario, 20);
    printf("seu novo salario e %.2f", novoSal);
    break;
  case 4:
    novoSal = NovoSalario(salario, 10);
    printf("seu novo salario e %.2f", novoSal);
    break;
  case 5:
    printf("seu salario continua sendo %.2f", salario);
    break;
  default:
    break;
  }
  return 0;
}
