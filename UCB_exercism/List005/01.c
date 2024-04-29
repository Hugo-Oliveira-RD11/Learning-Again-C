#include "stdio.h"

#define lim 9
#define false 0
#define true 1

int Test_prime(int);

int main() {
    int prime[9];
    for (int i = 0; i < lim; i++) {
        printf("digite um numero para saber se e primo:\n");
        scanf("%d", &prime[i]);
    }

    for (int i = 0; i < lim; i++) {
        int verify=Test_prime(prime[i]);
        switch (verify) {
        case false:
            printf("o numero na posicao prime[%d]=%d nao primo\n",i,prime[i]);
            break;
        case true:
            printf("o numero na posicao prime[%d]=%d e primo\n",i,prime[i]);
            break;
        default:
            printf("deu merda\n");
            break;
        }

    }
    return 0;
}

int Test_prime(int n) {
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0 || n%3==0) return false;
    int i=5;
    while(i%n!=0 || n!=i) i++;

    return true;
}
