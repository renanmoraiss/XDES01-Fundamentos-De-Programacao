#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef struct Data data;

int main() {
    data vet[2];
    //
    for (int i = 0; i < 2; i++) {
        scanf("%d", &vet[i].dia);
        scanf("%d", &vet[i].mes);
        scanf("%d", &vet[i].ano);
    }
    //
    for (int i = 0; i < 2; i++) {
        vet[i].dia += (vet[i].mes * 30) + (vet[i].ano * 360);
    }
    int diferenca = vet[0].dia - vet[1].dia;
    if (diferenca < 0) {
        diferenca *= - 1;
    }
    printf("%d dias no intervalo\n", diferenca);
}