#include <stdio.h>
#include <math.h>


int main(){

    float x, y;
    float ax, ay;
    float pontos = 0;
    float distancia_p, distancia_b;


    for (int i = 0; i < 10; i++){

        printf("\nDigite a coordenada de x no lancamento %i: ", i + 1);
        scanf("%f", &x);

        printf("Digite a coordenada de y no lancamento %i: ", i + 1);
        scanf("%f", &y);

        // Calcula a pontuacao principal
        distancia_p = sqrt(pow(x, 2) + pow(y, 2));

        if (distancia_p <= 1){
            pontos = pontos + 10;
        } else if (distancia_p <= 2) {
            pontos = pontos + 6;
        } else if (distancia_p <= 3) {
            pontos = pontos + 4;
        }

        // Calcula a pontuacao bonus

        if (i > 0){
            distancia_b = sqrt(pow((x - ax), 2) + pow((y - ay), 2));

            if (distancia_b <= 1){
            pontos = pontos + 5;
            } else if (distancia_b <= 2) {
            pontos = pontos + 3;
            } else if (distancia_b <= 3) {
            pontos = pontos + 2;
            }
        }

    // No final da rodada, o lançamento atual se torna o anterior 
    ax = x;
    ay = y;
        
    }

    printf("\nPontuacao Total: %2.f", pontos);

    return 0;

}