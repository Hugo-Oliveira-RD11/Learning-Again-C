#include "stdio.h"
#define LIM 8

void Selection_Sort(int a[LIM]) {
  int max = 0, temp = 0;
  for (int i = 0; i < LIM; i++) {
    max = i;
    for (int j = (i + 1); j < LIM; j++) {
      if (a[max] > a[j])
        max = j;
    }
    temp = a[i];
    a[i] = a[max];
    a[max] = temp;
  }
}

int main() {
  int i = 0, array1[LIM]={0};
  while (i < LIM) {
    printf("digite um numero para ficar na posicao %d°", i);
    scanf("%d", &array1[i]);

    Selection_Sort(array1 );

    i++;
  }
for (int i = 0; i < LIM; i++) {
    printf("vetor[%d] = %d\n", i, array1[i]);
  }

  return 0;
}
