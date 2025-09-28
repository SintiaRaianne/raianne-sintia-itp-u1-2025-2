#include <stdio.h>

int main() {

    float valor_compra, valor_final, valor_desconto, desconto;

    printf("\nDigite o valor da compra R$: ");
    scanf("%f", &valor_compra);

    // Determina o valor do desconto

    if (valor_compra <= 100.00){
        desconto = 0;
    } else if (valor_compra <= 500.00){
        desconto = 10;
    } else if (valor_compra <= 1000.00){
        desconto = 15;
    } else{
        desconto = 20;
    }

    valor_desconto = valor_compra * (desconto / 100);
    valor_final = valor_compra - valor_desconto;
    
    printf("\nValor do desconto R$: %.2f\nValor final R$: %.2f\nPorcentagem de desconto: %.2f ", valor_desconto, valor_final, desconto);

    return 0;
}