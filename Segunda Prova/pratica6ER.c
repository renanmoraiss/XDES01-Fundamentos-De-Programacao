#include <stdio.h>

int main () {
    int valor;
    int intervaloUm = 0;
    int intervaloDois = 0;
    int intervaloTres = 0;
    int intervaloQuatro = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    while (valor >= 0) {

        if (valor <= 25) {
            intervaloUm++;
        } else if (valor <= 50) {
            intervaloDois++;
        } else if (valor <= 75) {
            intervaloTres++;
        } else if (valor <= 100) {
            intervaloQuatro++;
        }

        printf("Digite um valor: ");
        scanf("%d", &valor);
    }
    printf("[0,25] = %d\n", intervaloUm);
    printf("[26,50] = %d\n", intervaloDois);
    printf("[51,75] = %d\n", intervaloTres);
    printf("[76,100] = %d\n", intervaloQuatro);

    return 0;
}// update for commit
// update for commit
