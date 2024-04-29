#include "stdio.h"
#define LIM 5

int InputDatas(int a[LIM], int b[LIM]) {
    int sum=0;
    for (int i = 0; i < LIM; i++) {
      printf("digite o preco dos dez produtos %d°\nR$", i);
      scanf("%d", &a[i]);

      printf("digite o numero de vendas dos dez produtos %d°\n",i);
      scanf("%d", &b[i]);

      sum += a[i];
    }
    return sum;
}

int main(){
    int Preco[LIM], Vendas[LIM];
    int sum = 0.0;
        int bigger=0;

    sum =InputDatas(Preco,Vendas);

    for (int i = 0; i < LIM; i++) {
        printf("produto %d°\tNumero de vendas: %d\tValor do produto: %d\n",i,Vendas[i],Preco[i]);

        /*select most sale*/
        if (Vendas[bigger]<Vendas[i])
            bigger = i;
    }

        printf("\nValor total das Vendas: %d\tSalario final (545+5%% das vendas): R$%d\n\nO objeto mais vendido foi o item %d com o preco de R$%d ",sum,(545+((sum*5)/100)),bigger,Preco[(int)bigger]);
        printf("%d",(sum*5)/100);
    return 0;
}
