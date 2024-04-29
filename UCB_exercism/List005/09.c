#include "stdio.h"
#define LIM 5

void Selection_Sort(int a[], int op) {
  int min = 0, temp = 0;
  for (int i = 0; i < op; i++) {
    min = i;
    for (int j = (i + 1); j < op; j++) {
      if (a[min] < a[j])
        min = j;
    }
    temp = a[min];
    a[min] = a[i];
    a[i] = temp;

  }

}

void Input_array(int a[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero para a posicao %d\n", i);
    scanf("%d", &a[i]);
  }
}

int main() {
  int a[LIM], b[LIM], c[LIM * 2]={0};

  Input_array(a);
  Input_array(b);

  Selection_Sort(a,LIM);
  Selection_Sort(b,LIM);

  int cont=0, cont2=0;
  for (int i = 0; i < LIM*2; i++) {
    if (a[cont] < b[cont] || a[cont] == b[cont]) {
      c[i] = a[cont];
      cont++;
    }
    else{
      c[i] = b[cont2];
      cont2++;
    }
  }
  Selection_Sort(c,LIM*2);

  for (int i = 0; i < LIM*2; i++) {
    printf("vetor[%d] = %d\n", i, c[i]);
  }
  return 0;
}
