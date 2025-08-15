#include <stdio.h>
#include <string.h>

void mensagem();
void leMensagem(char string[]);
void tamanhoMensagem(char string[], int *tam);

int main() {
    char frase[30];
    int tamanho;
    //
    mensagem();
    //
    leMensagem(frase);
    //
    tamanhoMensagem(frase, &tamanho);
    printf("%d caracteres\n", tamanho);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char string[]) {
    scanf("%[^\n]", string);
}

void tamanhoMensagem(char string[], int *tam) {
    *tam = strlen(string);
}