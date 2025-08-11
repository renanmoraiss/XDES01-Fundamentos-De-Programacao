/* #include <stdio.h>

float calcularMedia(int n1, int n2, float media); -> PROTÓTIPO DA FUNÇÃO

int main() {
    int nmr1, nmr2;
    float res;
    //
    printf("Digite um valor: ");
    scanf("%d", &nmr1);
    //
    printf("Digite outro valor: ");
    scanf("%d", &nmr2);
    //
    res = calcularMedia(nmr1, nmr2, res);
    //
    printf("Media: %0.2f\n", res);
    //
    return 0;
}

float calcularMedia(int n1, int n2, float media) {
    media = (((float)n1 + (float)n2)) / 2;
    return media;
} */
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

float calcularMedia(int n1, int n2) {
    float media;
    media = (((float)n1 + (float)n2)) / 2;
    return media;
}

int main() {
    int valor1, valor2;
    float res;
    //
    printf("Digite um valor: ");
    scanf("%d", &valor1);
    //
    printf("Digite outro valor: ");
    scanf("%d", &valor2);
    //
    res = calcularMedia(valor1, valor2);
    //
    printf("Media: %0.2f\n", res);
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
