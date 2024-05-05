#include "stdio.h"
#define LIM 3
#define LIM2 4
void Soma(int a[LIM][LIM2], int b[LIM]) {
    int sum=0;
    for (int i=0; i<LIM; i++) {
        sum=0;
      for (int j=0; j<LIM2; j++) {
          sum += a[i][j];
        }
      b[i]=sum;
    }
}

void Multiplicacao(int a[LIM][LIM2], int b[LIM]) {
    for (int i=0; i<LIM; i++) {
        for (int j=0; j<LIM2; j++) {
            a[i][j]= a[i][j] * b[i];
        }
    }

}

int main(){
    int matrix[LIM][LIM2], vetor[LIM];

    for (int i=0; i<LIM; i++) {
        for (int j=0; j<LIM2; j++) {
            printf("digite um numero para fica na posisao [%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    Soma(matrix,vetor);
    Multiplicacao(matrix, vetor);

    for (int i=0; i<LIM; i++) {
        for (int j=0; j<LIM2; j++) {
            printf("matrix[%d][%d]=%d\n",i,j,matrix[i][j]);
        }
    }
    return 0;
}
