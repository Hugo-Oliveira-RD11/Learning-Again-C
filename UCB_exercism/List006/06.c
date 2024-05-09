#include "stdio.h"
#include <stdlib.h>
#define LIM 10
int *DobleVetor(int vetor[LIM]) {
  int *dobleVetor;
  dobleVetor = (int *)(malloc(LIM * sizeof(int)));
  for (int i = 0; i < LIM; i++) {
    scanf("%d", &dobleVetor[i]);
  }
  return dobleVetor;
}
void InputVetor(int vetor[LIM]) {
  for (int i = 0; i < LIM; i++) {
    scanf("%d", &vetor[i]);
  }
}

void PrintfVecto(int vetor[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("vetor[%d] = %d", vetor[i]);
  }
}
int main() {
  int vetor[LIM] = {0}, *doble;
  InputVetor(vetor);
  doble = DobleVetor(vetor);
  PrintfVecto(doble);

  free(doble);
  return 0;
}
