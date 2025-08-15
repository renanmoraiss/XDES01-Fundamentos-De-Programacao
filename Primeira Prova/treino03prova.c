#include <stdio.h>

int main() {
    int idade;
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);
    if (idade >= 5) {
        if ((idade >=5) && (idade <=7)) {
            printf("Infantil A");
        }
        if ((idade >=8) && (idade <=10)) {
            printf("Infantil B");            
        }
        if ((idade >=11) && (idade <=13)) {
            printf("Juvenil A");            
        }
        if ((idade >=14) && (idade <=17)) {
            printf("Juvenil B");            
        }
        if (idade >=18) {
            printf("Sênior");
        }
        
    }
    return 0;
}