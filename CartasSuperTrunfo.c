#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1[5] = "Bahia";
    char codigodacarta1[3] = "B01";
    char cidade1[8] = "Salvador";
    int populacao1 = 2568928;
    float area1 = 693.8; 
    float PIB1 = 62954000000;
    int pontosturisticos1 = 15;
    float densidadepopulacional1 = populacao1 / area1;
    float PIBpercapita1 = PIB1 / populacao1;

    char estado2[5] = "Ceara";
    char codigodacarta2[3] = "C01";
    char cidade2[9] = "Fortaleza";
    int populacao2 = 2574412;
    float area2 = 313.8;
    float PIB2 = 73000000000;
    int pontosturisticos2 = 15;
    float densidadepopulacional2 = populacao2 / area2;
    float PIBpercapita2 = PIB2 / populacao2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite o estado: ");
    scanf("%s", &estado1);

    printf("digite a codigo da carta: ");
    scanf("%s", &codigodacarta1);

    printf("digite a cidade: ");
    scanf("%s", &cidade1);

    printf("digite a populacao: ");
    scanf("%d", &populacao1);

    printf("digite a area: ");
    scanf("%f", &area1);

    printf("digite o PIB: ");
    scanf("%f", &PIB1);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("densidade populacional: %.2f\n", densidadepopulacional1);

    printf("PIB per capita: %.2f\n", PIBpercapita1);

    printf("digite o estado: ");
    scanf("%s", &estado2);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigodacarta2);

    printf("digite a cidade: ");
    scanf("%s", &cidade2);

    printf("digite a populacao: ");
    scanf("%d", &populacao2);

    printf("digite a area: ");
    scanf("%f", &area2);

    printf("digite o PIB: ");
    scanf("%f", &PIB2);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("densidade populacional: %.2f\n", densidadepopulacional2);

    printf("PIB per capita: %.2f\n", PIBpercapita2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("estado: %s\n", cidade1);

    printf("codigo da carta: %s\n", codigodacarta1);

    printf("cidade: %s\n", cidade1);

    printf("populacao: %d\n", populacao1);

    printf("area: %.1f\n", area1);

    printf("PIB: %.2f\n", PIB1);

    printf("pontos turisticos: %d\n", pontosturisticos1);

    printf("estado: %s\n", estado2);

    printf("codigo da carta: %s\n", codigodacarta2);

    printf("cidade: %s\n", cidade2);

    printf("populacao: %d\n", populacao2);

    printf("area: %.1f\n", area2);

    printf("PIB: %.2f\n", PIB2);

    printf("pontos turisticos: %d\n", pontosturisticos2);

    
    
    return 0;
}
