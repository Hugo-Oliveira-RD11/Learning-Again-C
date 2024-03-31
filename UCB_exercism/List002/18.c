#include "stdio.h"

int possivel_triagulo(int a, int b, int c) {
  int value;
  if (a + b < c)
    value = 0;
  else if (a + c < b)
    value = 0;
  else if (b + c < a)
    value = 0;
  else
    value = 1;
  return value;
}
int main() {
  float ladoA, ladoB, ladoC;
  printf("digite tres valores de lados dos triagulos\n");
  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);

  switch (possivel_triagulo(ladoA, ladoB, ladoC)) {
  case 1:
    if (ladoA == ladoB || ladoB == ladoC) {
      if (ladoA == ladoB && ladoA == ladoC)
        printf("triangulo equilatero");
      printf("triangulo isoceles");
    } else {
      printf("este triangulo e escaleno");
    }
    break;
  default:
    printf("não e possivel ter esse triangulo");
    break;
  }

  return 0;
}
