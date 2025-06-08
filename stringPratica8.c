#include <stdio.h>
#include <string.h>

void mensagem();
void leMensagem(char frase[]);
void tamanhoMensagem(char frase[], int *tam);
void verificarPalindromo(char frase[], int *tam);

int main() {
    char string[30];
    int tamanho;
    //
    mensagem();
    //
    leMensagem(string);
    //
    tamanhoMensagem(string, &tamanho);
    //
    verificarPalindromo(string, &tamanho);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char frase[]) {
    scanf("%[^\n]", frase);
}

void tamanhoMensagem(char frase[], int *tam) {
    *tam = 0;
    int i = 0;
    while (frase[i] != '\0') {
        (*tam)++;
        i++;
    }
    printf("%d caracteres\n", *tam);
}

void verificarPalindromo(char frase[], int *tam) {
    //VER A AULA 17 PARA FAZER ISSO COM FUNÇÃO DA BIBLIOTECA <string.h>
}