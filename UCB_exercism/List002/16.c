#include "stdio.h"

int main() {

  float preco;
  int vendas;
  printf("digite o numero de vendas e o preco do produto\n");
  scanf("%d", &vendas);
  scanf("%f", &preco);

  if (vendas < 500) {
    if (preco < 30) {
      printf(
          "o reajuste feito e de +10%% no valor do produto.\nnovo preco %.2f ",
          (preco + (preco * 10 / 100)));
    }
  } else if (vendas >= 500 && vendas < 1200) {
    if (preco >= 30 && preco < 80)
      printf(
          "o reajuste feito e de +15%% no valor do produto.\nnovo preco %.2f ",
          (preco + (preco * 15 / 100)));
  } else {
    if (preco >= 80) {
      printf("o reajuste feito devera ser de -20%% ao valor do produto.\nnovo "
             "preco: R$%.2f",
             (preco - (preco * 20 / 100)));
    }
  }
  return 0;
}
