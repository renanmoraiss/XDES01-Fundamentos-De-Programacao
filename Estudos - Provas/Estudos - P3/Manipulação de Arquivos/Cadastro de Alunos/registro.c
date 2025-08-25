//LER UM ARQUIVO E IMPRIMIR OS DADOS NA TELA E DEPOIS CRIAR OUTRO ARQUIVO COM OS MESMOS DADOS.

#include <stdio.h>
#include <string.h>
#include <math.h>

struct Alunos { //struct contentdo os atributos de cada aluno da classe.
    char nomeDoAluno[15];
    int idade;
    char curso[8];
    int periodo;
    int anoDeIngresso;
};

typedef struct Alunos dados; //definindo o nome da struct para reuso facilitado.

int leituraDados(dados aluno[], char nomeArquivo[]); //função para abrir e ler os dados do arquivo.
void imprimeRegistros(dados aluno[], int tamanho); //função para imprimir os dados dos alunos.
dados * encontrarAlunoMaisVelho(dados aluno[], int tamanho); //nome ja diz por si mesmo.
dados * encontrarAlunoMaisNovo(dados aluno[], int tamanho); //nome ja diz por si mesmo.
void cursoMaisRecorrente(dados aluno[], int tamanho); //cursoA ou cursoB, qual aparece mais.
void criarOutroArquivo(dados aluno[], int tamanho, char nomeArq[]); //criando outro arquivo, type "w".

int main() {
    dados vet[50]; //pode conter até 50 alunos.
    char nomeDoArquivo[12];
    char nomeArqSaida[12] = "cadAtt.txt";
    int totalAlunos;
    dados *indiceVelho;
    dados *indiceNovo;
    //
    printf("Nome do arquivo que deseja manipular: ");
    scanf("%s", nomeDoArquivo);
    //
    totalAlunos = leituraDados(vet, nomeDoArquivo);
    printf("A classe tem %d alunos.\n", totalAlunos);
    //
    imprimeRegistros(vet, totalAlunos);
    //
    indiceVelho = encontrarAlunoMaisVelho(vet, totalAlunos);
    printf("\nDados do Aluno Mais Velho:\n");
    printf("%s\t%s\t%d\t%d\t%d\n", indiceVelho->nomeDoAluno, indiceVelho->curso, indiceVelho->idade, indiceVelho->periodo, indiceVelho->anoDeIngresso);
    //
    indiceNovo = encontrarAlunoMaisNovo(vet, totalAlunos);
    printf("Dados do Aluno Mais Novo:\n");
    printf("%s\t%s\t%d\t%d\t%d\n", indiceNovo->nomeDoAluno, indiceNovo->curso, indiceNovo->idade, indiceNovo->periodo, indiceNovo->anoDeIngresso);
    //
    cursoMaisRecorrente(vet, totalAlunos);
    //
    criarOutroArquivo(vet, totalAlunos, nomeArqSaida);
    //
    return 0;
}

int leituraDados(dados aluno[], char nomeArquivo[]) {
    FILE *arqEntrada;
    //
    arqEntrada = fopen(nomeArquivo, "r"); //type r = le um arquivo existente.
    if (arqEntrada == NULL) { //caso a leitura do arquivo de erro.
        return 1;
    }
    //caso a leitura do arquivo de certo:
    int i = 0;
    while (!feof(arqEntrada)) { //enquanto o arquivo não chegar ao fim...
        fscanf(arqEntrada, "%[^,],%d,%[^,],%d,%d", aluno[i].nomeDoAluno, &aluno[i].idade, aluno[i].curso, &aluno[i].periodo, &aluno[i].anoDeIngresso); // não coloquei & nas que são string, porque vetor de char não recebe & na leitura.
        i++; //atualiza o indice do vetor a cada leitura.
    }
    fclose (arqEntrada); //fecha o arquivo após a leitura.
    return i; //retorna o total de alunos da classe (total de registros do arquivo).
}

void imprimeRegistros(dados aluno[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%s\t%d\t%s\t%d\t%d\n", aluno[i].nomeDoAluno, aluno[i].idade, aluno[i].curso, aluno[i].periodo, aluno[i].anoDeIngresso);
    }
}

dados * encontrarAlunoMaisVelho(dados aluno[], int tamanho) {
    int maiorIdade = aluno[0].idade;
    int indice = 0;
    //
    for (int i = 0; i < tamanho; i++) {
        if (aluno[i].idade > maiorIdade) {
            indice = i;
            maiorIdade = aluno[i].idade;
        }
    }
    //
    return &aluno[indice];
}

dados * encontrarAlunoMaisNovo(dados aluno[], int tamanho) {
    int menorIdade = aluno[0].idade;
    int indice = 0;
    //
    for (int i = 0; i < tamanho; i++) {
        if (aluno[i].idade < menorIdade) {
            indice = i;
            menorIdade = aluno[i].idade;
        }
    } 
    return &aluno[indice];
    //
}

void cursoMaisRecorrente(dados aluno[], int tamanho) {
    int contadorCursoA = 0;
    int contadorCursoB = 0;
    //
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(aluno[i].curso, "cursoA") == 0) { //retorna 0 se as strings forem iguais.
            contadorCursoA++;
        } else {
            contadorCursoB++;
        }
    }
    //
    int contA;
    if (contadorCursoA > contadorCursoB) {
        contA = contadorCursoA - contadorCursoB;
        printf("Curso A tem %d alunos a mais que o Curso B.\n", contA);
    } else {
        int contB = contadorCursoB - contadorCursoA;
        printf("Curso B tem %d alunos a mais que o Curso A.\n", contB);
    }
}

void criarOutroArquivo(dados aluno[], int tamanho, char nomeArq[]) {
    FILE *arqSaida;
    //
    arqSaida = fopen(nomeArq, "w");
    if (arqSaida == NULL) {
        return;
    }
    for (int i = 0; i < tamanho; i++) {
        fprintf(arqSaida, "%s\t%d\t%s\t%d\t%d\n", aluno[i].nomeDoAluno, aluno[i].idade, aluno[i].curso, aluno[i].periodo, aluno[i].anoDeIngresso);
    }
    fclose(arqSaida);
}