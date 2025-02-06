#include <stdio.h>

#define MAX_CARTAS 32 // 8 estados * 4 cidades cada

// Estrutura para representar uma carta de cidade
typedef struct {
    char codigo[4]; // Código da cidade (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main() {
    Carta cartas[MAX_CARTAS];
    int quantidade;

    printf("Quantas cartas deseja cadastrar (máximo %d)? ", MAX_CARTAS);
    scanf("%d", &quantidade);

    if (quantidade > MAX_CARTAS || quantidade <= 0) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    // Cadastro das cartas
    for (int i = 0; i < quantidade; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);
        printf("Código da cidade (ex: A01, B02): ");
        scanf("%s", cartas[i].codigo);
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);
        printf("PIB (bilhões): ");
        scanf("%f", &cartas[i].pib);
        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
    }

    // Exibição das cartas cadastradas
    printf("\nCartas cadastradas:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontos_turisticos);
    }

    return 0;
}
