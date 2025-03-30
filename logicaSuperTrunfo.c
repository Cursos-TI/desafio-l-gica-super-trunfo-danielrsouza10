#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char codigoDaCartaA[4];
    char estadoA[50];
    char cidadeA[50];
    int populacaoA;
    float areaA;
    float pibA;
    int qtdPontosTuristicosA;

    char codigoDaCartaB[4];
    char estadoB[50];
    char cidadeB[50];
    int populacaoB;
    float areaB;
    float pibB;
    int qtdPontosTuristicosB;

    
    // Cadastro das Cartas:
    printf("Digite o código da cidadeA: \n");
    scanf("%s", codigoDaCartaA);
    printf("Digite o nome do estadoA: \n");
    scanf("%s", estadoA);
    printf("Digite o nome da cidadeA: \n");
    scanf("%s", cidadeA);
    printf("Digite a populacaoA: ");
    scanf("%d", populacaoA);
    printf("Digite a areaA da cidadeA: \n");
    scanf("%f", areaA);
    printf("Digite o pibA da cidadeA: \n");
    scanf("%f", pibA);
    printf("Digite a quantidade de pontos turisticos da cidadeA: \n");
    scanf("%d", qtdPontosTuristicosA);

    printf("Digite o código da cidadeA: \n");
    scanf("%s", codigoDaCartaB);
    printf("Digite o nome do estadoA: \n");
    scanf("%s", estadoB);
    printf("Digite o nome da cidadeA: \n");
    scanf("%s", cidadeB);
    printf("Digite a populacaoA: ");
    scanf("%d", populacaoB);
    printf("Digite a areaA da cidadeA: \n");
    scanf("%f", areaB);
    printf("Digite o pibA da cidadeA: \n");
    scanf("%f", pibB);
    printf("Digite a quantidade de pontos turisticos da cidadeA: \n");
    scanf("%d", qtdPontosTuristicosB);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, pibA, etc.

    // Exemplo:
    if (populacaoA > populacaoB) {
        printf("cidadeA A tem maior população.\n");
    } else {
        printf("cidadeA B tem maior população.\n");
    }

    if(areaA > areaB){
        printf("a cidade A tem maior area.\n")
    } else {
        printf("a cidade B tem maior area.\n")
    }

    if(pibA > pibB){
        printf("a cidade A tem maior pib.\n")
    } else {
        printf("a cidade B tem maior pib.\n")
    }

    if(qtdPontosTuristicosA > qtdPontosTuristicosB){
        printf("a cidade A tem mais pontos turisticos.\n")
    } else {
        printf("a cidade B tem mais pontos turisticos.\n")
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidadeA vencedora é: %s\n", cidadeVencedora);

    return 0;
}
