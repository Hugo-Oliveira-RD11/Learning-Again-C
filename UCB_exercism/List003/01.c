#include "stdio.h"

int main() {

  int anoInicio = 2006, anoAtual;
  float sal = 1000, perc = 1.5;

  printf("digite o ano atual para saber o aumento que vc tera:\n");
  scanf("%d", &anoAtual);

  for (anoAtual; anoAtual >= anoInicio; anoInicio++) {
    sal += (sal * (perc / 100));
    perc *= 2;
    printf("o seu salario no ano %d sera de R$ %.14f\n", anoInicio, sal);
  }
  return 0;
}
