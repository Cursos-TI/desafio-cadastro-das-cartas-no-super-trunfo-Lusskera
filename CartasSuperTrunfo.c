#include <stdio.h>


int main() {
    printf("carta 1\n");


    char Estado;
    int população, pontos;
    float pib, area;

    printf ("digite o estado: \n"); // aqui pede para que a pessoa digite o estado.
    scanf ("%s" , &Estado); //aqui a pessoa insere as informações de "Estado".

    printf("digite a população: \n"); // pede a informação de população.
    scanf ("%d" , &população); // a pessoa insere a informação de população (e assim sucessivamente)

    printf("digite a area: \n");
    scanf ("%f ", &area);

    printf("digite o pib: \n");
    scanf("%f ", &pib);

    printf("digite a quantidade de pontos turísticos; \n");
    scanf("%d \n", &pontos);

    printf("Estado: %s \n", &Estado); // de aqui em diante mostra o resultado dos dados inseridos pelo usuário
    printf("população: %d \n", população);
    printf("area: %f \n", area);
    printf("pib: %f \n", pib);
    printf("quantidade de pontos turísticos: %d", pontos);



    return 0;
}
