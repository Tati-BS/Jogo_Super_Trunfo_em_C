
#include <stdio.h>

int main()
{
    
    float temperatura , umidade;
    unsigned int estoque;

    printf("Digite a temperatura do ambiente: ");
    scanf("%f", &temperatura);

    printf("Digite a umidade do ambiente: ");
    scanf("%f", &umidade);

    printf("Digite quantidade de estoque: ");
    scanf("%u", &estoque);

    if(temperatura > 30)
    {

        printf("A temperatura está muito alto!");
        printf("\nOs produtos do estoque podem diminuir com o aumento da temperatura, ate então temos %d", estoque);

        if(umidade > 12)
        {

            printf("\n\nUmidade superior do que o previsto, ative o protocolo");

        }


    }
    else
    {

        printf("A temperatura está estavel");
        printf("\nOs produtos do estoque podem diminuir com o aumento da temperatura caso suba, ate então temos %d", estoque);
        
    }


    return 0;
}
