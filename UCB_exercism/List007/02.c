#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 15
#define NUM_MESES 3
#define VALOR_PONTO 1000.00

struct Funcionario {
  char Nome[50];
  float Vendas[NUM_MESES];
  float pontuacao_total;
};

void Cadastro(int num, struct Funcionario Func[]) {
  int i = 0;

  while (1) {

    printf("Digite o Nome do %dº funcionário: ", i + 1);
    scanf("%s", Func[i].Nome);

    for (int j = 0; j < NUM_MESES; j++) {
      printf("Digite o valor das Vendas do funcionário %s no mês %d: R$ ",
             Func[i].Nome, j + 1);
      scanf("%f", &Func[i].Vendas[j]);
      Func[i].pontuacao_total += Func[i].Vendas[j] / VALOR_PONTO;
    }
  }
}

void Pontuacao(struct Funcionario Func[]) {
  printf("\nPontuação geral de cada funcionário nos três meses:\n");
  for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
    printf("%s: %.2f pontos\n", Func[i].Nome, Func[i].pontuacao_total);
  }
}

void MostrarPontos(struct Funcionario Func[]) {
  printf("\nPontuação geral de todos os funcionários a cada mês:\n");
  for (int j = 0; j < NUM_MESES; j++) {
    float pMes = 0;
    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
      pMes += Func[i].Vendas[j] / VALOR_PONTO;
    }
    printf("Mês %d: %.2f pontos\n", j + 1, pMes);
  }
}

void Maior(struct Funcionario Func[]) {
  float maior = Func[0].pontuacao_total;
  char nome[50];

  for (int i = 1; i < NUM_FUNCIONARIOS; i++) {
    if (Func[i].pontuacao_total > maior) {
      maior = Func[i].pontuacao_total;
      strcpy(nome, Func[i].Nome);
    }
  }

  printf("\nMaior pontuação atingida nos três meses: %.2f pontos, pelo "
         "funcionário %s\n",
         maior, nome);
}

void ValorTotal(struct Funcionario Func[]) {
  float venda = 0;
  for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
    for (int j = 0; j < NUM_MESES; j++) {
      venda += Func[i].Vendas[j];
    }
  }
  printf("\nValor total vendido nos três meses: R$ %.2f\n", venda);
}

int main() {
  struct Funcionario funcionarios[NUM_FUNCIONARIOS];
  int num;

  Cadastro(num, funcionarios);

  Pontuacao(funcionarios);

  MostrarPontos(funcionarios);

  Maior(funcionarios);

  ValorTotal(funcionarios);

  return 0;
}
