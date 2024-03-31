#include "math.h"
#include "stdio.h"
#include <math.h>

int main() {
  float a, b, c, delta;

  printf("Equacao do segundo grau\n\ndigite o valor de a, b e c");
  scanf("%f", &a);

  if (a == 0) {
    printf("esse valor não pode existi");
    return -1;
  }
  scanf("%f", &b);
  scanf("%f", &c);

  delta = (pow(b, 2)) - (4 * c * a);

  if (delta == 0)
    printf("o unico valor encontrado e o %.2f", (-b + sqrtf(delta) / (2 * a)));
  else if (delta < 0)
    printf("não e possivel encontrar um valor para essa funcao");
  else
    printf("valor de x1 = %.2f\nvalor de x2 = %.2f",
           (-b + sqrtf(delta) / (2 * a)), (-b - sqrtf(delta) / (2 * a)));

  return 0;
}
