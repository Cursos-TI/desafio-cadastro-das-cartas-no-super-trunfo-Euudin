#include <stdio.h>

// Programa principal
int main() {

    // Declaração de variáveis para armazenar os dados das duas cidades
    char cidade1[20], cidade2[20]; // Nomes das cidades
    unsigned long int populacao1, populacao2; // População (valores positivos grandes)
    float area1, pib1, area2, pib2; // Área em km² e PIB em bilhões
    int pontos_turisticos1, pontos_turisticos2; // Quantidade de pontos turísticos
    float densidade1, pib_per_capita1, super_poder1, densidade2, pib_per_capita2, super_poder2; // Valores calculados

    // Entrada de dados para a primeira cidade
    printf("\n------------------------ Cadastro da Carta 1:------------------------\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade1); // Lê o nome da cidade 1
    printf("População: ");
    scanf("%lu", &populacao1); // Lê a população
    printf("Área: ");
    scanf("%f", &area1); // Lê a área
    printf("PIB: ");
    scanf("%f", &pib1); // Lê o PIB
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1); // Lê pontos turísticos

    // Cálculos para a primeira cidade
    densidade1 = (float)populacao1 / area1; // Densidade populacional (hab/km²)
    pib_per_capita1 = pib1 / (float)populacao1; // PIB por habitante (R$)

    // Exibição dos dados processados da primeira cidade
    printf("\n------------------------ Dados da Carta 1:------------------------\n");
    printf("Carta: 1\n");
    printf("Estado: A\n"); // Estado fixo
    printf("Código: A01\n"); // Código fixo
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita1);

    // Entrada de dados para a segunda cidade (mesmo processo da primeira)
    printf("\n------------------------ Cadastro da Carta 2:------------------------\n");
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a segunda cidade
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibição dos dados processados da segunda cidade
    printf("\n------------------------ Dados da Carta 2:------------------------\n");
    printf("Carta: 2\n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita2);

    // Cálculo do Super Poder
    // Quanto menor o valor, melhor. Fórmula inclui inverso da densidade.
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Comparação entre as cartas (0 = Carta 2 venceu, 1 = Carta 1 venceu)
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Comparação de Cartas: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int resultado; // Armazena 1 (verdadeiro) ou 0 (falso)

    // Compara população: maior valor vence
    resultado = populacao1 > populacao2;
    printf("População: Carta 1 venceu %d\n", resultado);

    // Compara área: maior valor vence
    resultado = area1 > area2;
    printf("Área: Carta 1 venceu %d\n", resultado);

    // Compara PIB: maior valor vence
    resultado = pib1 > pib2;
    printf("PIB: Carta 1 venceu %d\n", resultado);

    // Compara pontos turísticos: maior quantidade vence
    resultado = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos Turísticos: Carta 1 venceu %d\n", resultado);

    // Compara densidade: MENOR densidade vence (por isso verifica se Carta 1 é menor)
    resultado = densidade1 < densidade2;
    printf("Densidade Populacional: Carta 2 venceu %d\n", resultado); // Se 1, Carta 1 tem menor densidade (Carta 2 perde)

    // Compara PIB per capita: maior quantidade vence
    resultado = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta 1 venceu %d\n", resultado);

    // Compara "Super Poder": maior quantidade vence
    resultado = super_poder1 > super_poder2;
    printf("Super Poder: Carta 1 venceu %d\n", resultado);

    return 0;
}