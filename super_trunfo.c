
#include <stdio.h>

int main()
{
    char c1Estado = 'z';
    char c1CodigoCarta[20] = "z";
    char c1NomeCidade[20] = "z";
    int c1Populacao = 0;
    float c1Area = 0;
    float c1Pib = 0;
    int c1pontosTuristicos = 0;

    printf("Preencha abaixo as informacoes para criar suas cartas do Super Trunfo\n");
    printf("Cadastre a primeira carta\n\n");

    printf("Digite a letra inicial do estado: ");
    scanf("%c", &c1Estado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &c1CodigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &c1NomeCidade);

    printf("Digite o numero de habitantes na cidade: ");
    scanf("%d", &c1Populacao);

    printf("Digite a area da cidade em  km²: ");
    scanf("%f", &c1Area);

    printf("Digite o PIB bruto da cidade: ");
    scanf("%f", &c1Pib);

    printf("Digite o numero de pontos turisticos na cidade: ");
    scanf("%d", &c1pontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", c1Estado);
    printf("Codigo: %c%s\n", c1Estado, c1CodigoCarta);
    printf("Nome da Cidade: %s\n", c1NomeCidade);
    printf("Populacao: %d\n", c1Populacao);
    printf("Area: %.2f\n", c1Area);
    printf("PIB: %.2f\n", c1Pib);
    printf("Numero de Pontos Turisticos: %d\n", c1pontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");

    char c2Estado = 'z';
    char c2CodigoCarta[20] = "z";
    char c2NomeCidade[20] = "z";
    int c2Populacao = 0;
    float c2Area = 0;
    float c2Pib = 0;
    int c2pontosTuristicos = 0;

    printf("Cadastre a segunda carta\n\n");

    printf("Digite a letra inicial do estado: ");
    scanf("%s", &c2Estado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &c2CodigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &c2NomeCidade);

    printf("Digite o numero de habitantes na cidade: ");
    scanf("%d", &c2Populacao);

    printf("Digite a area da cidade em  km²: ");
    scanf("%f", &c2Area);

    printf("Digite o PIB bruto da cidade: ");
    scanf("%f", &c2Pib);

    printf("Digite o numero de pontos turisticos na cidade: ");
    scanf("%d", &c2pontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", c2Estado);
    printf("Codigo: %c%s\n", c2Estado, c2CodigoCarta);
    printf("Nome da Cidade: %s\n", c2NomeCidade);
    printf("Populacao: %d\n", c2Populacao);
    printf("Area: %.2f\n", c2Area);
    printf("PIB: %.2f\n", c2Pib);
    printf("Numero de Pontos Turisticos: %d\n", c2pontosTuristicos);

    return 0;
}
