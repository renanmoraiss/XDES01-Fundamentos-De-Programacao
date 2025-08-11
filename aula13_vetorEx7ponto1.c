#include <stdio.h>

int main() {

int vetorA[5];
int vetorB[5];
int vetorC[5];
//
for (int i = 0; i < 5; i++) {
    printf("Digite o valor %d de A: ", i);
    scanf("%d", &vetorA[i]);
}
printf("\n");
//
for (int i = 0; i < 5; i++) {
    printf("Digite o valor %d de B: ", i);
    scanf("%d", &vetorB[i]);
}
printf("\n");
//
printf("C:");
for (int i = 0; i < 5; i++) {
    vetorC[i] = vetorA[i] - vetorB[i];
    printf("%d\t", vetorC[i]);
}
//
return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
