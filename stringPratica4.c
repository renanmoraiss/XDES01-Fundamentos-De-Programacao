#include <stdio.h>
#include <string.h>

void mensagem();
void leMensagem(char mensagem[]);
void contarCaracteres(char mensagem[]);

int main() {
    char frase[30];
    //
    mensagem();
    //
    leMensagem(frase);
    //
    contarCaracteres(frase);
    //
    return 0;
}

void mensagem() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char mensagem[]) {
    scanf("%[^\n]", mensagem);
}

void contarCaracteres(char mensagem[]) {
    int contador = 0;
    int i = 0;
    //
    while (mensagem[i] != '\0') {
        contador++;
        i++;
    }
    printf("'%s' possui %d caracteres", mensagem, contador);
}