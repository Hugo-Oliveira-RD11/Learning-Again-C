#include "stdio.h"
#define LIM 10

void InputDatas(int a[LIM], int op) {
  switch (op) {
  case 1:
    for (int i = 0; i < LIM; i++) {
      printf("digite um numero para o vetor%d[%d]", op, i);
      scanf("%d", &a[i]);
    }
    break;
  case 2:
    for (int i = 0; i < LIM; i++) {
      printf("digite um numero para o vetor%d[%d]", op, i);
      scanf("%d", &a[i]);
    }
    break;
  }
}

void IntercalationTwoArrays(int a[LIM], int b[LIM],
                            int intercalation[LIM * 2]) {
  int i = 0, contArray1 = 0, contArray2 = 0;
  while (i < LIM * 2) {
    if (i % 2 == 0) {
      intercalation[i] = a[contArray1];
      contArray1++;

    } else {
      intercalation[i] = b[contArray2];
      contArray2++;
    }

    i++;
  }
}

void ShowArrays(int a[LIM * 2]) {

  printf("a intercalacao dos dois vetores e\n");
  for (int i = 0; i < LIM * 2; i++)
    printf("vetor[%d]=%d\n", i, a[i]);
}

int main() {
  int input1[LIM], input2[LIM], intercalation[LIM * 2];

  InputDatas(input1, 1);
  InputDatas(input2, 2);

  IntercalationTwoArrays(input1, input2, intercalation);

  ShowArrays(intercalation);
  return 0;
}
