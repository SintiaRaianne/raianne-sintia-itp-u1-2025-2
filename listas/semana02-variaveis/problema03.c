#include <stdio.h>
#include <math.h>

int main() {

    float capital_inicial;
    float juros;
    int tempo;
    float montante;

    printf("\nDigite o valor do capintal inicial: R$ ");
    scanf("%f", &capital_inicial);

    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &juros);

    printf("Digite o tempo (em anos): ");
    scanf("%i", &tempo);

    // Calcular o montante com os dados fornecidos
    montante = (capital_inicial * pow((1 + (juros/100)), tempo));

    printf("Montante: R$ %.2f\n", montante);

    return 0;
}