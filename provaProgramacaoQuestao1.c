//QUESTAO DA PROVA - IDENTIFICAR OS ERROS DO CODIGO ABAIXO

#include <stdio.h>

int main () {
    int i, contador;
    float num, valor;
    //
    printf("Digite um valor: ");
    scanf("%d", valor);
    //
    while (i < 15) {
        printf("Digite um numero: ");
        scanf("%d", num);
        //
        if (num = valor) {
            contador++;
        }
        printf("O numero de repeticoes e %d", contador);
    }

    return 0;
}

/*
1º erro (linha 4) -> int contador ERRADO (int contador = 0)
2º erro (linha 8) -> %d ERRADO (%f)
3º erro (linha 8) -> valor ERRADO (&valor)
4º erro (linha 10) -> while ERRADO (for(i = 1; i < 15; i++))
5º erro (linha 12) -> %d ERRADO (%f)
6º erro (linha 12) -> num ERRADO (&num)
7º erro (linha 14) -> num = valor ERRADO (num == valor)
*/

// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
