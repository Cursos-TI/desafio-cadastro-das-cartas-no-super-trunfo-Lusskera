#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("carta 1\n");


    char Estado;
    int população, pontos;
    float pib, area;

    printf ("digite o estado: \n");
    scanf ("%s" , &Estado);

    printf("digite a população: \n");
    scanf ("%d" , &população);

    printf("digite a area: \n");
    scanf ("%f ", &area);

    printf("digite o pib: \n");
    scanf("%f ", &pib);

    printf("digite a quantidade de pontos turísticos; \n");
    scanf("%d \n", &pontos);

    printf("Estado: %s \n", &Estado);
    printf("população: %d \n", população);
    printf("area: %f \n", area);
    printf("pib: %f \n", pib);
    printf("quantidade de pontos turísticos: %d", pontos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
