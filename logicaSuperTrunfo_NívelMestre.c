#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das pais
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de pais de pais. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das pais

    char pais[20], pais2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int p_turisticos, p_turisticos2;
    float densidade_pais1, densidade_pais2;

    int escolha1, escolha2;

    float atributo1_pais1, atributo1_pais2;
    float atributo2_pais1, atributo2_pais2;

    float soma_pais1, soma_pais2;

    
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das pais:
    // Implemente a lógica para solicitar ao usuário que insira os dados das pais
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // país 1

    printf("Insira o nome do país: ");
    scanf("%s", pais);

    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira a área(km²): ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos);

    // país 2

    printf("Insira o nome do país: ");
    scanf("%s", pais2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a área(km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos: ");
    scanf("%d", &p_turisticos2);

    // CÁLCULO DA DENSIDADE DEMOGRÁFICA

    densidade_pais1 = populacao / area;
    densidade_pais2 = populacao2 / area2;

    // Comparação de pais:
    // Desenvolva a lógica de comparação entre duas pais.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // PRIMEIRO MENU

    printf("\nEscolha o primeiro atributo!\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    printf("Escolha uma opção: ");
    scanf("%d", &escolha1);

    // SEGUNDO MENU

    printf("\nEscolha o segundo atributo!\n");

    if (escolha1 != 1){
        printf("1. População\n");
    }

    if (escolha1 != 2){
        printf("2. Área\n");
    }

    if (escolha1 != 3){
        printf("3. PIB\n");
    }

    if (escolha1 != 4){
        printf("4. Pontos Turísticos\n");
    }

    if (escolha1 != 5){
        printf("5. Densidade Demográfica\n");
    }

    printf("Escolha uma opção: ");
    scanf("%d", &escolha2);

    // VALIDAÇÃO

    if (escolha1 == escolha2){

        printf("Você não pode escolher o mesmo atributo duas vezes!\n");

        return 0;
    }

    // PRIMEIRO ATRIBUTO

    switch (escolha1){

        case 1:

            atributo1_pais1 = populacao;
            atributo1_pais2 = populacao2;

        break;

        case 2:

            atributo1_pais1 = area;
            atributo1_pais2 = area2;

        break;

        case 3:

            atributo1_pais1 = pib;
            atributo1_pais2 = pib2;

        break;

        case 4:

            atributo1_pais1 = p_turisticos;
            atributo1_pais2 = p_turisticos2;

        break;

        case 5:

            atributo1_pais1 = densidade_pais1;
            atributo1_pais2 = densidade_pais2;

        break;

        default:

            printf("Opção inválida!\n");

            return 0;
    }

    // SEGUNDO ATRIBUTO

    switch (escolha2){

        case 1:

            atributo2_pais1 = populacao;
            atributo2_pais2 = populacao2;

        break;

        case 2:

            atributo2_pais1 = area;
            atributo2_pais2 = area2;

        break;

        case 3:

            atributo2_pais1 = pib;
            atributo2_pais2 = pib2;

        break;

        case 4:

            atributo2_pais1 = p_turisticos;
            atributo2_pais2 = p_turisticos2;

        break;

        case 5:

            atributo2_pais1 = densidade_pais1;
            atributo2_pais2 = densidade_pais2;

        break;

        default:

            printf("Opção inválida!\n");

            return 0;
    }

    // SOMA DOS ATRIBUTOS

    soma_pais1 = atributo1_pais1 + atributo2_pais1;
    soma_pais2 = atributo1_pais2 + atributo2_pais2;

    // RESULTADO FINAL

    printf("\n===== RESULTADO =====\n");

    printf("\n%s\n", pais);
    printf("Primeiro atributo: %.2f\n", atributo1_pais1);
    printf("Segundo atributo: %.2f\n", atributo2_pais1);
    printf("Soma dos atributos: %.2f\n", soma_pais1);

    printf("\n%s\n", pais2);
    printf("Primeiro atributo: %.2f\n", atributo1_pais2);
    printf("Segundo atributo: %.2f\n", atributo2_pais2);
    printf("Soma dos atributos: %.2f\n", soma_pais2);

    // TRATAMENTO DE EMPATE

    if (soma_pais1 == soma_pais2){

        printf("\nEMPATE!\n");

    } else {

        if (soma_pais1 > soma_pais2){

            printf("\n%s venceu!\n", pais);

        } else {

            printf("\n%s venceu!\n", pais2);

        }

    }

    return 0;
}