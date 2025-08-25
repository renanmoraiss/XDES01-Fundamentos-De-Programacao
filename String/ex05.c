#include <stdio.h>
#include <string.h>

void leStringUm(char string[]);
void leStringDois(char string2[]);
void compararTamanho(char string[], char string2[]);

int main() {
    char frase[30];
    char frase2[30];
    //
    leStringUm(frase);
    //
    leStringDois(frase2);
    //
    compararTamanho(frase, frase2);
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

void compararTamanho(char string[], char string2[]) {
    int cmp;
    cmp = strcmp(string, string2);
    printf("%d\n", cmp);

    if (cmp == 0) {
        printf("As strings sao iguais\n");
    } else {
        if (cmp < 0) {
            printf("String 1 menor que a String 2\n");
        } else {
            printf("String 2 menor que a String 1\n");
        }
    }
}

//retorna 0 se as strings forem iguais
//retorna < 0 se a string 1 for menor que a string 2
//retorna > 0 se a string 1 for maior que a string 2