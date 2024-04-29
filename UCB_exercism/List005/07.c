#include "stdio.h"
#define LIM 10

void Selection_Sort(int a[LIM]) {
  int max = 0, temp = 0;
  for (int i = 0; i < LIM; i++) {
    max = a[i];
    for (int j = (i + 1); j < LIM; j++) {
      if (max < a[j])
        max = a[j];
    }
    temp = a[i];
    a[i] = max;
    a[j] = temp;
  }
}
void Input_Number(int a[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero inteiro para ficar no vetor%d na posicao %d:\n",
           numberArray, i);
    scanf("%d", &a[i]);
  }
}
int main() {
  int array1[LIM];
  Input_Number(array1);
  Selection_Sort(array1);

  for (int i = 0; i < LIM; i++) {
    printf("vetor[%d] = %d", i, array1[i]);
  }
  return 0;
}
