#include <stdio.h>
#include <ctype.h>

int main() {

    // toupper padroniza para maiúsculo
    float consumo, valor_total_conta;
    char tipo_consumidor;
    int taxa_fixa = 15;
    
    printf("\nDigite o consumo de energia em (kWh): ");
    scanf("%f", &consumo);

    printf("Digite o tipo de consumidor (R: residencial, C: comercial e I: industrial): ");
    scanf(" %c", &tipo_consumidor);
    tipo_consumidor = toupper(tipo_consumidor);

    // Calcular o valor total da conta de energia conforme o tipo do consumidor
    if (tipo_consumidor == 'R'){
        valor_total_conta = (0.60 * consumo)+ (taxa_fixa);
    } else if (tipo_consumidor == 'C') {
        valor_total_conta = (0.48 * consumo) + (taxa_fixa);
    } else {
        valor_total_conta = (1.29 * consumo) + (taxa_fixa);
    }
    
    printf("\nValor total da conta R$: %.2f\n", valor_total_conta);
    
    return 0;
}