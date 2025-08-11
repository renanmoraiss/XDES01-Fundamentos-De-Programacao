#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    double n1, n2, res;
    int opc;
    char conta;
    //
    do {
    printf("\n");
    printf("-----CALCULADORA-----\n");
    //
    printf("TIPOS DE OPERACOES:\n");
    printf("A. +\n");
    printf("B. -\n");
    printf("C. x\n");
    printf("D. :\n");
    printf("Digite a opcao desejada: ");
    scanf(" %c", &conta);
    if (conta != 'A' && conta != 'a' && conta != 'B' && conta != 'b' && conta != 'C' && conta != 'c' && conta != 'D' && conta != 'd') {
        printf("Opcao invalida. Tente novamente.\n");
        continue;
    }
    //
    printf("Digite um valor: ");
    if (scanf ("%lf", &n1) != 1) {
        printf("Valor invalido. Tente novamente.\n");
        continue;
    }
    //
    printf("Digite um valor: ");
    if (scanf("%lf", &n2) != 1) {
        printf("Valor invalido. Tente novamente.\n");
        continue;
    }
    //
    switch(conta) {
        case 'A':
        case 'a':
        res = n1 + n2;
        printf("%0.2lf\n", res);
        break;
        //
        case 'B':
        case 'b':
        res = n1 - n2;
        printf("%0.2lf\n", res);
        break;
        //
        case 'C':
        case 'c':
        res = n1 * n2;
        printf("%0.2lf\n", res);
        break;
        //
        case 'D':
        case 'd':
        if (n2 == 0) {
        printf("Nao e possivel dividir por %lf. Tente novamente.\n", n2);
        continue;
        } else {
            res = n1 / n2;
            printf("%0.2lf\n", res);
        }
        break;
    }
    printf("Deseja continuar?\n");
    printf("1. Sim\n");
    printf("2. Nao\n");
    printf("Opcao desejada: ");
    scanf("%d", &opc);
    if (opc == 2) {
        printf("Programa encerrado.\n");
        return 0;
    }
} while (opc == 1);
return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
