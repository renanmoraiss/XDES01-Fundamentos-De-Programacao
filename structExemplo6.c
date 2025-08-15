#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[30];
    int idade;
    char curso[30];
    int periodo;
    int anoDeIngresso;
};

typedef struct aluno tipoAluno; //tipoAluno representa a struct aluno.

void imprimeAluno(tipoAluno aluno[]);

int main() {
    tipoAluno cadAluno[2];
    float media = 0;
    int cursoA = 0, cursoB = 0, alunosPeriodizados = 0, aux;
}