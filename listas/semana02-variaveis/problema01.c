#include <stdio.h>
#include <math.h>

int main() {

    float peso;
    float altura;
    float massa_corporal;

    printf("\nDigite o peso em (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura em (metros): ");
    scanf("%f", &altura);

    massa_corporal = ((peso) / (pow(altura,2)));

    printf("Indice de massa corporal: %.2f\n", massa_corporal);

    return 0;
}



