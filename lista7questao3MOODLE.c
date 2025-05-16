#include <stdio.h>

int main() {
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //
    for (int i = 1; i < 10; i++) {
        if (i == 1) {
            vet[i] = i; 
        } else {
            vet[i] = vet[i - 1] + i;
        }
    }
    return 0;
}

/*
vet[1] = 1; (2 -> 1);
vet[2] = 1 + 2 = 3; (vet[i - 1] + i)
vet[3] = 3 + 3 = 6; (vet[i - 1] + i)
vet[4] = 6 + 4 = 10; (vet[i - 1] + i)
vet[5] = 10 + 5 = 15; (vet[i - 1] + i)
vet[6] = 15 + 6 = 21; (vet[i - 1] + i)
vet[7] = 21 + 7 = 28; (vet[i - 1] + i)
vet[8] = 28 + 8 = 36; (vet[i - 1] + i)
vet[9] = 36 + 9 = 45; (vet[i - 1] + i)
*/