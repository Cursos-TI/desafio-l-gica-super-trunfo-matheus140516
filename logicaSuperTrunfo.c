#include <stdio.h>

// Função principal
int main() {
    // Cadastro das duas cartas do Super Trunfo
    char estado1[] = "São Paulo";
    char codigo1[] = "SP01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000000000; // PIB em bilhões
    int pontosTuristicos1 = 15;

    char estado2[] = "Rio de Janeiro";
    char codigo2[] = "RJ01";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.27;
    float pib2 = 400000000000; // PIB em bilhões
    int pontosTuristicos2 = 10;

    // Cálculos: Densidade Populacional e PIB per capita
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Escolha direta do atributo para comparação: População neste caso
    char atributoEscolhido[] = "População";

    printf("Comparação de cartas (Atributo: %s):\n\n", atributoEscolhido);
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    // Lógica de comparação para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", estado1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", estado2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm a mesma população.\n");
    }

    return 0;
}