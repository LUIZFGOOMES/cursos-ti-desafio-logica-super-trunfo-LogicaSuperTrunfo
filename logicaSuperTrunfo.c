#include <stdio.h>

int main() {
    printf("Desafio cadastro e comparacao das cartas:\n");

    // --- Dados da Carta 1 ---
    char estado_carta1[] = "A";
    char codigo_carta1[] = "A01";
    char nome_cidade_carta1[] = "Sao Paulo";
    int populacao_carta1 = 12325000;
    float area_km2_carta1 = 1521.11;
    float pib_carta1 = 699.28;
    int pontos_turisticos_carta1 = 50;

    // --- Dados da Carta 2 ---
    char estado_carta2[] = "B";
    char codigo_carta2[] = "B02";
    char nome_cidade_carta2[] = "Rio de Janeiro";
    int populacao_carta2 = 6748000;
    float area_km2_carta2 = 1200.25;
    float pib_carta2 = 300.50;
    int pontos_turisticos_carta2 = 30;

    // --- Comparacao dos atributos (População) ---
    printf("\n--- Resultado da Comparacao ---\n");
    printf("Atributo: Populacao\n");
    printf("Carta 1 (%s): %d\n", nome_cidade_carta1, populacao_carta1);
    printf("Carta 2 (%s): %d\n", nome_cidade_carta2, populacao_carta2);

    if (populacao_carta1 > populacao_carta2) {
        printf("A Carta 1 venceu!\n");
    } else if (populacao_carta2 > populacao_carta1) {
        printf("A Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}