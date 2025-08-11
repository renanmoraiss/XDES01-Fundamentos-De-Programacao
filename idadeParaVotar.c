#include <stdio.h>

int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Nao pode votar");
    }

    if (idade >= 16) {
        if (idade >= 18) {
            printf("Deve votar");
        }
        else {
            printf("Voto facultativo");
        }
    }
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
