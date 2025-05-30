
#include <stdio.h>

int exibicao(numero1,numero2,soma, subtracao, multiplicacao, divisao);

int main()
{
    int numero1 , numero2 ;
    int soma, subtracao, multiplicacao, divisao;

    //logo abaixo ele tera entrada com os valores como 1 + 1 e a saida 2
    //Ira somar os valores e dar o resultado

    printf("Digite o primeiro valor da operação: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor da operação: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    multiplicacao = numero1 * numero2;
    subtracao = numero1 - numero2;
    divisao = numero1 / numero2;

    exibicao(numero1,numero2,soma, subtracao, multiplicacao, divisao);

    return 0;
    
}







int exibicao(numero1,numero2,soma, subtracao, multiplicacao, divisao)
{
    printf("Logo abaixo vera o resultado em cada operado aritimetico:");

    //soma
    printf("\nA Soma dos valores %d + %d = %d", numero1, numero2, soma);

    //Subtração
    printf("\nA subtração de %d - %d  = %d", numero1, numero2, subtracao);

    //multiplicação
    printf("\nA multiplicação de %d X %d  = %d", numero1, numero2, multiplicacao);

    //divisão
    printf("\nA divisão de %d / %d = %d", numero1, numero2, divisao);
}
