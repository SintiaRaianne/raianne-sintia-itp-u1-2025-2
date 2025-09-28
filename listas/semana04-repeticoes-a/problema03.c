#include <stdio.h>
#include <stdlib.h>


int main() {

    int A, B;
    int somaA = 0, somaB = 0;

    printf("\nDigite o valor de A: ");
    scanf("%i", &A);

    printf("Digite o valor de B: ");
    scanf("%i", &B);

    // Somatorio dos divisores próprios de A

    for (int i = 1; i <= A / 2; i++){
        if (A % i == 0){
            somaA = somaA + i;
        }
    }

    // Somatorio dos divisores próprios de B

    for (int i = 1; i <= B / 2; i++){
        if (B % i == 0){
            somaB = somaB + i;
        }
    }

    // Verificacao se os numeros sao colegas 

    if ((abs(somaA - B) <= 2) && (abs(somaB - A) <= 2)){
        printf("\nS");
    } else {
        printf("\nN");
    }
    
    return 0;

}