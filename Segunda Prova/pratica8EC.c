#include <stdio.h>

void preencheDados(float *v, int *e);
float precoFinal(float *v, int *e);

int main() {
    float valor;
    int estado;
    float valorF;
    //
    preencheDados(&valor, &estado);
    //
    if ((estado < 1) || (estado > 4)) {
        printf("Opcao invalida\n");
    } else {
        valorF = precoFinal(&valor, &estado);
        printf("Valor final: %0.2f\n", valorF);
    }
    //
    return 0;
}

void preencheDados(float *v, int *e) {
    printf("Digite o valor do produto: ");
    scanf("%f", v);
    //
    printf("1. MG\n");
    printf("2. SP\n");
    printf("3. RJ\n");
    printf("4. MS\n");
    printf("Digite a opcao: ");
    scanf("%d", e);
}

float precoFinal(float *v, int *e) {
    float valor;
    switch (*e) {
        case 1:
        valor = (*v * 0.07) + *v;
        break;
        //
        case 2:
        valor = (*v * 0.12) + *v;
        break;
        //
        case 3:
        valor = (*v * 0.15) + *v;
        break;
        //
        case 4:
        valor = (*v * 0.08) + *v;
        break;
    } return valor;
}// update for commit
// update for commit
