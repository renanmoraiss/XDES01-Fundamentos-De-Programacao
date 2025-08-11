#include <stdio.h>
#include <math.h>
#include <string.h>

struct aluno {
    int numeroDeMatricula;
    char nome[50];
    float notas[3];
};

typedef struct aluno aluno;

int main() {
    aluno vet[5];
    float vetor[5];
    //
    for (int i = 0; i < 5; i++) {
        printf("Matricula: ");
        scanf("%d", &vet[i].numeroDeMatricula);
        //
        printf("Nome: ");
        scanf("%s", vet[i].nome);
        //
        for (int j = 0; j < 3; j++) {
        printf("Nota %d: ", j+1);
        scanf("%f", &vet[i].notas[j]);
        }
    }
    float somaNotas;
    float media;
    for (int i = 0; i < 5; i++) {
        media = 0.0;
        somaNotas = 0.0;
        for (int j = 0; j < 3; j++) {
            somaNotas += vet[i].notas[j];
        } media = somaNotas / 3.0;
        vetor[i] = media;
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("%0.2f\t", vetor[i]);
    } printf("\n");
    //
    float maiorMedia = vetor[0];
    int indice = 0;
    for (int i = 0; i < 5; i++) {
        if (vetor[i] > maiorMedia) {
            maiorMedia = vetor[i];
            indice = i;
        }
    }
    //
    printf("ALUNO COM MAIOR MEDIA:\n");
    printf("Nome: %s\n", vet[indice].nome);
    for (int i = 0; i < 3; i++) {
        printf("%0.2f\t", vet[indice].notas[i]);
    }
    //
    return 0;
}// update for commit
// update for commit
