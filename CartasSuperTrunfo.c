#include <stdio.h>

/* Desafio Super Trunfo - Países
Tema 1 - Cadastro das Cartas
Tema 2 - Calculando Densidade Populacional e PIB per Capita
*/

int carta1(){
    // Criação da carta 1 do jogo

    // Iniciando variaveis
    char cidade[20];
    int populacao, ponto_turistico;
    float area, pib;

    // Definindo função cadastramento da primeira carta
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

    // Calculando Densidade Populacional e PIB per Capita
    float Densi_popular = populacao/area;
    float pib_percapt = pib/populacao;

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
    printf("Densidade populacional %.2f hab/km²\n", Densi_popular);
    printf("PIB per Capita: %.2f R$\n", pib_percapt);

    return 0;
}

int carta2(){
    // Criação da carta 2 do jogo

    // Iniciando as segundas variaveis
    char cidade2[20];
    int populacao2, ponto_turistico2;
    float area2, pib2;

    // definindo função cadastramento da segunda carta
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

    //Calculando Densidade Populacional e PIB per Capita
    float Densi_popular2 = populacao2/area2;
    float pib_percapt2 = pib2/populacao2;

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
    printf("Densidade populacional %.2f hab/km²\n", Densi_popular2);
    printf("PIB per Capita: %.2f R$\n", pib_percapt2);

    return 0;
}

int main() {
    // Corpo do programa
    carta1(); //chamando o cadastramento
    carta2(); //chamando o cadastramento

    return 0;
}
