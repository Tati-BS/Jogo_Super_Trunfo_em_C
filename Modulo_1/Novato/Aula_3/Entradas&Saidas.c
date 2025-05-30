#include <stdio.h>

int main()
{
    // dados primitivos
    int idade;
    float altura;
    char caracter;
    int pessoas = 23;
    float metros = 1.7;
    char  letra = 'B';
    char animal[20] = "abelha";
    
    printf("%i + %.4f + %c + %s \n", pessoas, metros, letra, animal);

    printf("Me diga sua idade: ");
    scanf("%i", &idade);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Escolha uma letra do alfabeto: ");
    scanf(" %c", &caracter);

    return 0;
}
