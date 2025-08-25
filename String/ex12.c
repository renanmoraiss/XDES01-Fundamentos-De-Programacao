#include <stdio.h>

void mensagem();
void leMensagem(char frase[]);
void escolheCaracter(char *caracterEscolhido);
void tamanhoDaMensagem(char frase[], int *tam);
void contarVogaisEsubstituir(char frase[], char *caracterEscolhido, int *tam, int *totalVogais);
int main() {
    char string[30];
    int tamanho;
    int totalVogais;
    char caracter;
    //
    mensagem();
    //
    leMensagem(string);
    //
    escolheCaracter(&caracter);
    //
    tamanhoDaMensagem(string, &tamanho);
    //
    contarVogaisEsubstituir(string, &caracter, &tamanho, &totalVogais);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char frase[]) {
    scanf("%[^\n]", frase);
}

void escolheCaracter(char *caracter) {
    printf("Digite um caracter\n");
    scanf(" %c", caracter);
}

void tamanhoDaMensagem(char frase[], int *tam) {
    *tam = 0;
    int i = 0;
    while (frase[i] != '\0') {
        (*tam)++;
        i++;
    }
}

void contarVogaisEsubstituir(char frase[], char *caracterEscolhido, int *tam, int *totalVogais) {
    *totalVogais = 0;
    for (int i = 0; i < *tam; i++) {
        if (frase[i] == 'a') {
            frase[i] = *caracterEscolhido;
            (*totalVogais)++;
        } else if (frase[i] == 'e') {
            frase[i] = *caracterEscolhido;
            (*totalVogais)++;
        } else if (frase[i] == 'i') {
            frase[i] = *caracterEscolhido;
            (*totalVogais)++;
        } else if (frase[i] == 'o') {
            frase[i] = *caracterEscolhido;
            (*totalVogais)++;
        } else if (frase[i] == 'u') {
            frase[i] = *caracterEscolhido;
            (*totalVogais)++;
        }
    }
    printf("%s\n", frase);
    printf("Total de vogais: %d\n", *totalVogais);
}