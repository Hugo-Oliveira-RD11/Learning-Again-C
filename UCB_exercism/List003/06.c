#include "stdio.h"
#include <math.h>

int main() {
  double num, fat, power = 1, soma = 1;
  int aproximacao, j = 0, n = 2, k;
  double cosseno = 0;

  printf("digite o numero de termos que vc quer de aproximacao");
  scanf("%d", &aproximacao);

  printf("digite o numero para ter a aproximacao em cos\n");
  scanf("%lf", &num);

  for (int i = 0; i < aproximacao; i++) {

    fat = 1;
    for (j = n; j > 1; j--) {
      fat *= j;
    }
    power = 1;
    for (k = 1; k <= n; k++) {
      power = power * num;
    }
    if (i % 2 == 0) {
      soma = soma - (power / fat);
    } else if (i % 2 == 1) {
      soma = soma + (power / fat);
    }
    n = n + 2;
  }
  printf("\n\ncos(%f)= %.70f\n", num, soma);
  cosseno = cosf(num + 0.0);
  printf("o valor verdadeiro e %.70f", cosseno);

  return 0;
}
