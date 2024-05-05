#include "stdio.h"
#include <stdlib.h>
#define LIM 10

void Change(int m[LIM][LIM], int NumberChange1, int NumberChange2, int WhatIs);

int main() {
  int i = 0;
  int m[LIM][LIM] = {0, 0};
  printf("digite um numero\n 1 - trocar linha\n2 - trocar coluna\n3 - trocar "
         "linha por coluna\n4 - trocar diagonal principal pela segundaria\n ");
  scanf("%d", &i);
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      m[i][j] = rand();
      printf(" %d \n", m[i][j]);
    }
  }
  Change(m, 2, 8, 1);
  Change(m, 4, 10, 2);
  Change(m, 0, 0, 4);
  Change(m, 5, 10, 3);
}

void Change(int m[LIM][LIM], int NumberChange1, int NumberChange2, int WhatIs) {
  int vetor[LIM] = {0};
  switch (WhatIs) {
  case 1:
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[NumberChange1][i];
      m[NumberChange1][i] = m[NumberChange2][i];
      m[NumberChange2][i] = vetor[i];
    }
    break;
  case 2:
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[i][NumberChange1];
      m[i][NumberChange1] = m[i][NumberChange2];
      m[i][NumberChange2] = vetor[i];
    }
    break;
  case 3:
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[NumberChange1][i];
      m[NumberChange1][i] = m[i][NumberChange2];
      m[i][NumberChange2] = vetor[i];
    }
    break;
  case 4:
    for (int i = 0; i < LIM; i++) {
      int j = LIM;
      vetor[i] = m[i][i];
      m[i][i] = m[j][j];
      m[j][j] = vetor[i];

      j--;
    }
    break;
  }
}
