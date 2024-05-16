#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 100
#define ATUAL 40
#define Str "E tudo o mesmo brinquedo"

typedef struct {
  int Codigo;
  int precoCompra;
  int precoVenda;
  int quantidadeEstoque;
  int estoqueMinimo;
  int Vendas;
  char descricao[LIM];
} Brinquedo;

Brinquedo brinquedos[LIM];

void Create(int *i) {
  while ((*i) < 40) {
    brinquedos[(*i)].Codigo = (rand() % 100);
    brinquedos[(*i)].estoqueMinimo = (rand() % 10) + 1;
    brinquedos[(*i)].quantidadeEstoque = (rand() % 10) + 1;
    brinquedos[(*i)].precoCompra = (rand() % 10) + 1;
    brinquedos[(*i)].precoVenda = (rand() % 100);
    brinquedos[(*i)].Vendas = (rand() % 10);
    strcpy(brinquedos[(*i)].descricao, Str);

    (*i)++;
  }
}

void Cadastro(int *num) {

  if (*num > LIM)
    return;

  printf("digite o Codigo:\n");
  scanf("%d", &brinquedos[*num].Codigo);
  printf("digite o Estoque minimo:\n");
  scanf("%d", &brinquedos[*num].estoqueMinimo);
  printf("digite a quantidade que tem no estoque:\n");
  scanf("%d", &brinquedos[*num].quantidadeEstoque);
  printf("digite o preco da compra:\n");
  brinquedos[*num].precoCompra = (rand() % 1000);
  scanf("%d", &brinquedos[*num].precoCompra);
  printf("digite o preco da venda:\n");
  scanf("%d", &brinquedos[*num].precoVenda);
  printf("digite o numero das vendas:\n");
  scanf("%d", &brinquedos[*num].Vendas);
  printf("digite a descricao:\n");
  scanf(" %s", brinquedos[*num].descricao);
  (*num)++;
}
void AbaixoEstoque(int flag) {
  for (int i = 1; i < flag; i++) {
    if (brinquedos[i].estoqueMinimo > brinquedos[i].quantidadeEstoque)
      printf("Codigo: %d\nEstoque atual: %d\nEstoque minimo permitido: "
             "%d\npreco compra: %d\npreco da venda: %d\nNumero de vendas: "
             "%d\ndescricao: %s\n",
             brinquedos[i].Codigo, brinquedos[i].quantidadeEstoque,
             brinquedos[i].estoqueMinimo, brinquedos[i].precoCompra,
             brinquedos[i].precoVenda, brinquedos[i].Vendas,
             brinquedos[i].descricao);
    printf("\n=======================================\n");
  }
}
int Lucro(int op, int *num) {
  int flag;
  for (int i = 0; i < *num; i++) {
    if (op == brinquedos[i].Codigo)
      flag = i;
  }
  return (brinquedos[flag].precoVenda - brinquedos[flag].precoCompra) *
         brinquedos[flag].Vendas;
}

int main() {
  int num = 0, op = 0, Chose;
  int lucro = 0.0;
  do {
    printf("1- inserir 40 itens aleatoriamente\n2- Cadastrar um item\n3- "
           "calcular um item\n4- Verificar itens do estoque\ndigite qualquer "
           "outro numero para sair do programa\n");
    scanf("%d", &Chose);
    switch (Chose) {
    case 1:
      Create(&num);
      break;
    case 2:
      Cadastro(&num);
      break;
    case 3:
      printf("digite o numero do produto escolhido para saber o lucro\n");
      scanf("%d", &op);
      lucro = Lucro(op, &num);
      printf("o lucro do produto escolhido e de %d\n\n", lucro);
      break;
    case 4:
      AbaixoEstoque(num);
      break;
    default:
      return 0;
    }
  } while (1);

  return 0;
}
