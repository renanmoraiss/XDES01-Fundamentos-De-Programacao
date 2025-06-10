#include <stdio.h>
#include <string.h>

void mensagemS1();
void leS1(char stringS1[]);
void escolherOpcaoMenu(char *opc);
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
    char opcao, C1, C2, caracterEscolhido;
    //
    mensagemS1();
    leS1(s1);
    //
    printf("-----MENU-----\n");
    printf("a) Ler S1\n");
    printf("b) Imprimir o tamanho de S1\n");
    printf("c) Concatenar S1 com S2\n");
    printf("d) Imprimir S1 de forma reversa\n");
    printf("e) Contar a ocorrencia de um dado caractere na S1\n");
    printf("f) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2\n");
    printf("g) Verificar se S2 eh substring de S1\n");
    escolherOpcaoMenu(&opcao);
    while (opcao != 'h') { //coloquei 'h' so pra não bater com nenhum caractere do menu!
        switch (opcao) {
        case 'a':
        leS1(s1);
        break;
        //
        case 'b': 
        tamanhoS1(s1, &tam);
        printf("Tamanho da string S1: %d\n", tam);
        break;
        //
        case 'c':
        leS2(s2);
        concatenarString(s1, s2);
        printf("String concatenada: %s\n", s1);
        break;
        //
        case 'd':
        imprimirS1reversa(s1, &tam);
        break;
        //
        case 'e':
        informarCaractere(&caracterEscolhido);
        contarCaractere(s1, &tam, &caracterEscolhido, &caracterRepete);
        printf("'%c' aparece %d vezes em '%s'\n", caracterEscolhido, caracterRepete, s1);
        break;
        //
        case 'f':
        leC1(&C1);
        leC2(&C2);
        substituirCaractere(s1, &tam, &C1, &C2);
        printf("'%s'\n", s1);
        break;
        //
        case 'g':
        leS2(s2);
        verificarSubstring(s1, s2);
        break;
        //
        default:
        printf("Opcao invalida\n");
        }
        escolherOpcaoMenu(&opcao);
    }
    //
    return 0;
}

void mensagemS1() {
    printf("Digite uma mensagem (S1)\n");
}

void leS1(char stringS1[]) {
    scanf("%[^\n]", stringS1);
    getchar();
}

void escolherOpcaoMenu(char *opc) {
    printf("Escolha uma opcao\n");
    scanf(" %c", opc);
}

void tamanhoS1(char stringS1[], int *tamanho) {
    *tamanho = strlen(stringS1);
}

void leS2(char stringS2[]) {
    getchar();
    printf("Digite outra mensagem (S2)\n");
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
    printf("Informe um caractere para ver a sua ocorrencia na S1\n");
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
    printf("Digite o caractere C1\n");
    scanf(" %c", c1);
}

void leC2(char *c2) {
    printf("Digite o caractere C2\n");
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
        printf("'%s' eh substring de '%s'\n", stringS2, stringS1);
    } else {
        printf("'%s' nao eh substring de '%s'\n", stringS2, stringS1);
    }
}