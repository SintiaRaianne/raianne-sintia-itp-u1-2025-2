#include <stdio.h>

int main(){

    int a, b;

    do {
        printf("\nDigite o valor de a: ");
        scanf("%i", &a);

        printf("Digite o valor de b: ");
        scanf("%i", &b);

    } while (a <= b);

    printf("\nNumeros primos entre %i e %i: ", b, a);

    for (int i = b + 1; i < a; i++){

        int primo = 1;

        if (i < 2){
            primo = 0;
        }

        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                primo = 0;
                break;
            }
        }

        if (primo == 1){
            printf("%i ", i);
        }
    }

    printf("\n");

    return 0;
}