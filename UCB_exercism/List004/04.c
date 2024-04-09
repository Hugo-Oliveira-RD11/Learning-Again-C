#include "stdio.h"

void converter(int sec, int min, int hora) {
  int dia=0;

  while (sec >= 3600) {
      hora= hora + 1;
      sec = sec - 3600;
      if (hora == 24) {
        dia++;
        hora =0;
      }
  }
  while (sec >= 60) {
      min= min +1;
      sec -= 60;
  }
    printf("a conversao certa é de %2d dias e  %02d:%02d:%02d\n",dia,hora,min,sec);
}

int main() {
    int sec,hora=0,min=0;

    printf("digite os segundos para converte-los\n");
    scanf("%d",&sec);

    converter(sec,min,hora);
    return 0;
}
