
#include <stdio.h>

int main()
{
    char cartaUmEstado = 'z';
    char cartaUmCodigoCarta[20] = "z";
    char cartaUmNomeCidade[20] = "z";
    int cartaUmPopulacao = 0;
    float cartaUmArea = 0;
    float cartaUmPib = 0;
    int cartaUmpontosTuristicos = 0;

    printf("Preencha abaixo as informacoes para criar suas cartas do Super Trunfo\n");
    printf("Cadastre a primeira carta\n\n");

    printf("Digite a letra inicial do estado: ");
    scanf("%c", &cartaUmEstado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &cartaUmCodigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cartaUmNomeCidade);

    printf("Digite o numero de habitantes na cidade: ");
    scanf("%d", &cartaUmPopulacao);

    printf("Digite a area da cidade em  km²: ");
    scanf("%f", &cartaUmArea);

    printf("Digite o PIB bruto da cidade: ");
    scanf("%f", &cartaUmPib);

    printf("Digite o numero de pontos turisticos na cidade: ");
    scanf("%d", &cartaUmpontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", cartaUmEstado);
    printf("Codigo: %c%s\n", cartaUmEstado, cartaUmCodigoCarta);
    printf("Nome da Cidade: %s\n", cartaUmNomeCidade);
    printf("Populacao: %d\n", cartaUmPopulacao);
    printf("Area: %.2f\n", cartaUmArea);
    printf("PIB: %.2f\n", cartaUmPib);
    printf("Numero de Pontos Turisticos: %d\n", cartaUmpontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");

    char cartaDoisEstado = 'z';
    char cartaDoisCodigoCarta[20] = "z";
    char cartaDoisNomeCidade[20] = "z";
    int cartaDoisPopulacao = 0;
    float cartaDoisArea = 0;
    float cartaDoisPib = 0;
    int cartaDoispontosTuristicos = 0;

    printf("Cadastre a segunda carta\n\n");

    printf("Digite a letra inicial do estado: ");
    scanf("%s", &cartaDoisEstado);

    printf("Digite o codigo da sua carta: ");
    scanf("%s", &cartaDoisCodigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cartaDoisNomeCidade);

    printf("Digite o numero de habitantes na cidade: ");
    scanf("%d", &cartaDoisPopulacao);

    printf("Digite a area da cidade em  km²: ");
    scanf("%f", &cartaDoisArea);

    printf("Digite o PIB bruto da cidade: ");
    scanf("%f", &cartaDoisPib);

    printf("Digite o numero de pontos turisticos na cidade: ");
    scanf("%d", &cartaDoispontosTuristicos);

    printf("------------------------------------------------------------\n\n\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", cartaDoisEstado);
    printf("Codigo: %c%s\n", cartaDoisEstado, cartaDoisCodigoCarta);
    printf("Nome da Cidade: %s\n", cartaDoisNomeCidade);
    printf("Populacao: %d\n", cartaDoisPopulacao);
    printf("Area: %.2f\n", cartaDoisArea);
    printf("PIB: %.2f\n", cartaDoisPib);
    printf("Numero de Pontos Turisticos: %d\n", cartaDoispontosTuristicos);

    return 0;
}
