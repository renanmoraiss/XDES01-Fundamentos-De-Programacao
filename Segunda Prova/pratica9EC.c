#include <stdio.h>

void preencheDados(float *a, float *p);
void verificaDados(float *a, float *p);

int main() {
    float altura, peso;
    //
    preencheDados(&altura, &peso);
    //
    verificaDados(&altura, &peso);
    //
    return 0;
}

void preencheDados(float *a, float *p) {
    printf("Digite seu peso: ");
    scanf("%f", p);
    //
    printf("Digite sua altura: ");
    scanf("%f", a);
    //
}

void verificaDados(float *a, float *p) {
    if (*p < 60) {
        if (*a < 1.20) {
            printf("A\n");
        } else if ((*a >= 1.20) && (*a <= 1.70)) {
            printf("B\n");
        } else {
            printf("C\n");
        }
    } else if ((*p >= 60) && (*p <= 90)) {
        if (*a < 1.20) {
            printf("D\n");
        } else if ((*a >= 1.20) && (*a <= 1.70)) {
            printf("E\n");
        } else {
            printf("F\n");
        }
    } else {
        if (*a < 1.20) {
            printf("G\n");
        } else if ((*a >= 1.20) && (*a <= 1.70)) {
            printf("H\n");
        } else {
            printf("I\n");
        }
    }
}