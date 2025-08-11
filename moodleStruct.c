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
void relatorio(Aluno alunos[], int totalAlunos, float mat[][6]); //função 5

int main() {
    Aluno alunos[100];
    int totalAlunos;
    float dadosAlunos[100][6];
    //
    //MAIN CONSTRUÍDA COM BASE NAS FUNÇÕES FORNECIDAS (RESPEITANDO A ASSINATURA) E O FLUXO DADO!
    totalAlunos = cadastrarAlunos(alunos); // 1. Cadastrar Alunos
    //
    // CALCULAR A MEDIA FINAL DE CADA ALUNO E ARMAZENAR ESSE VALOR NA STRUCT
    for (int i = 0; i < totalAlunos; i++) {
        alunos[i].media = calcularMedia(alunos[i]); 
    }
    //
    carregaMatriz(alunos, totalAlunos, dadosAlunos); //2. Carregar Matriz
    encontrarMelhorAluno(alunos, totalAlunos); //3. Encontrar Melhor Aluno
    //
    //
    relatorio(alunos, totalAlunos, dadosAlunos); //4. Relatório
    //
    return 0;
}

int cadastrarAlunos(Aluno alunos[]) {
    int alunosCadastrados;
    //
    scanf("%d", &alunosCadastrados);
    getchar();
    //
    for (int i = 0; i < alunosCadastrados; i++) {
        scanf("%[^\n]", alunos[i].nome);
        getchar();
        //
        for (int j = 0; j < 4; j++) {
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
    printf("Nome: %s -- Media: %.2f\n", nome, melhorMedia);
    printf("\n");
}

void carregaMatriz(Aluno alunos[], int totalAlunos, float mat[][6]) {
    //
    int linhas;
    linhas = totalAlunos;
    //
    //PREENCHER O ID DO ALUNO
    for (int i = 0; i < linhas; i++) {
        //
            mat[i][0] = i; //PREENCHE ID's
            //
            for (int j = 0; j < 4; j++) {
                mat[i][j + 1] = alunos[i].notas[j]; //PREENCHE NOTAS
            }
            //
            mat[i][5] = alunos[i].media; //PREENCHE MÉDIAS
    }
}

void relatorio(Aluno alunos[], int totalAlunos, float mat[][6]) {
    //

    //VARIÁVEIS ENVOLVENDO A NOTA 1
    char nomeMaiorNota1[50];
    char nomeMenorNota1[50];
    strcpy(nomeMaiorNota1, alunos[0].nome);
    strcpy(nomeMenorNota1, alunos[0].nome);
    float maiorNota1 = mat[0][1];
    float menorNota1 = mat[0][1];
    float somaNota1 = 0.0;
    float mediaNota1;
    //

    //VARIÁVEIS ENVOLVENDO A NOTA 2
    char nomeMaiorNota2[50];
    char nomeMenorNota2[50];
    strcpy(nomeMaiorNota2, alunos[0].nome);
    strcpy(nomeMenorNota2, alunos[0].nome);
    float maiorNota2 = mat[0][2];
    float menorNota2 = mat[0][2];
    float somaNota2 = 0.0;
    float mediaNota2;
    //

    //VARIÁVEIS ENVOLVENDO A NOTA 3
    char nomeMaiorNota3[50];
    char nomeMenorNota3[50];
    strcpy(nomeMaiorNota3, alunos[0].nome);
    strcpy(nomeMenorNota3, alunos[0].nome);
    float maiorNota3 = mat[0][3];
    float menorNota3 = mat[0][3];
    float somaNota3 = 0.0;
    float mediaNota3;

    //VARIÁVEIS ENVOLVENDO A NOTA 4
    char nomeMaiorNota4[50];
    char nomeMenorNota4[50];
    strcpy(nomeMaiorNota4, alunos[0].nome);
    strcpy(nomeMenorNota4, alunos[0].nome);
    float maiorNota4 = mat[0][4];
    float menorNota4 = mat[0][4];
    float somaNota4 = 0.0;
    float mediaNota4;

    for (int i = 0; i < totalAlunos; i++) {
        somaNota1 += mat[i][1];
        somaNota2 += mat[i][2];
        somaNota3 += mat[i][3];
        somaNota4 += mat[i][4];
            //
            if (mat[i][1] > maiorNota1) {
                maiorNota1 = mat[i][1];
                strcpy(nomeMaiorNota1, alunos[i].nome);
            }
            if (mat[i][1] < menorNota1) {
                menorNota1 = mat[i][1];
                strcpy(nomeMenorNota1, alunos[i].nome);
            }
            if (mat[i][2] > maiorNota2) {
                maiorNota2 = mat[i][2];
                strcpy(nomeMaiorNota2, alunos[i].nome);
            }
            if (mat[i][2] < menorNota2) {
                menorNota2 = mat[i][2];
                strcpy(nomeMenorNota2, alunos[i].nome);
            }
            if (mat[i][3] > maiorNota3) {
                maiorNota3 = mat[i][3];
                strcpy(nomeMaiorNota3, alunos[i].nome);
            }
            if (mat[i][3] < menorNota3) {
                menorNota3 = mat[i][3];
                strcpy(nomeMenorNota3, alunos[i].nome);
            }
            if (mat[i][4] > maiorNota4) {
                maiorNota4 = mat[i][4];
                strcpy(nomeMaiorNota4, alunos[i].nome);
            }
            if (mat[i][4] < menorNota4) {
                menorNota4 = mat[i][4];
                strcpy(nomeMenorNota4, alunos[i].nome);
        }
    }
    //
    mediaNota1 = (somaNota1 / totalAlunos);
    mediaNota2 = (somaNota2 / totalAlunos);
    mediaNota3 = (somaNota3 / totalAlunos);
    mediaNota4 = (somaNota4 / totalAlunos);
    //
    printf("\t\tResultados Nota 1:\n");
    printf("Media: %.2f\n", mediaNota1);
    printf("Aluno com maior Nota: %s\n", nomeMaiorNota1);
    printf("Aluno com menor Nota: %s\n", nomeMenorNota1);
    printf("\n-----------------------------------------\n");
    //
    printf("\t\tResultados Nota 2:\n");
    printf("Media: %.2f\n", mediaNota2);
    printf("Aluno com maior Nota: %s\n", nomeMaiorNota2);
    printf("Aluno com menor Nota: %s\n", nomeMenorNota2);
    printf("\n-----------------------------------------\n");
    //
    printf("\t\tResultados Nota 3:\n");
    printf("Media: %.2f\n", mediaNota3);
    printf("Aluno com maior Nota: %s\n", nomeMaiorNota3);
    printf("Aluno com menor Nota: %s\n", nomeMenorNota3);
    printf("\n-----------------------------------------\n");
    //
    printf("\t\tResultados Nota 4:\n");
    printf("Media: %.2f\n", mediaNota4);
    printf("Aluno com maior Nota: %s\n", nomeMaiorNota4);
    printf("Aluno com menor Nota: %s\n", nomeMenorNota4);
    printf("\n-----------------------------------------\n");
    //
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
