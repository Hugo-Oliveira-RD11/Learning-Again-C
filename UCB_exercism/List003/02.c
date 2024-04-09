#include "stdio.h"

int main() {
  double Soma = 1.0, fat = 1.0;
  int num, i, j;

  printf("digite um numero maior que zero e inteiro\n");
  scanf("%d", &num);
  if (num > 0) {

    for (i = 2; i < num; i++) {
      fat = 1;
      for (j = i; j > 1; j--) {
        fat = fat * j;
      }
      printf("fatorial de %d é %.2lf\n", i, fat);
      Soma = Soma + 1 / fat;
      printf("a soma ate agora e de %lf\n", Soma);
    }
    printf("\n-------------------------------------------------\n");
    printf("\nA soma toda e %.14f\n", Soma);
    printf("\n-------------------------------------------------\n");

  } else if (num == 0 || num < 0) {
    printf("!!tem quer ser um numero inteiro maior quer 0!!");
  }
  return 0;
}
