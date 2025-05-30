
#include <stdio.h>

int main()
{
    char produtoA[30] = "Produto A", produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000, estoqueB = 1000;

    float valorA = 10.50, valorB = 20.40;

    unsigned int estoqueminimoA = 500, estoqueminimoB = 2500;

    double valorTotalA, valorTotalB;
   
    int resultadoA, resultadoB;


    printf("%s tem estoque %u e o valor unitario é %.2f\n",produtoA,estoqueA,valorA);
    printf("%s tem estoque %u e o valor unitario é %.2f\n\n",produtoB,estoqueB,valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;
    
    printf("O %s tem estoque mínimo %d\n", produtoA,resultadoA);
    printf("O %s tem estoque mínimo %d\n", produtoB,resultadoB);


    printf("O valor total de A em R$: %.2f é maior que o valor total de B em R$ %.2f: %d\n", (estoqueA*valorA), (estoqueB *valorB), (estoqueA*valorA) > (estoqueB *valorB) );
    return 0;
}
