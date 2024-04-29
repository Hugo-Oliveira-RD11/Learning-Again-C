#include "stdio.h"
#define LIM 10

void Selection_Sort(int a[LIM]) {
  int max = 0, temp = 0;
  for (int i = 0; i < LIM; i++) {
    max = i;
    for (int j = (i + 1); j < LIM; j++) {
      if (a[max] < a[j])
        max = j;
    }
    temp = a[i];
    a[i] = a[max];
    a[max] = temp;
  }
}
void Input_Number(int a[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero inteiro para ficar na posicao %d°:\n",
            i);
    scanf("%d", &a[i]);
  }
}
int main() {
  int array1[LIM];
  Input_Number(array1);
  Selection_Sort(array1);

  for (int i = 0; i < LIM; i++) {
    printf("vetor[%d] = %d\n", i, array1[i]);
  }
  return 0;
}
