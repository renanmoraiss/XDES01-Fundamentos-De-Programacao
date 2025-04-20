#include <stdio.h>

int main() {

    while(1) {
    float peso; 
    float somaDosPesos = 0.0;
    float mediaDosPesos = 0.0;
    int pesoAcimaDe80kg = 0;
    float porcentagemJogadoresPesoAcima80kg;
    float altura;
    float somaDasAlturas = 0.0;
    float mediaDasAlturas = 0.0;
    int idade;
    int somaDasIdades = 0;
    float mediaDasIdades = 0.0;
    int nmrDeRepeticoesInfo;
    int idadeInferiorA18 = 0;
    char continuarOuParar;
    int limite;

    printf("-----------------------------\n");
    printf("ALGORITMO PARA CALCULAR ESTATISTICAS\n");
    printf("-----------------------------\n");
    printf("\n");
    printf("QUANTOS JOGADORES ESTAO NO TIME: ");
    scanf("%d", &limite);

    for (nmrDeRepeticoesInfo = 1; nmrDeRepeticoesInfo <= limite; nmrDeRepeticoesInfo += 1) {
    printf("INFORMACOES DO JOGADOR NUMERO %d\n", nmrDeRepeticoesInfo);
    printf("IDADE: ");
    scanf("%d", &idade);
    if ((idade > 0) && (idade < 18)) {
        idadeInferiorA18 += 1;
    }
    printf("ALTURA: ");
    scanf("%f", &altura);
    printf("PESO: ");
    scanf("%f", &peso);
    if (peso > 80) {
        pesoAcimaDe80kg += 1;
    } 
    printf("\n");
    somaDasIdades += idade;
    somaDasAlturas += altura;
    somaDosPesos += peso;
    }

    printf("\n");
    printf("ESTATISTICAS GERAIS DO TIME:\n");
    if (idadeInferiorA18 == 1) {
    printf("%d JOGADOR COM IDADE INFERIOR A 18 ANOS\n", idadeInferiorA18);
    } else if (idadeInferiorA18 > 1) {
        printf("%d JOGADORES COM IDADE INFERIOR A 18 ANOS\n", idadeInferiorA18);    
    } else {
        printf("NENHUM JOGADOR COM IDADE INFERIOR A 18 ANOS\n");
    }
    mediaDasIdades = (float) somaDasIdades / limite;
    printf("MEDIA DAS IDADES: %0.2f\n", mediaDasIdades);
    mediaDasAlturas = somaDasAlturas / limite;
    printf("MEDIA DAS ALTURAS: %0.2f\n", mediaDasAlturas);
    mediaDosPesos = somaDosPesos / limite;
    printf("MEDIA DOS PESOS: %0.2f\n", mediaDosPesos);
    porcentagemJogadoresPesoAcima80kg = ((float)pesoAcimaDe80kg / limite) * 100;
    if (pesoAcimaDe80kg == 1) {
        printf("%d JOGADOR ACIMA DE 80 KG\n", pesoAcimaDe80kg);
    } else if (pesoAcimaDe80kg > 1) {
        printf("%d JOGADORES ACIMA DE 80 KG\n", pesoAcimaDe80kg);    
    } else {
        printf("NENHUM JOGADOR ACIMA DE 80 KG\n");
    }
    printf("\n");
    printf("\n");
    printf("DESEJA CONTINUAR PARA CALCULAR AS INFORMACOES DE OUTROS JOGADORES?\n");
    printf("A. CONTINUAR\n");
    printf("B. ENCERRAR\n");
    printf("CARACTERE DA ALTERNATIVA ESCOLHIDA: ");
    scanf(" %c", &continuarOuParar);

    if ((continuarOuParar == 'A') || (continuarOuParar == 'a')) {
        printf("Prosseguindo...\n");
        continue;
    } else if ((continuarOuParar == 'B') || (continuarOuParar == 'b')) {
        printf("Programa encerrado.\n");
        return 0;
    } else {
        printf("Caractere invalido - programa encerrado.\n");
        return 1;
    }
}
return 0;  
}