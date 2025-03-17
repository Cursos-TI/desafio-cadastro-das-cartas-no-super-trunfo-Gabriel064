#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[5] = "Bahia";
    char codigodacarta[6] = "B01";
    char cidade[8] = "Salvador";
    int populacao = 14000000;
    float area = 567.295; 
    float PIB = 352618000;
    int pontosturisticos = 13;
    
    char estado2[5] = "Ceara";
    char codigodacarta2[3] = "C01";
    char cidade2[9] = "Fortaleza";
    int populacao2 = 8795000;
    float area2 = 148.886;
    float PIB2 = 194885000;
    int pontosturisticos2 = 15;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite o estado: ");
    scanf("%s", &estado);
    printf("estado: %s\n", estado);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigodacarta);
    printf("codigo da carta: %s\n", codigodacarta);

    printf("digite a cidade: ");
    scanf("%s", &cidade);
    printf("cidade: %s\n", cidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);
    printf("populacao: %d\n", populacao);

    printf("digite a area: ");
    scanf("%f", &area);
    printf("area: %.3f\n", area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);
    printf("PIB: %f\n", PIB);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf("pontos turisticos: %d\n", pontosturisticos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
