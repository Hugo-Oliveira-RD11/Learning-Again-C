#include "stdio.h"
int main() {
  int num1;
  printf("digite um numero qualquer\n");
  scanf("%d", &num1);
  if (num1 % 2 == 0) {
    printf("este numero e par.");
  } else {
    printf("este numero e impar.");
  }
  return 0;
}
