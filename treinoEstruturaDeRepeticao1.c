#include <stdio.h>

int main () {
    int valor, valor2;
    //
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor);
    //
    while (valor <= 0) {
        printf("%d e um valor invalido\n", valor);
        printf("Digite um valor positivo: ");
        scanf("%d", &valor);
    }
    //
    printf("Valor impresso: %d\n", valor);
    //
    do {
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &valor2);
    } while (valor2 <= 0);
    //
    return 0;
}

/*
ESTRUTURAS DE REPETIÇÃO (LAÇOS -> LOOPS):
1. for (flexivel e usado quando vc sabe o numero especifico de vezes que o bloco de comandos vai ser executado)
2. while (vai testar uma condicao logica proposta antes de executar o bloco de comandos. true -> executa; false -> nao executa)
3. do... while (executa no minimo uma vez, pq testa a condicao dps de executar o bloco de comandos)
DIFERENCA DE ESTRUTURA DE REPETICAO E ESTRUTURA CONDICIONAL:
-> estrutura condicional é para uma tomada de decisao (será testada a condição apenas uma vez) - execucoes: nenhuma ou 1 vez
-> estrutura de repetição é para repetir um codigo (condição é testada a cada repeticao) - execuções: nenhuma, 1 ou varias vezes
*/