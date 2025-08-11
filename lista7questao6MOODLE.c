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

/*
//i = 0 =>
temp = vetor[0] //temp = 0
vetor[i] = vetor[9 - 0] //vetor[9] = 9
vetor[9 - i] = 0

//i = 1 =>
temp = vetor[1] // temp = 1
vetor[i] = vetor[9 - 1]//vetor[8] = 8
vetor[9 - i] = 1

//i = 2 =>
temp = vetor[2] // temp = 2
vetor[i] = vetor[9 - 2]//vetor[7] = 7
vetor[9 - i] = 2

//i = 3 =>
temp = vetor[3] // temp = 3
vetor[i] = vetor[9 - 3]//vetor[6] = 6
vetor[9 - i] = 3

//i = 4 =>
temp = vetor[4] // temp = 4
vetor[i] = vetor[9 - 4]//vetor[5] = 5
vetor[9 - i] = 4

//i = 5 =>
temp = vetor[5] // temp = 5
vetor[i] = vetor[9 - 5]//vetor[4] = 4
vetor[9 - i] = 4

//i = 6 =>
temp = vetor[6] // temp = 6
vetor[i] = vetor[9 - 6]//vetor[3] = 3
vetor[9 - i] = 3

//i = 7 =>
temp = vetor[7] // temp = 7
vetor[i] = vetor[9 - 7]//vetor[2] = 2
vetor[9 - i] = 2

//i = 8 =>
temp = vetor[8] // temp = 8
vetor[i] = vetor[9 - 8]//vetor[1] = 1
vetor[9 - i] = 1

//i = 9 =>
temp = vetor[9] // temp = 9
vetor[i] = vetor[9 - 9]//vetor[0] = 0
vetor[9 - i] = 0
*/// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
