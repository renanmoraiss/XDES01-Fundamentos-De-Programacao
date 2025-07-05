#include <stdio.h>

int main() {
    float vet[10];
    //
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
    }
    //
    for (int i = 0; i < 10; i++) {
        //
        for (int j = 0; j < 10 - 1 - i; j++) {
            if (vet[j] > vet[j+1]) { //ordena do menor para o maior
                float temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    //
    for (int i = 0; i < 10; i++) {
        printf("%0.2f\t", vet[i]);
    }
}