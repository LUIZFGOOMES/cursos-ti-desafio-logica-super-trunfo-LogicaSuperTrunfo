#include <stdio.h>

int main() {
    int opcao_menu_principal;
    int opcao_comparacao;

    // Menu Principal
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras do Jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao_menu_principal);

    switch (opcao_menu_principal) {
        case 1:
            // --- Dados das Cartas (continuam aqui) ---
            char estado_carta1[] = "A";
            char codigo_carta1[] = "A01";
            char nome_cidade_carta1[] = "Sao Paulo";
            int populacao_carta1 = 12325000;
            float area_km2_carta1 = 1521.11;
            float pib_carta1 = 699.28;
            int pontos_turisticos_carta1 = 50;

            char estado_carta2[] = "B";
            char codigo_carta2[] = "B02";
            char nome_cidade_carta2[] = "Rio de Janeiro";
            int populacao_carta2 = 6748000;
            float area_km2_carta2 = 1200.25;
            float pib_carta2 = 300.50;
            int pontos_turisticos_carta2 = 30;

            // --- NOVO: Menu de Comparacao de Atributos ---
            printf("\n--- Escolha um Atributo para Comparar ---\n");
            printf("1. Populacao\n");
            printf("2. Area (km2)\n");
            printf("3. PIB\n");
            printf("4. Pontos Turisticos\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao_comparacao);
            printf("\n"); // Adiciona uma linha em branco para melhor visualizacao

            // --- Logica de Comparacao baseada na escolha ---
            switch (opcao_comparacao) {
                case 1:
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
                    break;

                case 2:
                    printf("Atributo: Area (km2)\n");
                    printf("Carta 1 (%s): %.2f\n", nome_cidade_carta1, area_km2_carta1);
                    printf("Carta 2 (%s): %.2f\n", nome_cidade_carta2, area_km2_carta2);
                    if (area_km2_carta1 > area_km2_carta2) {
                        printf("A Carta 1 venceu!\n");
                    } else if (area_km2_carta2 > area_km2_carta1) {
                        printf("A Carta 2 venceu!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;

                case 3:
                    printf("Atributo: PIB\n");
                    printf("Carta 1 (%s): %.2f\n", nome_cidade_carta1, pib_carta1);
                    printf("Carta 2 (%s): %.2f\n", nome_cidade_carta2, pib_carta2);
                    if (pib_carta1 > pib_carta2) {
                        printf("A Carta 1 venceu!\n");
                    } else if (pib_carta2 > pib_carta1) {
                        printf("A Carta 2 venceu!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;
                
                case 4:
                    printf("Atributo: Pontos Turisticos\n");
                    printf("Carta 1 (%s): %d\n", nome_cidade_carta1, pontos_turisticos_carta1);
                    printf("Carta 2 (%s): %d\n", nome_cidade_carta2, pontos_turisticos_carta2);
                    if (pontos_turisticos_carta1 > pontos_turisticos_carta2) {
                        printf("A Carta 1 venceu!\n");
                    } else if (pontos_turisticos_carta2 > pontos_turisticos_carta1) {
                        printf("A Carta 2 venceu!\n");
                    } else {
                        printf("Empate!\n");
                    }
                    break;

                default:
                    printf("Opcao de comparacao invalida. Tente novamente.\n");
                    break;
            }
            break;

        case 2:
            printf("\n--- Regras do Jogo ---\n");
            printf("1. Escolha uma opcao do menu principal para iniciar ou ver as regras.\n");
            printf("2. O jogo compara atributos de duas cartas para determinar o vencedor.\n");
            printf("3. A carta com o valor mais alto no atributo escolhido vence.\n");
            break;

        case 3:
            printf("\nSaindo...\n");
            break;

        default:
            printf("\nOpcao invalida. Tente novamente.\n");
    }

    return 0;
}