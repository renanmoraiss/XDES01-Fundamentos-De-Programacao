#include <stdio.h>

int main() {
//AINDA NAO TEM VERIFICACAO DE CARACTERES DIGITADOS PARA IDADE, PESO E ALTURA COM RETORNO NO INICIO DO MESMO JOGADOR, MAS VOU POR!!
    while(1) {
    float mediaDasIdades = 0.0, peso, somaDosPesos = 0.0, mediaDosPesos = 0.0, porcentagemJogadoresPesoAcima80kg, altura, somaDasAlturas = 0.0, mediaDasAlturas = 0.0, maiorAltura = 0.0;
    int repeticoesEstatisticas, totalDeJogadores, idade, somaDasIdades = 0, idadeInferiorA18 = 0, pesoAcimaDe80kg = 0;
    char continuarOuParar;

    printf("-----------------------------\n");
    printf("ALGORITMO PARA CALCULAR ESTATISTICAS\n");
    printf("-----------------------------\n");
    printf("\n");
    printf("QUANTOS JOGADORES ESTAO NO TIME: ");
    scanf("%d", &totalDeJogadores);
    printf("\n");

    for (repeticoesEstatisticas = 1; repeticoesEstatisticas <= totalDeJogadores; repeticoesEstatisticas += 1) {
    printf("-------JOGADOR %d-------\n", repeticoesEstatisticas);
    printf("INFORMACOES DO JOGADOR %d\n", repeticoesEstatisticas);
    printf("IDADE: ");
    scanf("%d", &idade);
    if ((idade > 0) && (idade < 18)) {
        idadeInferiorA18 += 1;
    }
    printf("ALTURA: ");
    scanf("%f", &altura);
    if (altura > maiorAltura) {
        maiorAltura = altura;
    }
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
    printf("MAIOR ALTURA: %0.2f METROS\n", maiorAltura);
    mediaDasIdades = (float) somaDasIdades / totalDeJogadores;
    printf("MEDIA DAS IDADES: %0.2f ANOS\n", mediaDasIdades);
    mediaDasAlturas = somaDasAlturas / totalDeJogadores;
    printf("MEDIA DAS ALTURAS: %0.2f METROS\n", mediaDasAlturas);
    mediaDosPesos = somaDosPesos / totalDeJogadores;
    printf("MEDIA DOS PESOS: %0.2f KG\n", mediaDosPesos);
    porcentagemJogadoresPesoAcima80kg = ((float)pesoAcimaDe80kg / totalDeJogadores) * 100;
    if (pesoAcimaDe80kg == 1) {
    printf("%d JOGADOR ACIMA DE 80 KG\n", pesoAcimaDe80kg);
    } else if (pesoAcimaDe80kg > 1) {
    printf("%d JOGADORES ACIMA DE 80 KG\n", pesoAcimaDe80kg);    
    } else {
    printf("NENHUM JOGADOR ACIMA DE 80 KG\n");
    }
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