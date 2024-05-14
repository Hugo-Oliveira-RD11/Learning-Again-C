#include <stdio.h>
#include <string.h>

#define MAX_ITENS 40

// Definição da estrutura para representar um item
struct Item {
  int codigo;
  char descricao[50];
  float preco_compra;
  float preco_venda;
  int quantidade;
  int estoque_minimo;
};

// Função para cadastrar um novo produto
void cadastrarProduto(struct Item produtos[], int *num_produtos) {
  if (*num_produtos < MAX_ITENS) {
    printf("Digite o código do produto: ");
    scanf("%d", &produtos[*num_produtos].codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]", produtos[*num_produtos].descricao);
    printf("Digite o preço de compra do produto: R$ ");
    scanf("%f", &produtos[*num_produtos].preco_compra);
    printf("Digite o preço de venda do produto: R$ ");
    scanf("%f", &produtos[*num_produtos].preco_venda);
    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &produtos[*num_produtos].quantidade);
    printf("Digite o estoque mínimo permitido do produto: ");
    scanf("%d", &produtos[*num_produtos].estoque_minimo);

    (*num_produtos)++;
    printf("Produto cadastrado com sucesso!\n");
  } else {
    printf("O estoque está cheio, não é possível cadastrar mais produtos.\n");
  }
}

// Função para calcular e mostrar o lucro obtido com a venda de um produto e o
// percentual desse lucro
void mostrarLucro(struct Item produtos[], int num_produtos,
                  int codigo_produto) {
  int i;
  for (i = 0; i < num_produtos; i++) {
    if (produtos[i].codigo == codigo_produto) {
      float lucro = produtos[i].preco_venda - produtos[i].preco_compra;
      float percentual_lucro = (lucro / produtos[i].preco_compra) * 100;
      printf("Lucro obtido com a venda do produto %d (%s): R$ %.2f\n",
             produtos[i].codigo, produtos[i].descricao, lucro);
      printf("Percentual de lucro: %.2f%%\n", percentual_lucro);
      return;
    }
  }
  printf("Produto não encontrado.\n");
}

// Função para mostrar os produtos com quantidade em estoque abaixo do estoque
// mínimo permitido
void mostrarProdutosAbaixoDoEstoqueMinimo(struct Item produtos[],
                                          int num_produtos) {
  printf("Produtos com quantidade em estoque abaixo do estoque mínimo:\n");
  for (int i = 0; i < num_produtos; i++) {
    if (produtos[i].quantidade < produtos[i].estoque_minimo) {
      printf("Código: %d, Descrição: %s, Quantidade em estoque: %d\n",
             produtos[i].codigo, produtos[i].descricao, produtos[i].quantidade);
    }
  }
}

int main() {
  struct Item produtos[MAX_ITENS];
  int num_produtos = 0;
  int opcao;

  do {
    printf("\n===== Menu =====\n");
    printf("1. Cadastrar novo produto\n");
    printf("2. Mostrar lucro obtido com a venda de um produto\n");
    printf("3. Mostrar produtos com quantidade em estoque abaixo do estoque "
           "mínimo\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      cadastrarProduto(produtos, &num_produtos);
      break;
    case 2:
      if (num_produtos > 0) {
        int codigo_produto;
        printf("Digite o código do produto: ");
        scanf("%d", &codigo_produto);
        mostrarLucro(produtos, num_produtos, codigo_produto);
      } else {
        printf("Não há produtos cadastrados.\n");
      }
      break;
    case 3:
      if (num_produtos > 0) {
        mostrarProdutosAbaixoDoEstoqueMinimo(produtos, num_produtos);
      } else {
        printf("Não há produtos cadastrados.\n");
      }
      break;
    case 4:
      printf("Saindo do programa...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
    }
  } while (opcao != 4);

  return 0;
}
