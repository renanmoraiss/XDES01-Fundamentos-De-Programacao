#include <stdio.h>
#include <string.h>

struct Atleta {
    int idade;
};

typedef struct Atleta atleta;

int main() {
    atleta vet[5];
    //
    for (int i = 0; i < 5; i++) {
        //
        scanf("%d", &vet[i].idade);
        //
    }
    //
    for (int i = 0; i < 5; i++) {
        //
        for (int j = 0; j < 5 - 1 - i; j++) {
            if (vet[j].idade < vet[j+1].idade) {
                int temp = vet[j].idade;
                vet[j].idade = vet[j+1].idade;
                vet[j+1].idade = temp;
            }
        }
    }
    //
    for (int i = 0; i < 5; i++) {
        printf("%d\t", vet[i].idade);
    }
    //
    return 0;
}// update for commit
// update for commit
