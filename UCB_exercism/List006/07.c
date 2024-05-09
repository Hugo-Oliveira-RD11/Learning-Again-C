#include "stdio.h"
#include <stdlib.h>
#define LIM 10
#define returning 2

int Menor(int vetor[LIM]) {
  int men = 0;
  for (int i = 0; i < LIM; i++) {
    if (vetor[men] > vetor[i])
      men = i;
  }
  return men;
}
int Maior(int vetor[LIM]) {
  int max = 0;
  for (int i = 0; i < LIM; i++) {
    if (vetor[max] < vetor[i])
      max = i;
  }
  return max;
}

int *ReturnMaiorMenor(int vetor[LIM]) {
  int *MMvariable;
  MMvariable = (int *)(malloc(returning * sizeof(int)));
  MMvariable[0] = Menor(vetor);
  MMvariable[1] = Maior(vetor);
  return MMvariable;
}
void PrintVetor(int vetor[returning]) {
  for (int i = 0; i < returning; i++) {
    printf("vetor[%d] = %d", i, vetor[i]);
  }
}

int main() {
  int vetor[LIM] = {0}, *ptr;

  ptr = ReturnMaiorMenor(vetor);

  PrintVetor(ptr);
  return 0;
}
