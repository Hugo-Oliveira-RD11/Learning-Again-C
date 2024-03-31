#include "stdio.h"
int Maiorque(int a, int b, int caso) {
  int temp = 0;
  switch (caso) {
  case 1:
    if (a < b) {
      temp = b;
      b = a;
      a = temp;
    }
    break;
  case 2:
    if (a > b) {
      temp = a;
      a = b;
      b = temp;
    }
    break;
  }
  return a;
}

int main() {
  int num, cont = 0, contagem = 0;
  int i, temp = 0, soma = 0, maior = 0, menor = 10000000, contagemPares = 0,
         somaPares = 0, tempMenor = 1000000000;
  float percentoImpares = 0.0, contagemImpares = 0.0, media = 0, mediaPares;

  while (i != num) {
    printf("\ndigite um numero inteiro ou 30000 para sair do programa\n");
    scanf("%d", &i);
    if (i == 30000 || i > 30000) {
      if (cont == 0) {
        printf("saida do programa sem calculo\n");

        break;
      } else {
        percentoImpares = (contagemImpares * 10 / (float)contagem * 10);
        printf(
            "a soma dos numeros e %d\na quantidade de numeros digitados e "
            "%d\na media dos numeros digitados e %.2f\nO maior numero digitado "
            "e "
            "%d\no menor numero digitado e %d\na media dos numero pares e "
            "%.2f\no percentual dos numeros impares entre todos e %.2f%%\n",
            soma, contagem, media, maior, menor, mediaPares, percentoImpares);
        break;
      }
    }
    cont = 1;
    soma += i;
    contagem++;
    media = (float)soma / (float)contagem;

    if (i % 2 == 0) {
      contagemPares++;
      somaPares += i;
      mediaPares = (float)somaPares / (float)contagemPares;

    } else if (i % 2 != 0) {
      contagemImpares++;
    }
    if (maior < Maiorque(i, temp, 1))
      maior = Maiorque(i, temp, 1);
    if (menor > Maiorque(tempMenor, i, 2)) {
      menor = Maiorque(tempMenor, i, 2);
    }
    temp = i;
  }

  return 0;
}
