#include "stdio.h"

int main() {
  float nota1, nota2, nota3;
  printf("digite tres notas do mesmo aluno\n");
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  scanf("%f", &nota3);
  printf("a media aritmetrica das notas são : %.2f\n",
         ((nota1 + nota2 + nota3) / 3));
  return 0;
}
