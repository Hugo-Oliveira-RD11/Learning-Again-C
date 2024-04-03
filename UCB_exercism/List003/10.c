#include "stdio.h"
int Maior(int a, int b, int c, int d);
char nome = 'n';
int main() {
  int num;
  int cont = 0, ganhou, candidatoA = 0, candidatoB = 0, candidatoC = 0,
      candidatoD = 0, nulo = 0, branco = 0;

  printf("sistema de votação\n\n");

  while (1) {
    printf("candidato A digite 1\ncandidato B digite 2\ncandidato C digite "
           "3\ncandidato D digite 4\npara nulo digite 5\npara em branco digite "
           "6\n");
    scanf("%d", &num);
    if (num == 0) {
      break;
    }
    switch (num) {
    case 1:
      candidatoA++;
      break;
    case 2:
      candidatoB++;
      break;
    case 3:
      candidatoC++;
      break;
    case 4:
      candidatoD++;
      break;
    case 5:
      nulo++;
      break;
    case 6:
      branco++;
      break;
    }
    cont++;
  }
  ganhou = Maior(candidatoA, candidatoB, candidatoC, candidatoD);
  printf("candidato %c foi quem ganhou com %d votos", nome, ganhou);

  return 0;
}

int Maior(int a, int b, int c, int d) {
  int temp = 0;
  nome = 'a';
  if (a < b) {
    temp = b;
    b = a;
    a = temp;
    nome = 'b';
  }
  if (a < c) {
    temp = a;
    a = c;
    c = temp;
    nome = 'c';
  }
  if (a < d) {
    temp = a;
    a = d;
    d = temp;
    nome = 'd';
  }
  return a;
}
