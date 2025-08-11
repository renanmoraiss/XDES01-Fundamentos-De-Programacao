#include <stdio.h>
#include <math.h>

float media(float n1, float n2, float n3, char tipoDeMedia);

int main() {
    float nota1, nota2, nota3, res;
    char letra;
    //
    scanf("%f", &nota1);
    //
    scanf("%f", &nota2);
    //
    scanf("%f", &nota3);
    //
    scanf(" %c", &letra);
    //
    res = media(nota1, nota2, nota3, letra);
    //
    printf("%0.2f\n", res);
    //
    return 0;
}

float media(float n1, float n2, float n3, char tipoDeMedia) {
    float mediaSimples;
    float mediaPonderada;
    if (tipoDeMedia == 'A') {
        mediaSimples = (n1 + n2 + n3) / 3;
        return mediaSimples;
    } else if (tipoDeMedia == 'P') {
        mediaPonderada = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
    } else if (tipoDeMedia != 'A' && tipoDeMedia != 'P') {
        return -1;
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
