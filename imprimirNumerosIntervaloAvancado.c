#include <stdio.h>

int main() {
    while (1) {
        int a, b, i;
        char continuarOuParar;
        printf("Digite um valor inteiro: ");
        scanf("%d", &a);
        printf("Digite outro valor inteiro: ");
        scanf("%d", &b);

        if (a < b - 1) {
            for (i = a + 1; i < b; i += 1) {
                printf("%d\n", i);
            }
        } else if (b < a - 1) {
            for (i = b + 1; i < a; i += 1) {
                printf("%d\n", i);
            }
        } else {
            printf("Nao existem valores inteiros entre %d e %d", a, b);
            continue;
            }
            
        printf("\n");
        printf("\n");   
        
        printf("DESEJA CONTINUAR PARA IMPRIMIR OUTRO INTERVALO?\n");
        printf("A. CONTINUAR\n");
        printf("B. ENCERRAR\n");
        printf("CARACTERE DA ALTERNATIVA ESCOLHIDA: ");
        scanf(" %c", &continuarOuParar);

        if ((continuarOuParar == 'B') || (continuarOuParar == 'b')) {
            printf("Programa encerrado.\n");
            return 0;
        }
        else if ((continuarOuParar == 'A') || (continuarOuParar == 'a')) {
            printf("Prosseguindo.\n");
            continue;
        } else {
            printf("Caractere invalido - programa encerrado.\n");
            return 1;
        }
    }

    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
