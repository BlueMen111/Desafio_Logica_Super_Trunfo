#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;        // int
    float area;           // float
    float pib;            // float
    int pontos;           // int
    float densidade;      // calculado: Populacao / Area
    float pib_per_capita; // calculado: PIB / Populacao
} Carta;

int main(void) {
    Carta c1, c2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c1.pontos);

    c1.densidade = c1.populacao / c1.area;
    c1.pib_per_capita = c1.pib / c1.populacao;

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (int): ");
    scanf("%d", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c2.pontos);

    c2.densidade = c2.populacao / c2.area;
    c2.pib_per_capita = c2.pib / c2.populacao;

    // Saída organizada
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos);
    printf("Densidade Populacional: %.4f\n", c1.densidade);
    printf("PIB per capita: %.4f\n", c1.pib_per_capita);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos);
    printf("Densidade Populacional: %.4f\n", c2.densidade);
    printf("PIB per capita: %.4f\n", c2.pib_per_capita);

    return 0;
}
