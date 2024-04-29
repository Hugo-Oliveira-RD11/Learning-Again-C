#include "stdio.h"
#define LIM 8

void Selection_Sort(int a[LIM], int min) {
  int temp = 0;
  for (int i = 0; i < LIM; i++) {
    for (int j = (i + 1); j < LIM; j++) {
      if (min > a[j] || a[j] == 0)
        min;
    }
    temp = a[i];
    a[i] = min;
    a[j] = temp;
  }
}

int main() {
  int i = 0, min = 0, array1[LIM] = {0};
  while (i < LIM) {
    printf("digite um numero para ficar na posicao %d°", i);
    scanf("%d", &min);

    Selection_Sort(array1, min);

    i++;
  }

  return 0;
}
