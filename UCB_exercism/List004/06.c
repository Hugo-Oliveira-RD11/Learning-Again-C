#include "stdio.h"
void Average(float n1, float n2, float n3, float *media, char op);

int main() {
    float nota1,nota2,nota3, media=0.0;
    char op;
    printf("digite as 3 notas para calcular a media\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);
    printf("escolha as medias de acordo com a letra [Aritmetrica/Ponderada]\n");
    scanf(" %c",&op);
    Average(nota1,nota2,nota3,&media, op);
    printf("media e %.2f",media);

    return 0;
}
void Average(float a, float b, float c, float *m, char op) {
    switch (op) {
    case 'P':
        *m = (a*5 + b*3 + c*2) / 10;
        break;
    case 'A':
        *m = a+b+c/3;
        break;
    default:
        printf("digite uma letra valida");
        break;

    }

}
