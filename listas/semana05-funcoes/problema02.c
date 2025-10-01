#include <stdio.h>
#include <math.h>

int ehPrimo(int numero){
    if (numero <= 1){
        // Numeros negativos e o numero 1 nao sao primos.
        return 0; 
    }
    for (int i = 2; i * i <= numero; i++){
        if (numero % i == 0){
            // Se o numero for divisível não é primo
            return 0;
        }
    }
    return 1;
}

int main() {
    int limite = 50000;
    
    printf("\nTrios de primos na forma (x, x + 2, x + 6) ate %i: \n", limite);

    for (int x = 3; x + 6 <= limite; x++) {

        // Verificac se x, x + 2 e x + 6 são todos primos
        if (ehPrimo(x) && ehPrimo(x + 2) && ehPrimo(x + 6)) {
            printf("(%i, %i, %i)\n", x, x + 2, x + 6);
        }
    }
    
    return 0;
}
