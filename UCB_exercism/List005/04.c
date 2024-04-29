#include "stdio.h"
#define LIM 8

void InputNumber(int a[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero para ficar na posicao %d°", i);
    scanf("%d", &a[i]);
  }
}
void Separation(int a[LIM], int negative[LIM], int plus[LIM]) {
  int i = 0, contPlus = 0, contNegative = 0;

  while (i < LIM) {
    if (a[i] < 0) {
      negative[contNegative] = a[i];
      contNegative++;
    } else if (a[i] > 0) {
      plus[contPlus] = a[i];
      contPlus++;
    } else if (a[i] == 0)
      continue;

    i++;
  }
}

void ShowDuoArray(int a[LIM], int change) {
  switch (change) {
  case 1:
    for (int i = 0; i < LIM; i++)
      printf("+vetor[%d] = %d\n", i, a[i]);
    break;
  case -1:
    for (int i = 0; i < LIM; i++)
      printf("-vetor[%d] = %d\n", i, a[i]);
    break;
  }
}

int main() {
  int sum[LIM] = {0}, negative[LIM] = {0}, input[LIM];

  InputNumber(input);
  Separation(input, negative, sum);

  ShowDuoArray(sum, 1);
  ShowDuoArray(negative, -1);

  return 0;
}
