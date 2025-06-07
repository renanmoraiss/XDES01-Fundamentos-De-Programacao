#include <stdio.h>
#include <string.h>

void mensagem();
void leMensagem(char frase[]);
void contarCaracteres(char frase[], int *tam);
void imprimeDeTrasParaFrente(char frase[], int *tam);

int main() {
    char string[30];
    int tamanho;
    //
    mensagem();
    //
    leMensagem(string);
    //
    contarCaracteres(string, &tamanho);
    //
    imprimeDeTrasParaFrente(string, &tamanho);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char frase[]) {
    scanf("%[^\n]", frase);
}

void contarCaracteres(char frase[], int *tam) {
    *tam = 0;
    int i = 0;
    while (frase[i] != '\0') {
        (*tam)++;
        i++;
    }
}

void imprimeDeTrasParaFrente(char frase[], int *tam) {
    for (int i = *tam - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }
}