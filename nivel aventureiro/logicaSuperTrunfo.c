#include <stdio.h>

int main() {

    // =========================
    // Variáveis Carta 1
    // =========================

    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;

    // =========================
    // Variáveis Carta 2
    // =========================

    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    // =========================
    // Variável do menu
    // =========================

    int opcao;

    // =========================
    // Cadastro Carta 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome do pais: ");
    scanf("%s", pais1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // Cadastro Carta 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome do pais: ");
    scanf("%s", pais2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // Cálculo da densidade
    // =========================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // =========================
    // Menu Interativo
    // =========================

    printf("\n=== SUPER TRUNFO ===\n");

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    // =========================
    // Comparações
    // =========================

    switch(opcao) {

        case 1:

            printf("\n=== Comparacao por Populacao ===\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {

                printf("\nResultado: %s venceu!\n", pais1);

            } else {

                if (populacao2 > populacao1) {

                    printf("\nResultado: %s venceu!\n", pais2);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        case 2:

            printf("\n=== Comparacao por Area ===\n");

            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {

                printf("\nResultado: %s venceu!\n", pais1);

            } else {

                if (area2 > area1) {

                    printf("\nResultado: %s venceu!\n", pais2);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        case 3:

            printf("\n=== Comparacao por PIB ===\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {

                printf("\nResultado: %s venceu!\n", pais1);

            } else {

                if (pib2 > pib1) {

                    printf("\nResultado: %s venceu!\n", pais2);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        case 4:

            printf("\n=== Comparacao por Pontos Turisticos ===\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {

                printf("\nResultado: %s venceu!\n", pais1);

            } else {

                if (pontosTuristicos2 > pontosTuristicos1) {

                    printf("\nResultado: %s venceu!\n", pais2);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        case 5:

            printf("\n=== Comparacao por Densidade Demografica ===\n");

            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // Menor densidade vence

            if (densidade1 < densidade2) {

                printf("\nResultado: %s venceu!\n", pais1);

            } else {

                if (densidade2 < densidade1) {

                    printf("\nResultado: %s venceu!\n", pais2);

                } else {

                    printf("\nResultado: Empate!\n");
                }
            }

            break;

        default:

            printf("\nOpcao invalida!\n");
    }

    return 0;
}