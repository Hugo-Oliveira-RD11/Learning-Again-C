#include "stdio.h"

void InputVetor(int LIM, int vetor[LIM]) {
  for (int i = 0; i < LIM; i++) {
    scanf("%d", &vetor[i]);
  }
}

void PrintVetor(int LIM, int vetor[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("vetor[%d] = %d", i, vetor[i]);
  }
}
int main() {
  int num;
  printf("digite o numero do vetor");
  scanf("%d", &num);
  int vetor[num];
  InputVetor(num, vetor);

  PrintVetor(num, vetor);
  return 0;
}
