#include <stdio.h>

int main() {
    float altura, peso;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if((altura < 1.20) && (peso < 60)) {
    printf("Voce pertence ao grupo A");
    }if((altura < 1.20) && (peso >= 60) && (peso <= 90)) {
    printf("Voce pertence ao grupo D");
    }
    if((altura < 1.20) && (peso > 90)) {
    printf("Voce pertence ao grupo G");
    }
    if((altura > 1.20) && (altura < 1.70) && (peso < 60)) {
    printf("Voce pertence ao grupo B");
    }
    if((altura >= 1.20) && (altura <= 1.70) && (peso >= 60) && (peso <= 90)) {
    printf("Voce pertence ao grupo E");
    }
    if((altura > 1.20) && (altura < 1.70) && (peso > 60)) {
    printf("Voce pertence ao grupo H");
    }
    if((altura > 1.70) && (peso < 60)) {
    printf("Voce pertence ao grupo C");
    }
    if((altura > 1.70) && (peso >= 60) && (peso <= 90)) {
    printf("Voce pertence ao grupo F");
    }
    if((altura > 1.70) && (peso > 60)) {
    printf("Voce pertence ao grupo I");
    }
    return 0;
}// upadte for commit
// update for commit
// update for commit
// update for commit
// update for commit
// update for commit
