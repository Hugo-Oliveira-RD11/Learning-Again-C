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
  int num;

  while (1) {
    if (*Limcontas < LimConta) {
      printf("digite o numero da conta\n");
      scanf("%d", &contas[*Limcontas].NumConta);
      printf("digite o nome do dono da conta\n");
      fgets(contas[*Limcontas].Nome, LIM, stdin);
      printf("digite o saldo da conta\n");
      scanf("%d", &contas[*Limcontas].Saldo);
      *Limcontas++;
    } else {
      printf("ja passou do limite dos funcionarios");
      continue;
    }

    printf("quer continuar inserindo contas ?\n 0 - não quero\n 1 - quero\n");
    scanf("%d", &num);
    if (num == 1)
      continue;
    else
      break;
  }
}
void Visualizar(int *Limcontas) {
  char InputName[100];
  int Chose;

  printf("quer verificar qual tipo de conta\n");
  scanf("%d", &Chose);
  switch (Chose) {
  case 0:
    for (int i = *Limcontas; i > 0; i--) {
      printf("numro da conta: %d\nNome da conta: %s\nSaldo: %d",
             &contas[i].NumConta, &contas[i].Nome, &contas[i].Saldo);
    }
    break;
  case 1:
    fgets(InputName, LIM, stdin);
    for (int i = 0; i < LimConta; i++) {
      if (InputName == contas[i].Nome) {
        printf("numro da conta: %d\nNome da conta: %s\nSaldo: %d",
               &contas[i].NumConta, &contas[i].Nome, &contas[i].Saldo);
      }
    }
    break;
  default:
    return;
  }
}
void ExcluirMenor(int *Limcontas) {
  int min = contas[0].Saldo;
  for (int i = 0; i < *Limcontas; i++) {
    for (int j = i + 1; j < *Limcontas; j++)
      if (contas[min].Saldo > contas[j].Saldo)
        min = j;
  }
  contas[min].NumConta = 0;
  contas[min].Saldo = 0;
  strcpy(contas[min].Nome, "");
  printf("numro da conta: %d\nNome da conta: %s\nSaldo: %d",
         &contas[min].NumConta, &contas[min].Nome, &contas[min].Saldo);
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
      Visualizar(&limContas);
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
