#include "stdio.h"
float IdealWeigth(char op, float a) {
    float peso=0.0;
    switch (op) {
        case 'H':
            peso = (72.7 * a) - 58;
            break;
        case 'M':
            peso= (62.1 * a) - 44.7;
            break;

    }
    return peso;

}

int main() {
    char op;
    float altura;
    printf("digite o sexo [Mulher/Homem]\naltura\n");
    scanf(" %s",&op);
    scanf("%f",&altura);

    printf("o peso ideal é %.2f\n",IdealWeigth(op,altura));
    return 0;
}
