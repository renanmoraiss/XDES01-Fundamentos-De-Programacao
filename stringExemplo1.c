#include <stdio.h>
#include <string.h>

void preencheFrase();
void leFrase(char frase[]);
void imprimeFrase(char frase[]);

int main() {
    char frase[30];
    //
    preencheFrase();
    //
    leFrase(frase);
    //
    imprimeFrase(frase);
    //
    return 0;
}

void preencheFrase() {
    printf("Digite uma frase de ate 30 caracteres: ");
}

void leFrase(char frase[]) {
    gets(frase);
}

void imprimeFrase(char frase[]) {
    printf("Frase digitada: %s\n", frase);
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
