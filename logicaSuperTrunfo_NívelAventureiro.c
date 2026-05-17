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
    float densidade_cidade1,  densidade_cidade2;
    int escolha;



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


    // CÁLCULO DA DENSIDADE DEMOGRÁFICA

    densidade_cidade1 = populacao / area;
    densidade_cidade2 = populacao2 / area2;


    




    // Comparação de cidades:
    // Desenvolva a lógica de comparação entre duas cidades.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // MENU INTERATIVO

    printf("Escolha uma opção para comparar!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            if (populacao > populacao2){
                printf("%s Venceu por ter maior população\n", cidade);
            } else {
                printf("%s Venceu por ter maior população\n", cidade2);
            }
        break;

        case 2:
            if (area > area2){
                printf("%s Venceu por ter maior área\n", cidade);
            } else {
                printf("%s Venceu por ter maior área\n", cidade2);
            }
        break;

        case 3:
            if (pib > pib2){
                printf("%s Venceu por ter maior PIB\n", cidade);
            } else {
                printf("%s Venceu por ter maior PIB\n", cidade2);
            }
        break;

        case 4:
            if (p_turisticos > p_turisticos2){
                printf("%s Venceu por ter mais pontos turísticos\n", cidade);
            } else {
                printf("%s Venceu por ter mais pontos turísticos\n", cidade2);
            }
        break;

        case 5:
            if (densidade_cidade1 < densidade_cidade2){
                printf("%s Venceu por ter menor densidade demográfica\n", cidade);
            } else {
                printf("%s Venceu por ter menor densidade demográfica\n", cidade2);
            }
        break;


    }



    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual cidade venceu e com base em qual atributo.

    // EXIBIÇÃO DAS CARTAS
    /* printf("\n\n\nCarta 01\n");
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
    printf("Número de Pontos turísticos: %d\n\n", p_turisticos2); */

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}