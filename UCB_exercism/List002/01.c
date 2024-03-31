#include "stdio.h"

int main() {
  float lab, ava, exame, media;
  printf("de tres notas ao aluno para calculo final das notas:\n");
  scanf("%f", &lab);
  scanf("%f", &ava);
  scanf("%f", &exame);
  media = ((lab * 2) + (ava * 3) + (exame * 5)) / 10;

  if (media >= 8.0) {
    printf("nota A");
  } else if (media >= 7.0 && media < 7.99) {
    printf("nota B");
  } else if (media >= 6.0 && media < 6.99) {
    printf("nota C");
  } else if (media >= 5.0 && media < 5.99) {
    printf("nota C");
  } else {
    printf("nota E");
  }
  return 0;
}
