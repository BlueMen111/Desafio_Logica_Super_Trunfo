#include <stdio.h>

typedef struct {
    char codigo[4];          // ex.: A01
    int populacao;           // int
    float area;              // float (km², por exemplo)
    float pib;               // float (em bilhões, por exemplo)
    int pontos_turisticos;   // int
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
    scanf("%d", &c1.pontos_turisticos);

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
    scanf("%d", &c2.pontos_turisticos);

    // Saída organizada
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Codigo: %s\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos Turisticos: %d\n", c1.pontos_turisticos);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Codigo: %s\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos Turisticos: %d\n", c2.pontos_turisticos);

    return 0;
}
