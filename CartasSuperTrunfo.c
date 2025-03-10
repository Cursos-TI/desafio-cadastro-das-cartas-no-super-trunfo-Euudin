#include <stdio.h>

/* Desafio Super Trunfo - Países
Tema 1 - Cadastro das Cartas
Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
Siga os comentários para implementar cada parte do desafio.
*/

int main() {
    // Definindo variáveis da carta
    char cidade[20], cidade2[20];
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int ponto_turistico, ponto_turistico2;
    
    // Cadastro da primeira carta
    printf("\n------------------------ Cadastro da Carta 1:------------------------\n");

    printf("Nome da Cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico);

    // Exibição dos Dados da primeira Carta
    printf("\n------------------------ Dados da Carta 1:------------------------\n");
    printf("Carta: 1\n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico);

    // Cadastro da segunda carta
    printf("\n------------------------ Cadastro da Carta 2:------------------------\n");

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &ponto_turistico2);

    // Exibição dos Dados da segunda Carta
    printf("\n------------------------ Dados da Carta 2:------------------------\n");
    printf("Carta: 2\n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);

    return 0;
}
