#include "stdio.h"
#define LIM 5

void Swap_array(int a[LIM], int b[LIM]) {
  int temp = 0, i = 0;
  while (i < LIM) {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
    i++;
  }
}
void Input_Number(int a[LIM], int numberArray) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero inteiro para ficar no vetor%d na posicao %d:\n",
           numberArray, i);
    scanf("%d", &a[i]);
  }
}
int main() {
  int array1[LIM], array2[LIM];
  Input_Number(array1, 1);
  Input_Number(array2, 2);

  Swap_array(array1, array2);

  for (int i = 0; i < LIM; i++)
    printf("vetor1[%d] = %d - vetor2[%d] = %d\n", i, array1[i], i, array2[i]);

  return 0;
}
