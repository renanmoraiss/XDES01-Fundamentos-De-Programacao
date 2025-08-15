#include <stdio.h>

/*
Inteiro vetor[10] - {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
var i = 0
Enquanto i < 10 Faça
Inteiro temp = vetor[i]
vetor[i] = vetor[9 - i]
vetor[9 - i] = temp
i = i + 1
Fim enquanto
*/

int main() {
    int vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = 0;
    while (i < 10) {
        int temp = vet[i];
        vet[i] = vet[9 - i];
        vet[9 - i] = temp;
        i += 1;
    }
    return 0;
}