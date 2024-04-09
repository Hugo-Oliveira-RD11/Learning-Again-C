#include "stdio.h"
#include "math.h"

float Equation(float a, float op) {
    float even=0;
    for(float i=a; i<op ;i++){
        even = even + ((i*i) +1)/(i+3);
    }
    return even;
}

int main() {
    float num1, op;
    printf("digite um numero para ter a soma da sequencia: \n");
    scanf("%f %f",&num1,&op);


    printf("a soma da equação é de %.2f\n", Equation(num1,op));
    return 0;
}
