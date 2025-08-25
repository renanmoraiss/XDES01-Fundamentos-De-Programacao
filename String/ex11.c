#include <stdio.h>

void mensagem();
void leMensagem(char frase[]);
void calcularTamanho(char frase[], int *tamanho);
void inverterMensagem(char frase[], int *tamanho);

int main() {
    char string[30];
    int tam;
    //
    mensagem();
    //
    leMensagem(string);
    //
    calcularTamanho(string, &tam);
    //
    inverterMensagem(string, &tam);
    printf("%s\n", string);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char frase[]) {
    scanf("%[^\n]", frase);
}

void calcularTamanho(char frase[], int *tamanho) {
    *tamanho = 0;
    int i = 0;
    //
    while (frase[i] != '\0') {
        (*tamanho)++;
        i++;
    }
}

void inverterMensagem(char frase[], int *tamanho) {
    char caracter;
    for (int i = *tamanho - 1, j = 0; j < i; i--, j++) {
        caracter = frase[j]; 
        frase[j] = frase[i]; 
        frase[i] = caracter;
    }
}