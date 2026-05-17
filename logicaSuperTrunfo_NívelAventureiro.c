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
    int pontos_a, pontos_b;
    float densidade_pais1,  densidade_pais2;
    int escolha;



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
            if (populacao == populacao2){
                printf("EMPATE!\n");
            }
            else if (populacao > populacao2){
                printf("Voce escolheu População!\n");
                printf("%s tem uma população de %d de pessoas!\n", pais, populacao);
                printf("%s tem uma população de %d de pessoas!\n", pais2, populacao2);
                printf("%s Venceu por ter maior população\n", pais);
            } else {
                printf("%s Venceu por ter maior população\n", pais2);
            }
        break;

        case 2:
            if (area == area2){
                printf("EMPATE!\n");
            }
            else if (area > area2){
                printf("Voce escolheu Área!\n");
                printf("%s tem uma área de %f km²!\n", pais, area);
                printf("%s tem uma área de %f km²!\n", pais2, area2);
                printf("%s Venceu por ter maior área\n", pais);
            } else {
                printf("%s Venceu por ter maior área\n", pais2);
            }
        break;

        case 3:
            if (pib > pib2){
                printf("EMPATE!\n");
            }
            else if (pib > pib2){
                printf("Voce escolheu PIB!\n");
                printf("%s tem um PIB de R$%f!\n", pais, pib);
                printf("%s tem um PIB de R$%f!\n", pais2, pib2);
                printf("%s Venceu por ter maior PIB\n", pais);
            } else {
                printf("%s Venceu por ter maior PIB\n", pais2);
            }
        break;

        case 4:
            if (p_turisticos == p_turisticos2){
                printf("EMPATE!\n");
            }
            else if (p_turisticos > p_turisticos2){
                printf("Voce escolheu Pontos Turísticos!\n");
                printf("%s tem %d pontos turísticos!\n", pais, p_turisticos);
                printf("%s tem %d pontos turísticos!\n", pais2, p_turisticos2);
                printf("%s Venceu por ter mais pontos turísticos\n", pais);
            } else {
                printf("%s Venceu por ter mais pontos turísticos\n", pais2);
            }
        break;

        case 5:
            if (densidade_pais1 == densidade_pais2){
                printf("EMPATE!\n");
            }
            else if (densidade_pais1 < densidade_pais2){
                printf("Voce escolheu Densidade Demográfica!\n");
                printf("%s tem %f de densidade demográfica!\n", pais, densidade_pais1);
                printf("%s tem %f de densidade demográfica!\n", pais2, densidade_pais2);
                printf("%s Venceu por ter menor densidade demográfica\n", pais);
            } else {
                printf("%s Venceu por ter menor densidade demográfica\n", pais2);
            }
        break;


    }





    return 0;
}