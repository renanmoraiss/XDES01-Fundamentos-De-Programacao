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