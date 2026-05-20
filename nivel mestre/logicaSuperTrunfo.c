#include <stdio.h>

int main() {

    // =========================
    // Carta 1
    // =========================

    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 2200.0;
    int pontosTuristicos1 = 50;

    // =========================
    // Carta 2
    // =========================

    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontosTuristicos2 = 35;

    // =========================
    // Densidade Demográfica
    // =========================

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // =========================
    // Variáveis do Menu
    // =========================

    int atributo1;
    int atributo2;

    // =========================
    // Variáveis auxiliares
    // =========================

    float valor1Carta1 = 0;
    float valor1Carta2 = 0;

    float valor2Carta1 = 0;
    float valor2Carta2 = 0;

    float somaCarta1;
    float somaCarta2;

    // =========================
    // Primeiro Menu
    // =========================

    printf("=== SUPER TRUNFO ===\n");

    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo1);

    // =========================
    // Segundo Menu Dinâmico
    // =========================

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) {
        printf("1 - Populacao\n");
    }

    if (atributo1 != 2) {
        printf("2 - Area\n");
    }

    if (atributo1 != 3) {
        printf("3 - PIB\n");
    }

    if (atributo1 != 4) {
        printf("4 - Pontos Turisticos\n");
    }

    if (atributo1 != 5) {
        printf("5 - Densidade Demografica\n");
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // =========================
    // Validação
    // =========================

    if (atributo1 == atributo2) {

        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");

    } else {

        // =========================
        // PRIMEIRO ATRIBUTO
        // =========================

        switch (atributo1) {

            case 1:

                valor1Carta1 = populacao1;
                valor1Carta2 = populacao2;

                printf("\n=== Primeiro Atributo: Populacao ===\n");

                break;

            case 2:

                valor1Carta1 = area1;
                valor1Carta2 = area2;

                printf("\n=== Primeiro Atributo: Area ===\n");

                break;

            case 3:

                valor1Carta1 = pib1;
                valor1Carta2 = pib2;

                printf("\n=== Primeiro Atributo: PIB ===\n");

                break;

            case 4:

                valor1Carta1 = pontosTuristicos1;
                valor1Carta2 = pontosTuristicos2;

                printf("\n=== Primeiro Atributo: Pontos Turisticos ===\n");

                break;

            case 5:

                // Menor densidade vence
                valor1Carta1 = 1 / densidade1;
                valor1Carta2 = 1 / densidade2;

                printf("\n=== Primeiro Atributo: Densidade Demografica ===\n");

                break;

            default:

                printf("\nOpcao invalida!\n");
        }

        // =========================
        // SEGUNDO ATRIBUTO
        // =========================

        switch (atributo2) {

            case 1:

                valor2Carta1 = populacao1;
                valor2Carta2 = populacao2;

                printf("\n=== Segundo Atributo: Populacao ===\n");

                break;

            case 2:

                valor2Carta1 = area1;
                valor2Carta2 = area2;

                printf("\n=== Segundo Atributo: Area ===\n");

                break;

            case 3:

                valor2Carta1 = pib1;
                valor2Carta2 = pib2;

                printf("\n=== Segundo Atributo: PIB ===\n");

                break;

            case 4:

                valor2Carta1 = pontosTuristicos1;
                valor2Carta2 = pontosTuristicos2;

                printf("\n=== Segundo Atributo: Pontos Turisticos ===\n");

                break;

            case 5:

                // Menor densidade vence
                valor2Carta1 = 1 / densidade1;
                valor2Carta2 = 1 / densidade2;

                printf("\n=== Segundo Atributo: Densidade Demografica ===\n");

                break;

            default:

                printf("\nOpcao invalida!\n");
        }

        // =========================
        // Soma dos atributos
        // =========================

        somaCarta1 = valor1Carta1 + valor2Carta1;
        somaCarta2 = valor1Carta2 + valor2Carta2;

        // =========================
        // Exibição dos resultados
        // =========================

        printf("\n=== RESULTADO FINAL ===\n");

        printf("\nPais 1: %s\n", pais1);
        printf("Pais 2: %s\n", pais2);

        printf("\nValor total %s: %.2f\n", pais1, somaCarta1);
        printf("Valor total %s: %.2f\n", pais2, somaCarta2);

        // =========================
        // Operador ternário
        // =========================

        printf("\nVencedor: %s\n",
               somaCarta1 > somaCarta2 ? pais1 :
               somaCarta2 > somaCarta1 ? pais2 :
               "Empate!");

    }

    return 0;
}