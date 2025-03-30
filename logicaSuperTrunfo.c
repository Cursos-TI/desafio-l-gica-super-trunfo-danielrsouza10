#include <stdio.h>

// Definicao de variaveis globais para armazenar as informações das cartas
int populacaoA, populacaoB, qtdPontosTuristicosA, qtdPontosTuristicosB;
float pibA, pibB, areaA, areaB;
char estadoA, estadoB;
char codigoDaCartaA[5], codigoDaCartaB[5];
char cidadeA[50], cidadeB[50];

int main() {
    // Cadastro das Cartas para Cidade A:
    printf("---- Cadastro da Cidade 1 ----\n");
    printf("Insira o estado (A a F): ");
    scanf(" %c", &estadoA);
    
    printf("Insira o código da carta (2 dígitos): ");
    scanf("%s", codigoDaCartaA);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", cidadeA);
    
    printf("Insira a quantidade de habitantes: ");
    scanf("%d", &populacaoA);
    
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibA);
    
    printf("Insira a área da cidade: ");
    scanf("%f", &areaA);
    
    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &qtdPontosTuristicosA);

    // Cadastro das Cartas para Cidade B:
    printf("---- Cadastro da Cidade 2 ----\n");
    printf("Insira o estado (A a F): ");
    scanf(" %c", &estadoB);
    
    printf("Insira o código da carta (2 dígitos): ");
    scanf("%s", codigoDaCartaB);
    
    printf("Insira o nome da cidade: ");
    scanf("%s", cidadeB);
    
    printf("Insira a quantidade de habitantes: ");
    scanf("%d", &populacaoB);
    
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pibB);
    
    printf("Insira a área da cidade: ");
    scanf("%f", &areaB);
    
    printf("Insira a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &qtdPontosTuristicosB);
    
    // Exibir menu de opções de comparação
    printf("\nEscolha o tipo de comparação:\n");
    printf("1 - Comparar População\n");
    printf("2 - Comparar Área\n");
    printf("3 - Comparar PIB\n");
    printf("4 - Comparar Pontos Turísticos\n");
    printf("5 - Comparar Densidade Populacional\n");
    printf("6 - Comparar PIB per Capita\n");
    printf("7 - Comparar Super Poder\n");
    printf("8 - Comparar Dois Atributos Simultaneamente\n");
    printf("0 - Sair\n");
    printf("Digite sua opção: ");
    
    int opcao;
    scanf("%d", &opcao);
    
    if (opcao == 1) { // Comparar População
        if (populacaoA > populacaoB)
            printf("Cidade A venceu na comparação de População!\n");
        else if (populacaoA < populacaoB)
            printf("Cidade B venceu na comparação de População!\n");
        else
            printf("Empate na comparação de População!\n");
    }
    
    if (opcao == 2) { // Comparar Área
        if (areaA > areaB)
            printf("Cidade A venceu na comparação de Área!\n");
        else if (areaA < areaB)
            printf("Cidade B venceu na comparação de Área!\n");
        else
            printf("Empate na comparação de Área!\n");
    }

    if (opcao == 3) { // Comparar PIB
        if (pibA > pibB)
            printf("Cidade A venceu na comparação de PIB!\n");
        else if (pibA < pibB)
            printf("Cidade B venceu na comparação de PIB!\n");
        else
            printf("Empate na comparação de PIB!\n");
    }

    if (opcao == 4) { // Comparar Pontos Turísticos
        if (qtdPontosTuristicosA > qtdPontosTuristicosB)
            printf("Cidade A venceu na comparação de Pontos Turísticos!\n");
        else if (qtdPontosTuristicosA < qtdPontosTuristicosB)
            printf("Cidade B venceu na comparação de Pontos Turísticos!\n");
        else
            printf("Empate na comparação de Pontos Turísticos!\n");
    }

    if (opcao == 5) { // Comparar Densidade Populacional
        if ((populacaoA / areaA) > (populacaoB / areaB))
            printf("Cidade A venceu na comparação de Densidade Populacional!\n");
        else if ((populacaoA / areaA) < (populacaoB / areaB))
            printf("Cidade B venceu na comparação de Densidade Populacional!\n");
        else
            printf("Empate na comparação de Densidade Populacional!\n");
    }

    if (opcao == 6) { // Comparar PIB per Capita
        if ((pibA / populacaoA) > (pibB / populacaoB))
            printf("Cidade A venceu na comparação de PIB per Capita!\n");
        else if ((pibA / populacaoA) < (pibB / populacaoB))
            printf("Cidade B venceu na comparação de PIB per Capita!\n");
        else
            printf("Empate na comparação de PIB per Capita!\n");
    }

    if (opcao == 7) { // Comparar Super Poder
        float superPoderA = (populacaoA + areaA + pibA + qtdPontosTuristicosA + pibA/populacaoA - populacaoA/areaA);
        float superPoderB = (populacaoB + areaB + pibB + qtdPontosTuristicosB + pibB/populacaoB - populacaoB/areaB);

        if (superPoderA > superPoderB)
            printf("Cidade A venceu na comparação de Super Poder!\n");
        else if (superPoderA < superPoderB)
            printf("Cidade B venceu na comparação de Super Poder!\n");
        else
            printf("Empate na comparação de Super Poder!\n");
    }

    if (opcao == 8) { // Comparar Dois Atributos Simultaneamente
        printf("Escolha os dois atributos a comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("6 - PIB per Capita\n");
        
        int atributo1, atributo2;
        printf("Digite o primeiro atributo (1-6): ");
        scanf("%d", &atributo1);
        printf("Digite o segundo atributo (1-6): ");
        scanf("%d", &atributo2);
        
        // Comparar o primeiro atributo
        if (atributo1 == 1) {
            if (populacaoA > populacaoB)
                printf("Cidade A venceu na comparação de População!\n");
            else if (populacaoA < populacaoB)
                printf("Cidade B venceu na comparação de População!\n");
            else
                printf("Empate na comparação de População!\n");
        }
        if (atributo1 == 2) {
            if (areaA > areaB)
                printf("Cidade A venceu na comparação de Área!\n");
            else if (areaA < areaB)
                printf("Cidade B venceu na comparação de Área!\n");
            else
                printf("Empate na comparação de Área!\n");
        }
        if (atributo1 == 3) {
            if (pibA > pibB)
                printf("Cidade A venceu na comparação de PIB!\n");
            else if (pibA < pibB)
                printf("Cidade B venceu na comparação de PIB!\n");
            else
                printf("Empate na comparação de PIB!\n");
        }
        if (atributo1 == 4) {
            if (qtdPontosTuristicosA > qtdPontosTuristicosB)
                printf("Cidade A venceu na comparação de Pontos Turísticos!\n");
            else if (qtdPontosTuristicosA < qtdPontosTuristicosB)
                printf("Cidade B venceu na comparação de Pontos Turísticos!\n");
            else
                printf("Empate na comparação de Pontos Turísticos!\n");
        }
        if (atributo1 == 5) {
            if ((populacaoA / areaA) > (populacaoB / areaB))
                printf("Cidade A venceu na comparação de Densidade Populacional!\n");
            else if ((populacaoA / areaA) < (populacaoB / areaB))
                printf("Cidade B venceu na comparação de Densidade Populacional!\n");
            else
                printf("Empate na comparação de Densidade Populacional!\n");
        }
        if (atributo1 == 6) {
            if ((pibA / populacaoA) > (pibB / populacaoB))
                printf("Cidade A venceu na comparação de PIB per Capita!\n");
            else if ((pibA / populacaoA) < (pibB / populacaoB))
                printf("Cidade B venceu na comparação de PIB per Capita!\n");
            else
                printf("Empate na comparação de PIB per Capita!\n");
        }

        // Comparar o segundo atributo
        if (atributo2 == 1) {
            if (populacaoA > populacaoB)
                printf("Cidade A venceu na comparação de População!\n");
            else if (populacaoA < populacaoB)
                printf("Cidade B venceu na comparação de População!\n");
            else
                printf("Empate na comparação de População!\n");
        }
        if (atributo2 == 2) {
            if (areaA > areaB)
                printf("Cidade A venceu na comparação de Área!\n");
            else if (areaA < areaB)
                printf("Cidade B venceu na comparação de Área!\n");
            else
                printf("Empate na comparação de Área!\n");
        }
        if (atributo2 == 3) {
            if (pibA > pibB)
                printf("Cidade A venceu na comparação de PIB!\n");
            else if (pibA < pibB)
                printf("Cidade B venceu na comparação de PIB!\n");
            else
                printf("Empate na comparação de PIB!\n");
        }
        if (atributo2 == 4) {
            if (qtdPontosTuristicosA > qtdPontosTuristicosB)
                printf("Cidade A venceu na comparação de Pontos Turísticos!\n");
            else if (qtdPontosTuristicosA < qtdPontosTuristicosB)
                printf("Cidade B venceu na comparação de Pontos Turísticos!\n");
            else
                printf("Empate na comparação de Pontos Turísticos!\n");
        }
        if (atributo2 == 5) {
            if ((populacaoA / areaA) > (populacaoB / areaB))
                printf("Cidade A venceu na comparação de Densidade Populacional!\n");
            else if ((populacaoA / areaA) < (populacaoB / areaB))
                printf("Cidade B venceu na comparação de Densidade Populacional!\n");
            else
                printf("Empate na comparação de Densidade Populacional!\n");
        }
        if (atributo2 == 6) {
            if ((pibA / populacaoA) > (pibB / populacaoB))
                printf("Cidade A venceu na comparação de PIB per Capita!\n");
            else if ((pibA / populacaoA) < (pibB / populacaoB))
                printf("Cidade B venceu na comparação de PIB per Capita!\n");
            else
                printf("Empate na comparação de PIB per Capita!\n");
        }
    }

    return 0;
}
