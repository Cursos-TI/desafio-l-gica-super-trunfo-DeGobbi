#include <stdio.h>

int main() {

    // =========================
    // Variáveis da Carta 1
    // =========================

    char estado1[3];
    char codigo1[4];
    char cidade1[50];

    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;

    // =========================
    // Variáveis da Carta 2
    // =========================

    char estado2[3];
    char codigo2[4];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;

    // =========================
    // Cadastro da Carta 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // Cadastro da Carta 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // Cálculos
    // =========================

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // =========================
    // Exibição dos dados
    // =========================

    printf("\n=== Dados da Carta 1 ===\n");

    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n=== Dados da Carta 2 ===\n");

    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    // =========================
    // Comparação das cartas
    // Atributo escolhido: População
    // =========================

    printf("\n=== Comparacao de Cartas ===\n");

    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d\n",
           cidade1, estado1, populacao1);

    printf("Carta 2 - %s (%s): %d\n",
           cidade2, estado2, populacao2);

    // =========================
    // Resultado
    // =========================

    if (populacao1 > populacao2) {

        printf("\nResultado: Carta 1 (%s) venceu!\n",
               cidade1);

    } else {

        printf("\nResultado: Carta 2 (%s) venceu!\n",
               cidade2);
    }

    return 0;
}