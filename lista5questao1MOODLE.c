#include <stdio.h>

float notasAluno (float n1, float n2, float n3, char letra) {
    if (letra == 'A') {
    return (n1 + n2 + n3) / 3;
    }
    else if (letra == 'P') {
        return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
    }
    else {
        return -1;
    }
}

int main () {
    float num1, num2, num3, media;
    char calculo;
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf(" %c", &calculo);
    media = notasAluno(num1, num2, num3, calculo);
    printf("%0.2f\n", media);
    return 0;
}