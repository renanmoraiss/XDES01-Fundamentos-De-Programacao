#include <stdio.h>
#include <string.h>

void mensagem();
void leMensagem(char string[]);
void copiaMensagem(char string[], char string2[]);
void exibeMensagem(char string[], char string2[]);

int main() {
    char frase[30];
    char copia[30];
    //
    mensagem();
    //
    leMensagem(frase);
    //
    copiaMensagem(frase, copia);
    //
    exibeMensagem(frase, copia);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char string[]) {
    scanf("%[^\n]", string);
}

void copiaMensagem(char string[], char string2[]) {
    strcpy(string2, string); //(destino, origem)
}

void exibeMensagem(char string[], char string2[]) {
    printf("String original: %s\n", string);
    printf("String copia: %s\n", string2);
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
