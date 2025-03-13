#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado;
    char codigodacarta;
    char nomedacidade;
    int populacao;
    float area; 
    float PIB;
    int pontosturisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("digite o estado: ");
    scanf("%s", &estado);
    printf("estado: %s\n", estado);

    printf("digite o codigo da carta: ");
    scanf("%s", &codigodacarta);
    printf("codigo da carta: %s\n", codigodacarta);

    printf("digite o nome da cidade: ");
    scanf("%s", &nomedacidade);
    printf("nome da cidade: %s\n", nomedacidade);

    printf("digite a populacao: ");
    scanf("%d", &populacao);
    printf("populacao: %d\n", populacao);

    printf("digite a area: ");
    scanf("%f", &area);
    printf("area: %f\n", area);

    printf("digite o PIB: ");
    scanf("%f", &PIB);
    printf("PIB: %f\n", PIB);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    printf("pontos turisticos: %d", pontosturisticos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
