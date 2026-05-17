#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das cidades
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cidades de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[10], estado2[10];
    char codigo[10], codigo2[10];
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int p_turisticos, p_turisticos2;
    int pontos_a, pontos_b;

    pontos_a = 0;
    pontos_b = 0;

    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das cidades:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

// cidade 1
    printf("------- cidade 1 -------\n");
    printf("Insira o estado: ");
    scanf("%s", estado);
    printf("Insira o código: ");
    scanf("%s", codigo);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira a população: ");
    scanf("%d", &populacao);
    printf("Insira a área(km²): ");
    scanf("%f", &area);
    printf("Insira o PIB: ");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos);



    // cidade 2
    printf("------- cidade 2 -------\n");
    printf("Insira o estado: ");
    scanf("%s", estado2);
    printf("Insira o código: ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira a população: ");
    scanf("%d", &populacao2);
    printf("Insira a área(km²): ");
    scanf("%f", &area2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos2);


    // Comparação de cidades:
    // Desenvolva a lógica de comparação entre duas cidades.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao > populacao2){
        printf("A cidade 1 tem maior população!\n");
        pontos_a = pontos_a + 1;
    } else {
        printf("A cidade 2 tem maior população!\n");
        pontos_b = pontos_b + 1;
    }

    if (area > area2){
        printf("A cidade 1 tem uma área maior!\n");
        pontos_a = pontos_a + 1;
    } else {
        printf("A cidade 2 tem uma área maior!\n");
        pontos_b = pontos_b + 1;
    }

    if (pib > pib2){
        printf("A cidade 1 tem um PIB maior!\n");
        pontos_a = pontos_a + 1;
    } else {
        printf("A cidade 2 tem um PIB maior!\n");
        pontos_b = pontos_b + 1;
    }

    if (p_turisticos > p_turisticos2){
        printf("A cidade 1 tem mais pontos turísticos!\n");
        pontos_a = pontos_a + 1;
    } else {
        printf("A cidade 2 tem mais pontos turísticos!\n");
        pontos_b = pontos_b + 1;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual cidade venceu e com base em qual atributo.

    // EXIBIÇÃO DAS CARTAS
    printf("\n\n\nCarta 01\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos turísticos: %d\n\n", p_turisticos);
    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n\n", p_turisticos2);

    if(pontos_a > pontos_b){
        printf("A cidade de %s fez %d pontos, e é a vencedora!\n", cidade, pontos_a);
    } else if (pontos_a == pontos_b){
        printf("Ambas cidades fizeram %d pontos! EMPATE!/n", pontos_a);
    } else {
        printf("A cidade de %s fez %d pontos, e é a vencedora!\n", cidade2, pontos_b);
    }


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
