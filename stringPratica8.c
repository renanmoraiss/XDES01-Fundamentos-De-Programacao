//VERIFICA APENAS SE PALAVRAS SAO PALINDROMAS, AINDA NAO IGNORA OS ESPACOS!!

#include <stdio.h>

void mensagem();
void leMensagem(char frase[]);
void tamanhoMensagem(char frase[], int *tam);
void copiarMensagem(char frase[], char copia[], int *tam);
void verificarPalindromo(char frase[], char copia[], int *tam);

int main() {
    char string[100];
    char string2[100];
    int tamanho;
    //
    mensagem();
    //
    leMensagem(string);
    //
    tamanhoMensagem(string, &tamanho);
    //
    copiarMensagem(string, string2, &tamanho);
    //
    verificarPalindromo(string, string2, &tamanho);
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
    printf("'%s' possui %d caracteres\n", frase, *tam);
}

void copiarMensagem(char frase[], char copia[], int *tam) {
    int i = 0;
    int j = *tam - 1;
    //
    while (i < *tam) {
        copia[i] = frase[j];
        i++;
        j--;
    }
    copia[*tam] = '\0';
    printf("%s\n", copia);
}

void verificarPalindromo(char frase[], char copia[], int *tam) {
    int cont = 0;
    for (int i = 0; i < *tam; i++) {
        if (frase[i] == copia[i]) {
            cont++;
        }
    } if (cont == *tam) {
        printf("A mensagem '%s' e um palindromo\n", frase);
    } else {
        printf("'%s' nao e um palindromo\n", frase);
    }
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
