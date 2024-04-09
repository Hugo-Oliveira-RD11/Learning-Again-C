#include "stdio.h"

double evenFat(double n) {
  double even = 1,fact=1;
  for (int i = 0; i < n; i++) {
      fact=1;
      for (int j=i; j>1; j--) {
          fact *= j;
      }
      even = even + 1/fact;

  }
    return even;
}
int main() {
    double num1;
    printf("digite um numero:\n");
    scanf("%lf",&num1);

    printf("o resultado é %lf\n", evenFat(num1));
    return 0;
}
