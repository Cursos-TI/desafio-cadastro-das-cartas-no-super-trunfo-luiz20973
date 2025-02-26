#include <stdio.h>

int main() {
    // carta 1
    char carta1_estado;
    int carta1_cidade;
    int carta1_populacao;
    float carta1_area;
    float carta1_pib;
    int carta1_pontos_turisticos;

    // carta 2
    char carta2_estado;
    int carta2_cidade;
    int carta2_populacao;
    float carta2_area;
    float carta2_pib;
    int carta2_pontos_turisticos;

    // criação carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);
    printf("Cidade (1-4): ");
    scanf(" %d", &carta1_cidade);
    printf("População: ");
    scanf(" %d", &carta1_populacao);
    printf("Área (km²): ");
    scanf(" %f", &carta1_area);
    printf("PIB: ");
    scanf(" %f", &carta1_pib);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta1_pontos_turisticos);

    // criação carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);
    printf("Cidade (1-4): ");
    scanf(" %d", &carta2_cidade);
    printf("População: ");
    scanf(" %d", &carta2_populacao);
    printf("Área (km²): ");
    scanf(" %f", &carta2_area);
    printf("PIB:  ");
    scanf(" %f", &carta2_pib);
    printf("numero de pontos turisticos: ");
    scanf(" %d", &carta2_pontos_turisticos);

    // exibição carta 1
    printf("\nDados da Carta 1:\n");
    printf("Código: %c%02d\n", carta1_estado, carta1_cidade);
    printf("Populaçao: %d\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area);
    printf("PIB: %.2f milhões\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);

    // exibição carta 2
    printf("\nDados da Carta 2:\n");
    printf("Código: %c%02d\n", carta2_estado, carta2_cidade);
    printf("População: %d\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area);
    printf("PIB: %.2f milhões\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);

    return 0;
}

