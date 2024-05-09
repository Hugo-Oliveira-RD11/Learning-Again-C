#include "stdio.h"
#include <ctype.h>
#define LIM 30

int VerifyTemplate(char vet[LIM], char template[LIM]);
void InputVetor(char vetor[LIM]);

int main() {
  char students, template[LIM] = {0}, vetor[LIM] = {0};
  printf("digite quantos alunos tens\n");
  scanf(" %c", &students);

  printf("digite o gabarito da questaos\n");
  InputVetor(template);

  for (int i = 0; i < students; i++) {
    printf("digite as respostas do aluno %d\n", i);
    InputVetor(vetor);
    printf("acertos: %d\n", VerifyTemplate(vetor, template));
  }
  return 0;
}
void InputVetor(char vetor[LIM]) {
  char answer, answer2 = 'A';
  int i = 0;
  while (i < LIM) {
    printf("%d° - ", i);
    scanf(" %c", &answer);
    answer2 = toupper(answer);
    switch (answer2) {
    case 'A':
      vetor[i] = answer2;
      i++;
      break;
    case 'B':
      vetor[i] = answer2;
      i++;
      break;
    case 'C':
      vetor[i] = answer2;
      i++;
      break;
    case 'D':
      vetor[i] = answer2;
      i++;
      break;
    case 'E':
      vetor[i] = answer2;
      i++;
      break;
    default:
      printf("essa letra nao pode ser usada em prova\n");
      continue;
      break;
    }
  }
}
int VerifyTemplate(char vet[LIM], char template[LIM]) {
  int hits = 0;
  for (int j = 0; j < LIM; j++) {
    if (vet[j] == template[j])
      hits++;
  }
  return hits;
}
