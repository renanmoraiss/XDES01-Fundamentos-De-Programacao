#include <stdio.h>
#include <string.h>

struct infoAluno {
    char nome[30];
    int idade;
    char curso[30];
    int periodoAtual;
    int anoDeIngresso;
};

typedef struct infoAluno dadosAluno;

void imprimeDadosAluno(dadosAluno *aluno);

int main() {
    dadosAluno aluno[3];
    int contCursoA = 0;
    int contCursoB = 0;
    int soma = 0;
    float media;
    int periodoCalc;
    int anoAtual = 2025;
    int alunosPeriodizados = 0;
    int maiorIdade = 0;
    char nomeAlunoMaisVelho[30] = "";
    char nomeAlunoMaisTempo[30] = "";
    char cursoAlunoMaisTempo[30] = "";
    int anoDeEntradaNaUnifei = 2026;
    int calcAnosNaUnifei;
    //
    for (int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf("%s", aluno[i].nome);
        //
        printf("Idade: ");
        scanf("%d", &aluno[i].idade);
        soma += aluno[i].idade;
        if (aluno[i].idade > maiorIdade) {
            maiorIdade = aluno[i].idade;
            strcpy(nomeAlunoMaisVelho, aluno[i].nome);
        }
        //
        printf("Curso: ");
        scanf("%s", aluno[i].curso);
        if (strcmp(aluno[i].curso, "cursoA") == 0) {
            contCursoA++;
        } else if (strcmp(aluno[i].curso, "cursoB") == 0) {
            contCursoB++;
        }
        //
        printf("Periodo atual: ");
        scanf("%d", &aluno[i].periodoAtual);
        //
        printf("Ano de ingresso: ");
        scanf("%d", &aluno[i].anoDeIngresso);
        if (aluno[i].anoDeIngresso < anoDeEntradaNaUnifei) {
            anoDeEntradaNaUnifei = aluno[i].anoDeIngresso; 
            strcpy(nomeAlunoMaisTempo, aluno[i].nome);
            strcpy(cursoAlunoMaisTempo, aluno[i].curso);
        }
        //
        periodoCalc = ((anoAtual - aluno[i].anoDeIngresso) + 1) * 2;
        if (periodoCalc == aluno[i].periodoAtual) {
            alunosPeriodizados++;
        }
    }
    //
    printf("-----------------------------\n");
    media = ((float)soma / 3);
    printf("Media das idades: %0.2f\n", media);
    printf("-----------------------------\n");
    //
    if (contCursoA > contCursoB) {
        printf("Curso A tem mais alunos. %d alunos a mais que o Curso B\n", contCursoA - contCursoB);
    } else if(contCursoB > contCursoA) {
        printf("Curso B tem mais alunos. %d alunos a mais que o Curso A\n", contCursoB - contCursoA);
    } else {
        printf("Curso A e Curso B tem a mesma quantidade de alunos: %d\n", contCursoA);
    }
    printf("-----------------------------\n");
    //
    printf("Total de alunos periodizados: %d\n", alunosPeriodizados);
    printf("-----------------------------\n");
    //
    printf("Aluno mais velho:\n");
    printf("Nome: %s\n", nomeAlunoMaisVelho);
    printf("Idade: %d\n", maiorIdade);
    printf("-----------------------------\n");
    //
    printf("Aluno que esta ha mais tempo na unifei:\n");
    calcAnosNaUnifei = (anoAtual - anoDeEntradaNaUnifei) + 1;
    printf("Tempo na unifei (em anos): %d\n", calcAnosNaUnifei);
    printf("Nome: %s\n", nomeAlunoMaisTempo);
    printf("Curso: %s\n", cursoAlunoMaisTempo);
    printf("-----------------------------\n");
    //
    imprimeDadosAluno(aluno);
    //
    return 0;
}

void imprimeDadosAluno(dadosAluno *aluno) {
    for (int i = 0; i < 3; i++) {
        printf("%s %d %s %d %d\n", aluno[i].nome, aluno[i].idade, aluno[i].curso, aluno[i].periodoAtual, aluno[i].anoDeIngresso);
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
