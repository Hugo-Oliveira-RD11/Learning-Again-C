#include "stdio.h"
#include <stdlib.h>
#define LIM 10

void Change(int m[LIM][LIM], int NumberChange1, int NumberChange2, int WhatIs);
void Print(int m[LIM][LIM]);

int main() {
  int i = 0;
  int m[LIM][LIM] = {0, 0};
  printf("digite um numero\n1 - trocar linha\n2 - trocar coluna\n3 - trocar "
         "linha por coluna\n4 - trocar diagonal principal pela segundaria\n ");
  scanf("%d", &i);
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      // scanf("%d", &m[i][j]);

      /*Random number for tests*/
      m[i][j] = (rand() % 10) + 1;
      printf("%d \t", m[i][j]);
    }
    printf("\n\n\n");
  }
  Change(m, 2, 8, 1);
  Change(m, 4, 9, 2);
  Change(m, 0, 0, 4);
  Change(m, 5, 9, 3);
}

void Print(int m[LIM][LIM]) {
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      printf("%d \t", m[i][j]);
    }
    printf("\n");
  }
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
    Print(m);
    break;
  case 2:
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[i][NumberChange1];
      m[i][NumberChange1] = m[i][NumberChange2];
      m[i][NumberChange2] = vetor[i];
    }
    Print(m);
    break;
  case 3:
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[NumberChange1][i];
      m[NumberChange1][i] = m[i][NumberChange2];
      m[i][NumberChange2] = vetor[i];
    }
    Print(m);
    break;
  case 4:
    int j = (LIM - 1);
    for (int i = 0; i < LIM; i++) {
      vetor[i] = m[i][i];
      m[i][i] = m[j][i];
      m[j][i] = vetor[i];
      j--;
    }
    Print(m);
    break;
  }
}
