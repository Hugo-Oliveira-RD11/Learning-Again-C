#include "stdio.h"
#define LIN1 4

void MultiplicationMatriz(int m1[(LIN1 - 1)][LIN1], int m2[LIN1][(LIN1 - 2)],
                          int result[(LIN1 - 1)][(LIN1 - 2)]);

int main() {
  int m1[(LIN1 - 1)][LIN1], m2[LIN1][(LIN1 - 2)],
      result[(LIN1 - 1)][(LIN1 - 2)] = {0, 0};
  for (int i = 0; i < (LIN1 - 1); i++) {
    for (int j = 0; j < LIN1; j++) {
      printf("digite um numero para fica na posisao [%d][%d]\n", i, j);
      scanf("%d", &m1[i][j]);
    }
  }

  for (int i = 0; i < LIN1; i++) {
    for (int j = 0; j < (LIN1 - 2); j++) {
      printf("digite um numero para fica na posisao [%d][%d]\n", i, j);
      scanf("%d", &m2[i][j]);
    }
  }

  MultiplicationMatriz(m1, m2, result);

  for (int i = 0; i < (LIN1 - 1); i++) {
    for (int j = 0; j < (LIN1 - 2); j++) {
      printf("[%d][%d]=%d\n", i, j, result[i][j]);
    }
  }
  return 0;
}

void MultiplicationMatriz(int m1[(LIN1 - 1)][LIN1], int m2[LIN1][(LIN1 - 2)],
                          int result[(LIN1 - 1)][(LIN1 - 2)]) {
  for (int i = 0; i < (LIN1 - 1); i++) {
    for (int j = 0; j < (LIN1 - 2); j++) {
      for (int k = 0; k < LIN1; k++) {
        result[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
}
