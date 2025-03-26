#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos

    char estado[5] = "bahia";
    char codigodacarta[3] = "b01";
    char cidade[8] = "salvador";
    int populacao = 2568928;
    float area = 693.8; 
    float PIB = 62954000000;
    int pontosturisticos = 20;
    

    char estado2[5] = "ceara";
    char codigodacarta2[3] = "c02";
    char cidade2[9] = "Fortaleza";
    int populacao2 = 2574412;
    float area2 = 313.8;
    float PIB2 = 73000000000;
    int pontosturisticos2 = 15;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite o estado: ");
    scanf("%s", &estado);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigodacarta);

    printf("digite a cidade: ");
    scanf("%s", &cidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);

    printf("digite a area: ");
    scanf("%f", &area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    printf("estado: %s\n", estado);

    printf("codigo da carta: %s\n", codigodacarta);

    printf("cidade: %s\n", cidade);

    printf("populacao: %d\n", populacao);

    printf("area: %.1f\n", area);

    printf("PIB: %.2f\n", PIB);

    printf("pontos turisticos: %d\n", pontosturisticos);

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
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("estado: %s\n", estado2);

    return 0;
}
