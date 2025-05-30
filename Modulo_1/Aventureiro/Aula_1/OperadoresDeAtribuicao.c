#include <stdio.h>



int main()
{
/*
    int numero1, numero2, resultado;

    resultado = 10;

    printf("Digite dois numeros pra fazer as operaçoes com o numero 10: ");
    scanf("%d", &numero1);
    printf("digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado+= numero1 +numero2;
    printf("\nResultado: %d", resultado);
    
*/
    

    int A = 0, B = 0;

    B = ++A; //pre-incremento
    B = A++; //pos-incremento
    B = --A; //pre-decremento
    B = A--; //pos-decremento

    printf("%d", B);
    

    return 0;
    
}
