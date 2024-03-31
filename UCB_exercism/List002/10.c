#include "stdio.h"

int main() {
  int ano, mes, dia, ano2, mes2, dia2;
  printf("digite uma data na seguinte ordem Dia/Mes/Ano:\n");
  scanf("%d", &dia);
  scanf("%d", &mes);
  scanf("%d", &ano);

  printf("digite uma nova data diferente da anterior na seguinte ordem "
         "Dia/Mes/Ano:\n");
  scanf("%d", &dia2);
  scanf("%d", &mes2);
  scanf("%d", &ano2);

  if (ano > ano2) {
    printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia, mes, ano);

  } else if (ano < ano2) {
    printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia2, mes2, ano2,
           dia, mes, ano);
  } else {
    if (mes > mes2) {
      printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia, mes, ano,
             dia2, mes2, ano2);
    } else if (mes < mes2) {
      printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia2, mes2, ano2,
             dia, mes, ano);

    } else {
      if (dia > dia2) {
        printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia, mes, ano,
               dia2, mes2, ano2);
      } else if (dia < dia2) {
        printf("a data %d/%d/%d e mais nova\n a data %d/%d/%d", dia2, mes2,
               ano2, dia, mes, ano);
      }
    }
  }
}
