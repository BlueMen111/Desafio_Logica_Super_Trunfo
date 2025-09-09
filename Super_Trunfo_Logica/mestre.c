#include <stdio.h>

typedef struct {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    double densidade;
    double pib_per_capita;
    double super_poder;
} Carta;

int main(void) {
    Carta c1, c2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c1.populacao);
    printf("Area (float): ");
    scanf("%f", &c1.area);
    printf("PIB (float): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c1.pontos);

    c1.densidade = (double)c1.populacao / (double)c1.area;
    c1.pib_per_capita = (double)c1.pib / (double)c1.populacao;
    c1.super_poder = (double)c1.populacao + (double)c1.area + (double)c1.pib + (double)c1.pontos + (1.0 / c1.densidade) + c1.pib_per_capita;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c2.populacao);
    printf("Area (float): ");
    scanf("%f", &c2.area);
    printf("PIB (float): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos (int): ");
    scanf("%d", &c2.pontos);

    c2.densidade = (double)c2.populacao / (double)c2.area;
    c2.pib_per_capita = (double)c2.pib / (double)c2.populacao;
    c2.super_poder = (double)c2.populacao + (double)c2.area + (double)c2.pib + (double)c2.pontos + (1.0 / c2.densidade) + c2.pib_per_capita;

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos);
    printf("Densidade Populacional: %.6f\n", c1.densidade);
    printf("PIB per capita: %.6f\n", c1.pib_per_capita);
    printf("Super Poder: %.6f\n", c1.super_poder);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos);
    printf("Densidade Populacional: %.6f\n", c2.densidade);
    printf("PIB per capita: %.6f\n", c2.pib_per_capita);
    printf("Super Poder: %.6f\n", c2.super_poder);

    int v_pop = (c1.populacao > c2.populacao) ? 1 : 0;
    int v_area = (c1.area > c2.area) ? 1 : 0;
    int v_pib = (c1.pib > c2.pib) ? 1 : 0;
    int v_pontos = (c1.pontos > c2.pontos) ? 1 : 0;
    int v_densidade = (c1.densidade < c2.densidade) ? 1 : 0;
    int v_pibpc = (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 0;
    int v_super = (c1.super_poder > c2.super_poder) ? 1 : 0;

    printf("\n=== Resultado das Comparacoes (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");
    printf("Populacao: %d\n", v_pop);
    printf("Area: %d\n", v_area);
    printf("PIB: %d\n", v_pib);
    printf("Pontos Turisticos: %d\n", v_pontos);
    printf("Densidade Populacional (menor vence): %d\n", v_densidade);
    printf("PIB per capita: %d\n", v_pibpc);
    printf("Super Poder (maior vence): %d\n", v_super);

    return 0;
}
