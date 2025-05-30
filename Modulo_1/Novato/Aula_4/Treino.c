#include <stdio.h>

int main()
{
    int idade, matricula;
    float altura;
    char nome[20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("|--------------------------------------------|");
    printf("\n             Logo Abaixo está seus dados          ");
    printf("\n|--------------------------------------------|");

    printf("\n\n Nome & matricula: %s - %d", nome, matricula);
    printf("\n Idade & altura: %d - %.2f", idade, altura);
   
    

    printf("\n\n|--------------------------------------------|");


    return 0;
}
