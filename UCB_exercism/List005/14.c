#include "stdio.h"
#define LIM 2

void Select_Sort(int m[LIM][LIM + 1], int *min, int *max) {
  for (int i = 0; i < LIM; i++) {
    for (int j = i + 1; j < (LIM + 1); j++) {
      if (m[i][j] < m[i][*min])
        *min = j;
    }
  }
  for (int i = 0; i < LIM; i++) {
    for (int j = i + 1; j < (LIM + 1); j++) {
      if (m[i][*min] > m[*max][*min])
        *max = j;
    }
  }
}

int main() {
  int m[LIM][LIM + 1], maxCol = 0, minLin = 0;
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < (LIM + 1); j++) {
      printf("digite um numero para fica na posisao [%d][%d]", i, j);
      scanf("%d", &m[i][j]);
    }
  }
  Select_Sort(m, &minLin, &maxCol);

  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < (LIM + 1); j++) {
      printf("vetor[%d][%d]=[%d]", i, j, m[i][j]);
    }
  }
  return 0;
}
