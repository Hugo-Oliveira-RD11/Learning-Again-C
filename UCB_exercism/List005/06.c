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
    printf("acertos: %d", VerifyTemplate(vetor, template));
  }
  return 0;
}
void InputVetor(char vetor[LIM]) {
  char answer = 'N';
  int i = 0;
  while (i < LIM) {
    printf("%d° - ", i);
    scanf(" %c", &answer);
    answer = toupper(answer);
    if ('A' != answer || 'B' != answer || 'C' != answer || 'D' != answer ||
        'E' != answer) {
      printf("essa letra nao pode ser usada em prova\n");
      continue;
    }
    i++;
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
