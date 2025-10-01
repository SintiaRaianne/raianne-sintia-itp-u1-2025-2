#include <stdio.h>
#include <math.h> 

int main() {

    int a, b, c; 
    
    // Encontra e imprime todos os trios pitagóricos com o maior número  ate 1000
    printf("\nTrios pitagoricos com o maior numero menor que 1000: \n");

    for (a = 1; a < 1000; a++) {
        for (b = a; b < 1000; b++) {

            c = (int)sqrt((pow(a, 2) + pow(b, 2)));
            
            if (c < 1000 && (pow(c, 2) == pow(a, 2) + pow(b, 2))) {
                printf("%i %i %i \n", a, b, c);
            }
        }
    }

    return 0;
}