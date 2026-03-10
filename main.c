#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1 (adicionei o sufixo 1)
    char estado1[60], codigo1[20], cidade1[30];
    int populacao1, turisticos1;
    float area1, pib1;
    float area1, pib1;
    // variaveis da densidade populacionale a do pib per capita
    float pib_per_capita1, densidade_populacional1;

    // Variáveis para a CARTA 2 (adicionei o sufixo 2)
    char estado2[60], codigo2[20], cidade2[30];
    int populacao2, turisticos2;
    float area2, pib2;
    float area2, pib2;
    // variaveis da densidade populacionale a do pib per capita
    float pib_per_capita2, densidade_populacional2;

    printf("=== Bem-vindo ao Super Trunfo! ===\n");

    // --- CADASTRO CARTA 1 ---
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);
    printf("Codigo (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %29[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (Km2): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos1);
    // aqui adicionei o calculo das novas variaveis do jogo 
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // --- CADASTRO CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);
    printf("Codigo (ex: A02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %29[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (Km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &turisticos2);
    // aqui adicionei o calculo das novas variaveis do jogo 
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // --- EXIBIÇÃO CARTA 1 ---
    printf("\n====================\n    CARTA 1\n====================\n");
    printf("Estado: %s | Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d | Area: %.2f Km2\n", populacao1, area1);
    printf("PIB: %.2f | Turisticos: %d\n", pib1, turisticos1);
    // e aqui esta a exibicao de nossas variaveis criadas acima do codigo 
    printf("Densidade populacional: %.2f\n", pib_per_capita1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    // --- EXIBIÇÃO CARTA 2 ---
    printf("\n====================\n    CARTA 2\n====================\n");
    printf("Estado: %s | Codigo: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d | Area: %.2f Km2\n", populacao2, area2);
    printf("PIB: %.2f | Turisticos: %d\n", pib2, turisticos2);
    // e aqui esta a exibicao de nossas variaveis criadas acima do codigo
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    return 0;
}
