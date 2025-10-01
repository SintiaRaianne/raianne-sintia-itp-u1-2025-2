#include <stdio.h>
#include <math.h>


int main() {

    double a,b,c, maior, x1, x2;

    printf("\nDigite o valor do coeficiente a: ");
    scanf("%lf", &a);

    printf("Digite o valor do coeficiente b: ");
    scanf("%lf", &b);

    printf("Digite o valor do coeficiente c: ");
    scanf("%lf", &c);

    // Verifica se forma triangulo 
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b)){

        // Classifica triangulo pelos lados 
       if (a == b && b == c){
            printf("\nTriangulo Equilatero: Todos lados iguais.");
       } else if (a == b || b == c || c == a){
            printf("\nTriangulo Isosceles: Dois lados iguais.");
       } else{
            printf("\nTriangulo Escaleno: Todos lados diferentes.");
       }

       // Identifica o maior lado 
       if (a >= b && a >= c){
            maior = a; 
            x1 = b; 
            x2 = c;
        } else if (b >= a && b >= c) {
            maior = b; 
            x1 = a; 
            x2 = c;
        } else {
            maior = c; 
            x1 = a; 
            x2 = b;
        }

        // Classifica o triangulo pelos angulos
       if (pow(maior,2) == pow(x1,2) + pow(x2,2)){
            printf("\nAngulo Retangulo.");
       } else if (pow(maior,2) < pow(x1,2) + pow(x2,2)){
            printf("\nAngulo Acutangulo.");
       } else if (pow(maior,2) > pow(x1,2) + pow(x2,2)){
            printf("\nAngulo Obtusangulo.");
       }
       
    } else {
        printf("\nNao e um triangulo.");
    }

    return 0;

}