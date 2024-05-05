#include "stdio.h"
#define LIM 4

void SelectMin(int m[LIM][LIM], int *lin) {
  int min = m[0][0];
  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      if (min > m[i][j])
        *lin = i;
    }
  }
}

void SelectMax(int m[LIM][LIM], int *lin, int *col) {
  int max = m[*lin][0];
  for (int j = 0; j < LIM; j++) {
    if (max < m[*lin][j])
      *col = j;
  }
}

int main() {
  int matrix[LIM][LIM], MaxCol = 0, Linha = 0;

  for (int i = 0; i < LIM; i++) {
    for (int j = 0; j < LIM; j++) {
      printf("digite um numero para fica na posisao [%d][%d]", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }

  SelectMin(matrix, &Linha);
  SelectMax(matrix, &Linha, &MaxCol);
  printf("[%d][%d]=%d", Linha, MaxCol, matrix[Linha][MaxCol]);
  return 0;
}
