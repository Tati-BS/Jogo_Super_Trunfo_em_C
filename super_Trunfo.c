#include <stdio.h>
//Iniciando o processo de criacao das cartas//
//Cadastro das cartas//

int main(){

    //Carta 01//

    char estado1[10];
    char codigodacarta1[10];
    char nomedaCidade1[10];
    int populacao1;
    float areakm1;
    float pib1;
    int qtdpontosTuristicos1;

//Carta 02//

    char estado2[10];
    char codigodacarta2[10];
    char nomedaCidade2[10];
    int populacao2;
    float areakm2;
    float pib2;
    int qtdpontosTuristicos2;

    //Leitura dos Dados da Carta 01//

    printf("Digite os dados da carta 01 abaixo: \n");

    printf("Digite a Inicial o Estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta(Ex: 'A01, A02...'): \n");
    scanf(" %s", &codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &nomedaCidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area em km²: \n");
    scanf("%f", &areakm1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf(" %d", &qtdpontosTuristicos1);

    //Leitura dos Dados da Carta 02//

    printf("Digite os dados da carta 02 abaixo: \n\n");

    printf("Digite a Inicial o Estado: \n");
    scanf("%c", &estado2);

    printf("Digite o Codigo da Carta(Ex: 'A01, A02...'): \n");
    scanf("%s", &codigodacarta2);    

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nomedaCidade2);    

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area em km²: \n");
    scanf("%f", &areakm2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &qtdpontosTuristicos2);

    //Impressão dos Dados das Cartas 1 e 2//

    printf("\n\nLogo abaixo serao apresentados os dados das cartas 01 e 02: \n\n");
    printf("Carta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedaCidade1);
    printf("População: %d\n", populacao1);
    printf("Area em km²: %.2f\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdpontosTuristicos1);

    printf("Carta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedaCidade2);
    printf("População: %d\n", populacao2);
    printf("Area em km²: %.2f\n", areakm2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Quantidade de Pontos Turisticos: %d\n", qtdpontosTuristicos2);

    return 0;
}