#include <stdio.h>

float calculoMedia(float n1, float n2, float n3, char escolha); //passagem de parametro por valor (copia)

int main() {
    float nota1, nota2, nota3;
    char tipoDeMedia;
    float media;
    //
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    //
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    //
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);
    //
    scanf(" %c", &tipoDeMedia);
    //
    media = calculoMedia(nota1, nota2, nota3, tipoDeMedia);
    printf("%0.2f\n", media);
    //
    return 0;
}

float calculoMedia(float n1, float n2, float n3, char escolha) {
    float mediaA, mediaP;
    if (escolha == 'A') {
        mediaA = (n1 + n2 + n3) / 3;
        return mediaA;
    } else if (escolha == 'P') {
        mediaP = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        return mediaP;
    } else if (escolha != 'A' && escolha != 'P') {
        return -1;
    }
}// update for commit
// update for commit
