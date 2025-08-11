#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[30];
    int idade;
    char curso[30];
    int periodo;
    int anoDeIngresso;
};

typedef struct aluno dadosAluno;

int main() {
    dadosAluno info[3];
    float media;
    int soma = 0;
    int contCursoA = 0;
    int contCursoB = 0;
    int anoAtual = 2025;
    int alunosPeriodizados = 0;
    int periodoCalc;
    //
    for (int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf("%s", info[i].nome);
        //
        printf("Idade: ");
        scanf("%d", &info[i].idade);
        soma += info[i].idade;
        //
        printf("Curso: ");
        scanf("%s", info[i].curso);
        if (strcmp(info[i].curso, "cursoA") == 0) {
            contCursoA++;
        } else if (strcmp(info[i].curso, "cursoB") == 0) {
            contCursoB++;
        }
        //
        printf("Periodo: ");
        scanf("%d", &info[i].periodo);
        //
        printf("Ano de ingresso: ");
        scanf("%d", &info[i].anoDeIngresso);
        periodoCalc = ((anoAtual - info[i].anoDeIngresso) + 1) * 2;
        if (periodoCalc == info[i].periodo) {
            alunosPeriodizados++;
        }
    }
    //
    media = ((float)soma / 3);
    printf("Media de idade dos alunos: %0.f\n", media);
    //
    if (contCursoA > contCursoB) {
        printf("Curso A tem mais alunos\n");
        printf("Curso A tem %d aluno a mais que o Curso B\n", contCursoA - contCursoB);
    } else if (contCursoB > contCursoA) {
        printf("Curso B tem mais alunos\n");
        printf("Curso B tem %d aluno a mais que o Curso A\n", contCursoB - contCursoA);
    } else {
        printf("Curso A e Curso B tem a mesma quantidade de alunos: %d", contCursoA);
    }
    //
    printf("Total de alunos periodizados: %d\n", alunosPeriodizados);
    //
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
