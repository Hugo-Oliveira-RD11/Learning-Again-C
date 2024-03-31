#include "stdio.h"
int testePese(float peso) {
  if (peso <= 60)
    return 1;
  else if (peso > 60 && peso < 90)
    return 2;
  else
    return 3;
}

int main() {

  float peso, altura;
  int value;
  printf("digite o seu peso e altura\n");
  scanf("%f", &peso);
  scanf("%f", &altura);
  printf("a sua classificacao e \n");
  if (altura < 1.20) {
    value = testePese(peso);
    switch (value) {
    case 1:
      printf("A");
      break;
    case 2:
      printf("D");
      break;
    case 3:
      printf("G");
      break;
    }

  } else if (altura >= 1.20 && altura <= 1.70) {

    value = testePese(peso);
    switch (value) {
    case 1:
      printf("B");
      break;
    case 2:
      printf("E");
      break;
    case 3:
      printf("H");
      break;
    }
  } else {
    value = testePese(peso);
    switch (value) {
    case 1:
      printf("C");
      break;
    case 2:
      printf("F");
      break;
    case 3:
      printf("I");
      break;
    }
  }
  return 0;
}
