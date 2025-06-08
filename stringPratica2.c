#include <stdio.h>

int main() {
    char frase[30];

    printf("Digite uma frase de ate 30 caracteres\n");
    scanf("%[^\n]", frase);
    printf("A frase digitada foi: %s\n", frase);
    return 0;
}

//scanf("%s", frase) -> le ate o primeiro espaço
//scanf("%[^\n]", frase) -> le a linha toda com espaços