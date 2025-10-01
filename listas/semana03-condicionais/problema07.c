#include <stdio.h>
#include <math.h>


int main() {

    double a,b,c, delta, x1, x2;

    printf("\nDigite o valor do coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%lf", &c);

    // Verifica se é uma equação de segundo grau e calcula as raízes
    if (a != 0){

        // Calcula o delta
        delta = ((pow(b,2)) - (4 * a * c));

        // Determina as raizes de acordo com delta 
            if (delta > 0){
                x1 = ((-b + (sqrt(delta))) / (2 * a));
                x2 = ((-b - (sqrt(delta))) / (2 * a));
                printf("\nDuas raizes reais distintas: x1 = %.2f e x2 = %.2f", x1, x2);
            } else if (delta == 0){
                x1 = ((-b + (sqrt(delta))) / (2 * a));
                printf("\nUma raiz real x1 = x2 = %.2f", x1);
            } else{
                printf("\nNao possui raizes reais.");
            }  

    } else{
        printf("\nNao e uma equacao de segundo grau.");
    }
    
    return 0;

}