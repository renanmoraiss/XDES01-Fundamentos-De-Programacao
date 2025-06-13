#include <stdio.h>
#include <string.h>

void leS1(char stringS1[]);
void escolherOpcaoMenu(int *opc);
void tamanhoS1(char stringS1[], int *tamanho);
void leS2(char stringS2[]);
void concatenarString(char stringS1[], char stringS2[]);
void imprimirS1reversa(char stringS1[], int *tamanho);
void informarCaractere(char *caracterE);
void contarCaractere(char stringS1[], int *tamanho, char *caracterE, int *caracterR);
void leC1(char *c1);
void leC2(char *c2);
void substituirCaractere(char stringS1[], int *tamanho, char *c1, char *c2);
void verificarSubstring(char stringS1[], char stringS2[]);

int main() {
    char s1[20];
    char s2[20];
    int tam, caracterRepete;
    int opcao;
    char C1, C2, caracterEscolhido;
    //
    leS1(s1);
    //
    escolherOpcaoMenu(&opcao);
    while (opcao != 8) {
        switch (opcao) {
        //
        case 1: 
        tamanhoS1(s1, &tam);
        printf("%d\n", tam);
        break;
        //
        case 2:
        leS2(s2);
        concatenarString(s1, s2);
        printf("%s\n", s1);
        break;
        //
        case 3:
        imprimirS1reversa(s1, &tam);
        break;
        //
        case 4:
        informarCaractere(&caracterEscolhido);
        contarCaractere(s1, &tam, &caracterEscolhido, &caracterRepete);
        printf("%d\n", caracterRepete);
        break;
        //
        case 5:
        leC1(&C1);
        leC2(&C2);
        substituirCaractere(s1, &tam, &C1, &C2);
        printf("%s\n", s1);
        break;
        //
        case 6:
        leS2(s2);
        verificarSubstring(s1, s2);
        break;
        //
        case 7:
        leS1(s1);
        break;
        //
        case 8:
        return 0;
        //
        }
        escolherOpcaoMenu(&opcao);
    }
    //
    return 0;
}

void leS1(char stringS1[]) {
    scanf("%[^\n]", stringS1);
    getchar();
}

void escolherOpcaoMenu(int *opc) {
    scanf("%d", opc);
}

void tamanhoS1(char stringS1[], int *tamanho) {
    *tamanho = strlen(stringS1);
}

void leS2(char stringS2[]) {
    getchar();
    scanf("%[^\n]", stringS2);
}

void concatenarString(char stringS1[], char stringS2[]) { 
    strcat(stringS1, stringS2);
}

void imprimirS1reversa(char stringS1[], int *tamanho) {
    for (int i = *tamanho - 1; i >= 0; i--) {
        printf("%c", stringS1[i]);
    } printf("\n");
}

void informarCaractere(char *caracterE) {
    scanf(" %c", caracterE);
}

void contarCaractere(char stringS1[], int *tamanho, char *caracterE, int *caracterR) {
    *caracterR = 0;
    for (int i = 0; i < *tamanho; i++) {
        if (stringS1[i] == *caracterE) {
            (*caracterR)++;
        }
    }
}

void leC1(char *c1) {
    scanf(" %c", c1);
}

void leC2(char *c2) {
    scanf(" %c", c2);
}

void substituirCaractere(char stringS1[], int *tamanho, char *c1, char *c2) {
    int contador = 0;
    for (int i = 0; i < *tamanho && contador != 1; i++) { //uso de FLAG ao inves de BREAK no FOR!
        if (*c1 == stringS1[i]) {
            contador++;
            stringS1[i] = *c2;
        }
    }
}

void verificarSubstring(char stringS1[], char stringS2[]) {
    if (strstr(stringS1, stringS2) != NULL) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}