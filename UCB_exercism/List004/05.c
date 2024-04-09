#include "stdio.h"

float Percent(float a, float b);

int main() {
    int valueCurrent,valueOld;
    printf("digite o atual e o antigo valor para saber o percentual de aumento");
    scanf("%d %d",&valueCurrent,&valueOld);

    printf("o percentual de aumento e de %.2f%%\n",Percent(valueCurrent,valueOld));
}

float Percent(float a, float b) {
    float perc=0.0;
    perc = ((b - a)/a)*100;
    return perc;

}
