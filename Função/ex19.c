#include <stdio.h>

void lerNotas(float *n1, float *n2);
void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada);

int main() {
    float nota1, nota2, mediaS, mediaP;
    //
    lerNotas(&nota1, &nota2);
    //
    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)) {
        calcularMedias(nota1, nota2, &mediaS, &mediaP);
        printf("n1: %0.2f\n", nota1);
        printf("n2: %0.2f\n", nota2);
        printf("Media Simples: %0.2f\n", mediaS);
        printf("Media Ponderada: %0.2f\n", mediaP);
    } else {
        printf("Notas invalidas");
    }
    return 0;
}

void lerNotas(float *n1, float *n2) {
    scanf("%f", n1);
    scanf("%f", n2);
}

void calcularMedias(float n1, float n2, float *mediaSimples, float *mediaPonderada) {
    *mediaSimples = (n1 + n2) / 2;
    *mediaPonderada = (n1 + (n2 * 2)) / 3;
}