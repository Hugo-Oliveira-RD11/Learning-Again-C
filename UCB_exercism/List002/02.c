#include "stdio.h"

int main() {
  float nota1, nota2, nota3, media;
  printf("digite tres notas do do aluno:\n");
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  scanf("%f", &nota3);

  media = (nota1 + nota2 + nota3) / 3;
  if (media <= 2.99) {
    printf("reprovado");
  } else if (3.00 <= media <= 6.99) {
    printf("Exame");
  } else {
    printf("Aprovado");
  }
  return 0;
}
