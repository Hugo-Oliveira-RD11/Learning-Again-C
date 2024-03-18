#include "stdio.h"
int main(){
    float base,altura;
    printf("digite a base e a altura do trinagulo\n");
    scanf("%f",base);
    scanf("%f",altura);
    printf("a area deste triangulo e %.2f",((base*altura)/2));
    return 0;
}