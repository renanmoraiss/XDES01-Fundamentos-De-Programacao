#include <stdio.h>
#include <math.h>
#include <string.h>

struct cadastro {
    char nome[50];
    float notas[4];
    float media;
};

typedef struct cadastro Aluno;

int cadastrarAlunos(Aluno alunos[]); //função 1
float calcularMedia(Aluno aluno); //função 2
void encontrarMelhorAluno(Aluno alunos[], int n); //função 3
void carregaMatriz(Aluno alunos[], int totalAlunos, float mat[][6]); //função 4

int main() {
    Aluno alunos[100];
    int totalAlunos;
    float dadosAlunos[100][6];
    //
    totalAlunos = cadastrarAlunos(alunos);
    //
    // CALCULAR A MEDIA FINAL DE CADA ALUNO E ARMAZENAR ESSE VALOR NA STRUCT
    for (int i = 0; i < totalAlunos; i++) {
        alunos[i].media = calcularMedia(alunos[i]);
    }
    //
    encontrarMelhorAluno(alunos, totalAlunos);
    //
    carregaMatriz(alunos, totalAlunos, dadosAlunos);
    //
    return 0;
}

int cadastrarAlunos(Aluno alunos[]) {
    int alunosCadastrados;
    //
    printf("Quantos alunos serao cadastrados: ");
    scanf("%d", &alunosCadastrados);
    getchar();
    //
    for (int i = 0; i < alunosCadastrados; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        //
        for (int j = 0; j < 4; j++) {
            printf("Digite a nota %d: ", j);
            scanf("%f", &alunos[i].notas[j]);
        } getchar();
    } 
    //
    return alunosCadastrados;
}

float calcularMedia(Aluno aluno) {
    float soma = 0.0;
    float media;
    //
    for (int i = 0; i < 4; i++) {
        soma += aluno.notas[i];
    }
    media = (soma / 4);
    return media;
}

void encontrarMelhorAluno(Aluno alunos[], int n) {
    float melhorMedia = alunos[0].media;
    char nome[50];
    strcpy(nome, alunos[0].nome);
    //
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            if (alunos[i].media > melhorMedia) {
                melhorMedia = alunos[i].media;
                strcpy(nome, alunos[i].nome);
            }
        }
    }
    printf("Nome: %s -- Media: %0.2f\n", nome, melhorMedia);
}

void carregaMatriz(Aluno alunos[], int totalAlunos, float mat[][6]) {
    //
    int linhas;
    linhas = totalAlunos;
    //
    //PREENCHER O ID DO ALUNO
    for (int i = 0; i < linhas; i++) {
        //
        for (int j = 0; j < 6; j++) {
            mat[i][0] = i; //PREENCHE ID's
            //
            mat[i][j+1] = alunos[i].notas[j]; //PREENCHE NOTAS
            //
            mat[i][5] = alunos[i].media; //PREENCHE MÉDIAS
        }
    }
}