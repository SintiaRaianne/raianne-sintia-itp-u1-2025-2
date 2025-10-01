#include <stdio.h>

int main() {

    int n, cont = 1;

    printf("\nDigite o numero de linhas: ");
    scanf("%i", &n);

    // Caso o usuario informe um numero invalido
    if (n <= 0) {
        printf("\nPor favor, insira um numero positivo");

        return 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("%i ", cont);
            cont++;
        }
        printf("\n");
    }

    return 0;

}