#include "stdio.h"

int main() {
  double num, k = 1;
  int aproximacao, i, j = 1;
  printf("digite o numero de termos que vc quer de aproximacao");
  scanf("%d", &aproximacao);

  printf("digite o numero para ter a aproximacao\n");
  scanf("%lf", &num);

  for (i = 0; i < aproximacao; i++) {
    k = (k + num / k) / 2;
    printf("%d° aproximacao -> %.9lf\n", j++, k);
  }

  return 0;
}
