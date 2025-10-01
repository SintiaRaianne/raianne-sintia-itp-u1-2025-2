#include <stdio.h>
#include <math.h>

// Calcula a altitude no ponto x, y
float calcula_altura(float x, float y){
    return sin(cos(y) + x) + cos(y + sin(x));
}
// Verifica se o ponto x, y e seus 4 pontos verdes sao seguros
int seguro(float x, float y){
    float altura = calcula_altura(x, y);

    if (altura < 0.0 || altura > 2.0){
        return 0;
    }

    // Verifica se os 4 pontos verdes sao seguros 
    float px[4] = {0.2, -0.2, 0.2, -0.2};
    float py[4] = {0.2, -0.2, -0.2, 0.2};
    
    for (int i = 0; i < 4; i++) {
        altura = calcula_altura(x + px[i], y + py[i]);
        if (altura < 0.0 || altura > 2.0) { 
            return 0;
        }
    }
    return 1;
}

int main() {
    float x, y;

    scanf("%f %f", &x, &y);

    // Caso o ponto nao seja seguro troca as coordenadas
    if (!seguro(x, y)){
        printf("Troque as coordenadas.");
        return 0;
    }

    // Verifica pontos vizinhos
    float pxn[4] = {2, -2, 0, 0};
    float pyn[4] = {0, 0, -2, 2};
    
    int count = 0;
    
    for (int i = 0; i < 4; i++) {
        if (seguro(x + pxn[i], y + pyn[i])) {
             count++;
        }
    }
    
    if (count == 4){
        printf("seguro\n");
    } else if (count >= 2) {
        printf("relativamente seguro\n");
    } else {
        printf("inseguro\n");
    }
    return 0;
}