#include <stdio.h>
#include <string.h>

void mensagemS1();
void leS1(char stringS1[]);
void escolherOpcaoMenu(int *opc);
void tamanhoS1(char stringS1[], int *tamanho);
void leS2(char stringS2[]);
void concatenarString(char stringS1[], char stringS2[]);
void imprimirS1reversa(char stringS1[], int *tamanho);
void informarCaractere(char *caracterE);
void contarCaractere(char stringS1[], int *tamanho, char *caracterE, int *caracterR);
void verificarSubstring(char stringS1[], char stringS2[], char *substring);

int main() {
    char s1[20];
    char s2[20];
    int tam;
    int opcao;
    char caracterEscolhido;
    int caracterRepete;
    char subS;
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
    printf("f)\n");
    printf("g) Verificar se S2 eh substring de S1\n");
    escolherOpcaoMenu(&opcao);
    while (opcao > 0) {
        switch (opcao) {
        case 1:
        leS1(s1);
        break;
        //
        case 2: 
        tamanhoS1(s1, &tam);
        printf("Tamanho da string S1: %d\n", tam);
        break;
        //
        case 3:
        leS2(s2);
        concatenarString(s1, s2);
        printf("String concatenada: %s\n", s1);
        break;
        //
        case 4:
        imprimirS1reversa(s1, &tam);
        break;
        //
        case 5:
        informarCaractere(&caracterEscolhido);
        contarCaractere(s1, &tam, &caracterEscolhido, &caracterRepete);
        printf("'%c' aparece %d vezes em '%s'\n", caracterEscolhido, caracterRepete, s1);
        break;
        //
        case 6:
        break;
        //
        case 7:
        leS2(s2);
        verificarSubstring(s1, s2, &subS);
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

void escolherOpcaoMenu(int *opc) {
    printf("Escolha uma opcao\n");
    scanf("%d", opc);
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

void verificarSubstring(char stringS1[], char stringS2[], char *substring) {
    substring = strstr(stringS1, stringS2);
    //
    if (substring != NULL) {
        printf("'%s' eh substring de '%s'\n", stringS2, stringS1);
    } else {
        printf("'%s' nao eh substring de '%s'\n", stringS2, stringS1);
    }
}