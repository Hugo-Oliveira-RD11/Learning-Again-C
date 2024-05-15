#include "stdio.h"
#include <string.h>

#define LimConta 15
#define LIM 100

typedef struct {
  int Saldo;
  char Nome[LIM];
  int NumConta;
} Conta;

Conta contas[LimConta];

void Cadastro(int *Limcontas) {
  int num = 0, num1 = 0;

  while (1) {
    if (num <= LimConta) {
      printf("digite o numero da conta\n");
      scanf("%d", &contas[*Limcontas].NumConta);
      printf("digite o nome do dono da conta\n");
      scanf(" %s", contas[*Limcontas].Nome);
      printf("digite o saldo da conta\n");
      scanf("%d", &contas[*Limcontas].Saldo);
      (*Limcontas)++;
    } else {
      printf("ja passou do limite dos funcionarios");
      continue;
    }

    printf("quer continuar inserindo contas ?\n 0 - não quero\n 1 - quero\n");
    scanf("%d", &num1);
    if (num1 == 1)
      continue;
    else {
      break;
    }
  }
}
void Visualizar(int Limcontas) {
  int Chose, search;

  printf("quer verificar qual tipo de conta\n1 - todas as contas\n2 - um tipo "
         "de conta\n");
  scanf("%d", &Chose);
  switch (Chose) {
  case 1:
    for (int i = 0; i < Limcontas; i++) {
      printf("numero da conta: %d\nNome da conta: %s\nSaldo: %d\n",
             contas[i].NumConta, contas[i].Nome, contas[i].Saldo);
    }
    break;
  case 2:
    printf("digite o numero da conta\n");
    scanf(" %d", &search);
    for (int i = 0; i < LimConta; i++) {
      if (search == contas[i].NumConta) {
        printf("numro da conta: %d\nNome da conta: %s\nSaldo: %d\n",
               contas[i].NumConta, contas[i].Nome, contas[i].Saldo);
      }
    }
    break;
  default:
    return;
  }
}
void ExcluirMenor(int *Limcontas) {
  int min = 0;
  for (int i = 1; i < *Limcontas; i++) {
    if (contas[i].Saldo < contas[min].Saldo)
      min = i;
  }

  printf("Conta excluida:\nNumero da conta: %d\nNome da conta: %s\nSaldo: %d\n",
         contas[min].NumConta, contas[min].Nome, contas[min].Saldo);

  // Shift accounts up
  for (int i = min; i < *Limcontas - 1; i++) {
    contas[i] = contas[i + 1];
  }

  (*Limcontas)--;
}

void Bank() {
  int num = 0, limContas = 0;
  do {
    printf("1 - Cadastrar uma conta\n2 - Vizualizar\n3 - Excluir a que tiver "
           "com menor saldo\n");
    scanf("%d", &num);
    switch (num) {
    case 1:
      Cadastro(&limContas);
      break;
    case 2:
      Visualizar(limContas);
      break;
    case 3:
      ExcluirMenor(&limContas);
      break;
    case 4:
      return;
    }
  } while (1);
}
int main() {
  Bank();
  return 0;
}
