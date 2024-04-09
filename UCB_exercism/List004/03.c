#include "stdio.h"

int sumOfEven(int a, int b, int c) {
    int soma=0;

    for (int i = b; i <= c; i++) {
      if (i % a == 0)
          soma = soma + i;
    }

    return soma;

}

int main() {
    int a, b, c,all;
    printf("digite 3 numeros\n");
    scanf("%d %d %d",&a,&b,&c);
    all=sumOfEven(a, b, c);

    printf("a soma dos numero nos quais entre %d e %d for divisivel por %d e %d\n",b,c,a,all);

return 0;
}
