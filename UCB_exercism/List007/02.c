#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 15
#define NUM_MESES 3
#define VALOR_PONTO 1000.00

// Estrutura para armazenar os dados de cada funcionário
struct Funcionario {
  char nome[50];
  float vendas[NUM_MESES];
  float pontuacao_total;
};

// Função para cadastrar os nomes dos funcionários e suas vendas mensais
void cadastrarFuncionarios(int num, struct Funcionario funcionarios[]) {
  int i = 0;

  while (1) {

    printf("Digite o nome do %dº funcionário: ", i + 1);
    scanf("%s", funcionarios[i].nome);

    for (int j = 0; j < NUM_MESES; j++) {
      printf("Digite o valor das vendas do funcionário %s no mês %d: R$ ",
             funcionarios[i].nome, j + 1);
      scanf("%f", &funcionarios[i].vendas[j]);
      funcionarios[i].pontuacao_total +=
          funcionarios[i].vendas[j] / VALOR_PONTO;
    }
  }
}

// Função para calcular e mostrar a pontuação geral de cada funcionário nos três
// meses
void mostrarPontuacaoFuncionarios(struct Funcionario funcionarios[]) {
  printf("\nPontuação geral de cada funcionário nos três meses:\n");
  for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
    printf("%s: %.2f pontos\n", funcionarios[i].nome,
           funcionarios[i].pontuacao_total);
  }
}

// Função para calcular e mostrar a pontuação geral de todos os funcionários a
// cada mês
void mostrarPontuacaoPorMes(struct Funcionario funcionarios[]) {
  printf("\nPontuação geral de todos os funcionários a cada mês:\n");
  for (int j = 0; j < NUM_MESES; j++) {
    float pontuacao_mes = 0;
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
      pontuacao_mes += funcionarios[i].vendas[j] / VALOR_PONTO;
    }
    printf("Mês %d: %.2f pontos\n", j + 1, pontuacao_mes);
  }
}

// Função para determinar e mostrar a maior pontuação atingida nos três meses,
// mostrando o nome do funcionário
void mostrarMaiorPontuacao(struct Funcionario funcionarios[]) {
  float maior_pontuacao = funcionarios[0].pontuacao_total;
  char nome_maior_pontuacao[50];

  for (int i = 1; i < NUM_FUNCIONARIOS; i++) {
    if (funcionarios[i].pontuacao_total > maior_pontuacao) {
      maior_pontuacao = funcionarios[i].pontuacao_total;
      strcpy(nome_maior_pontuacao, funcionarios[i].nome);
    }
  }

  printf("\nMaior pontuação atingida nos três meses: %.2f pontos, pelo "
         "funcionário %s\n",
         maior_pontuacao, nome_maior_pontuacao);
}

// Função para determinar e mostrar o valor total vendido
void mostrarValorTotalVendido(struct Funcionario funcionarios[]) {
  float valor_total_vendido = 0;
  for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
    for (int j = 0; j < NUM_MESES; j++) {
      valor_total_vendido += funcionarios[i].vendas[j];
    }
  }
  printf("\nValor total vendido nos três meses: R$ %.2f\n",
         valor_total_vendido);
}

int main() {
  struct Funcionario funcionarios[NUM_FUNCIONARIOS];
  int num;

  // Cadastro dos funcionários
  cadastrarFuncionarios(num, funcionarios);

  // Mostrar pontuação geral de cada funcionário nos três meses
  mostrarPontuacaoFuncionarios(funcionarios);

  // Mostrar pontuação geral de todos os funcionários a cada mês
  mostrarPontuacaoPorMes(funcionarios);

  // Mostrar a maior pontuação atingida nos três meses com o nome do funcionário
  // correspondente
  mostrarMaiorPontuacao(funcionarios);

  // Mostrar o valor total vendido
  mostrarValorTotalVendido(funcionarios);

  return 0;
}
