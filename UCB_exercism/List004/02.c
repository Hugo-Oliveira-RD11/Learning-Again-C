#include "stdio.h"

int soma(int num1,int num2) {
    return num1+num2;
}
int main() {
    int num1,num2;
    printf("digite dois numero:\n");
    scanf("%d %d",&num1,&num2);

    printf("a soma pelas funçoes e %d\n",soma(num1,num2));

    return 0;

}
