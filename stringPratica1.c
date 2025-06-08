#include <stdio.h>

void preencheString(char palavra[]);
void preencheCaractere(char *caractereEscolhido);
void testarCaractere(char palavra[], char caractereEscolhido);

int main() {
    char palavra[10];
    char caractere;
    //
    preencheString(palavra);
    //
    preencheCaractere(&caractere);
    //
    testarCaractere(palavra, caractere);
    //
    return 0;
}

void preencheString(char palavra[]) {
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
}

void preencheCaractere(char *caractereEscolhido) {
    printf("Digite um caractere: ");
    scanf(" %c", caractereEscolhido);
}

void testarCaractere(char palavra[], char caractereEscolhido) {
    int contador = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (caractereEscolhido == palavra[i]) {
            contador ++;
        }
    }
    printf("'%c' aparece %d vezes na palavra '%s'", caractereEscolhido, contador, palavra);
}