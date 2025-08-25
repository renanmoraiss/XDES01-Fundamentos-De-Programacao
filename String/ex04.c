#include <stdio.h>
#include <string.h>

void leStringUm(char string[]);
void leStringDois(char string2[]);
void concatenaString(char string[], char string2[]);
void exibeStringConcatenada(char string[]);

int main() {
    char frase[30];
    char frase2[30];
    //
    leStringUm(frase);
    //
    leStringDois(frase2);
    //
    concatenaString(frase, frase2);
    //
    exibeStringConcatenada(frase);
    //
    return 0;
}

void leStringUm(char string[]) {
    printf("Digite uma mensagem\n");
    scanf("%[^\n]", string);
    getchar();
}

void leStringDois(char string2[]) {
    printf("Digite outra mensagem\n");
    scanf("%[^\n]", string2);
    getchar();
}

void concatenaString(char string[], char string2[]) {
    strcat(string, string2);
}

void exibeStringConcatenada(char string[]) {
    printf("String concatenada: %s\n", string);
}