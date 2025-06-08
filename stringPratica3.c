#include <stdio.h>

void mensagemInicial();
void leMensagem(char mensagem[]);
void imprimeQuatroLetras(char mensagem[]);

int main() {
    char string[15];
    //
    mensagemInicial();
    //
    leMensagem(string);
    //
    imprimeQuatroLetras(string);
    //
    return 0;
}

void mensagemInicial() {
    printf("Digite uma mensagem\n");
}

void leMensagem(char mensagem[]) {
    gets(mensagem);
}

void imprimeQuatroLetras(char mensagem[]) {
    for (int i = 0; i < 4; i++) {
        printf("%c", mensagem[i]);
    }
}