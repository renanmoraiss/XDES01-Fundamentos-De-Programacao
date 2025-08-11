#include <stdio.h>
#include <math.h>

struct Hora {
    float hora;
    float minuto;
    float segundo;
};

typedef struct Hora dados;

int main() {
    dados vet[5];
    //
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vet[i].hora);
        scanf("%f", &vet[i].minuto);
        scanf("%f", &vet[i].segundo);
    }
    //
    for (int i = 0; i < 5; i++) {
        vet[i].hora += (vet[i].minuto / 60) + (vet[i].segundo / 3600);
    }
    //
    float maiorHora = vet[0].hora;
    for (int i = 0; i < 5; i++) {
        if (vet[i].hora > maiorHora) {
            maiorHora = vet[i].hora;
        }
    }
    //
    printf("Maior hora: %0.2f\n", maiorHora);
}// update for commit
// update for commit
