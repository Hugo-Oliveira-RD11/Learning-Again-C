#include <stdio.h>

double Factorial(double a) {
  double even = 1;

  for (double i=a; i>0; i--) {
      even *= i;
  }
    return even;

}


void Vectomania(double vetor[],double vetorb[], double tam) {
    for (int i=0; i!=tam; i++)
        scanf("%lf",&vetor[i]);
    for (int i =0; i<tam; i++) {
        vetorb[i] = Factorial(vetor[i]);
    }

}

int main() {
    int a=10;
    double vetor[a],vetorb[a];
    Vectomania(vetor, vetorb, a);
    for (int i=0; i<a; i++) {
        printf("vetor[%d] = %lf | vetorb[%d] = %lf\n",i,vetor[i],i,vetorb[i]);
    }

    return 0;
}
