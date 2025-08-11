#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um valor: ");
    scanf("%lf", &num);
    if (num >=0) {
        printf("%0.2lf", sqrt(num));
    }
    else if (num < 0) {
        printf("%0.2lf", pow(num, 2));
    }

    return 0;
}// update for commit
// update for commit
