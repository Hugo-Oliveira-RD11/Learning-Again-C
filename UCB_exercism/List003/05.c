#include "stdio.h"

int main() {

  double fibo = 1, num, temp = 0, atefibo = 0;
  printf("digite o numero de digitos que vc quer que apareca a sequencia de "
         "fibonacci\n");
  scanf("%lf", &num);

  printf("0, ");
  num--;
  for (double i = 0; i < num; i++) {

    printf("%.0lf, ", fibo);
    temp = fibo;
    fibo += atefibo;
    atefibo = temp;
  }
  return 0;
}
