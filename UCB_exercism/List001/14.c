#include "stdio.h"
int main(){
    int ano;
    printf("digite seu ano de nascimento: ");
    scanf("%d",ano);

    printf("a sua idade atual e %d\nem 2050 vc tera %d",ano-2024,ano-2025);
    return 0;
}