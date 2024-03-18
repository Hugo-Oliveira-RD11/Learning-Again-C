#include "stdio.h"

int main() {
  float pesoN1, pesoN2, pesoN3, nota1, nota2, nota3, totalMedia, totalPesos;

  printf("digite a 1° nota e seu peso:\n");
  scanf("%f", &nota1);
  scanf("%f", &pesoN1);

  printf("digite a 2° nota e seu peso:\n");
  scanf("%f", &nota2);
  scanf("%f", &pesoN2);

  printf("digite a 3° nota e seu peso:\n");
  scanf("%f", &nota3);
  scanf("%f", &pesoN3);

  totalPesos = pesoN1 + pesoN2 + pesoN3;
  totalMedia = (nota1 * pesoN1 + nota2 * pesoN2 + nota3 * pesoN3) / totalPesos;

  printf("media da nota: %.2f\nTotal dos pesos: %.2f", totalMedia, totalPesos);

  return 0;
}
