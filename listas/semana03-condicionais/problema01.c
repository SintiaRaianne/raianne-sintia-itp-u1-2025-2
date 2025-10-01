#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    float peso, altura, massa_corporal;

    printf("\nDigite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    // Calcular o IMC com os dados fornecidos
    massa_corporal = ((peso) / (pow(altura,2)));

    printf("\nIndice de massa corporal: %.2f\n", massa_corporal);

    // Classificar os resultado de acordo com a tabela do IMC
    if (massa_corporal < 18.5){
        printf("Classificacao: Abaixo do peso");
    } else if (massa_corporal <= 24.9){
        printf("Classificacao: Peso normal");
    } else if (massa_corporal <= 29.9){
        printf("Classificacao: Sobrepeso");
    } else{
        printf("Classificacao: Obesidade");
    }
    
    return 0;
}