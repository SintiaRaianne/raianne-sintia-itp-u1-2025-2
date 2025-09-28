#include <stdio.h>

int main() {

    int x, y;
    int soma, sub, mult, resto, media_aritmetica;
    float div;
    
    printf("\nDigite o valor do primeiro numero: ");
    scanf("%i", &x);

    printf("Digite o valor do segundo numero: ");
    scanf("%i", &y);

    soma = (x + y);
    sub = (x - y);
    mult = (x * y);
    div = (x / y);
    resto = (x % y);
    media_aritmetica  = (x + y) / 2;

    printf("\nSoma: %i\nDiferenca: %i\nProduto: %i\nDivisao real: %f\nResto da divisao inteira: %i\nMedia Aritmetica: %i\n", soma, sub, mult, div, resto, media_aritmetica);
    
    return 0;
}