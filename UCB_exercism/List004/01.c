#include "stdio.h"

int verificationSignal(int num) {
    int n1;
    if(num>0){
        n1=1;
    }
    else if (num<0) {
        n1=0;
    } else if (num == 0) {
    printf("digite um numero diferente de zero\n");
    scanf("%d",&num);
    verificationSignal(num);
    }
    return n1;
}
int main() {
    int num=0;
    printf("digite um numero no qual tem que ser inteiro\n");
    scanf("%d",&num);
    printf("%d\n",verificationSignal(num));

  return 0;
}
