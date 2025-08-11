#include <stdio.h>

int main () {
    int vetorA[5];
    int vetorB[5];
    int vetorC[5];
    //
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d do vetor A: ", i);
        scanf("%d", &vetorA[i]);
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d do vetor B: ", i);
        scanf("%d", &vetorB[i]);
    }
    //
    //
    for (int i = 0; i < 5; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d\t", vetorC[i]);
    }
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
