#include <stdio.h>
#include <math.h>


int main() {

    float x1,y1;
    float x2, y2;
    float teia;
    float distancia;
    int n;

    printf("\nDigite a coordenada de x: ");
    scanf("%f", &x1);

    printf("Digite a coordenada de y: ");
    scanf("%f", &y1);

    printf("Digite o comprimento maximo da teia: ");
    scanf("%f", &teia);

    printf("Digite a quantidade de alvos: ");
    scanf("%i", &n);

    for (int i = 0; i < n; i++){ 
        printf("\nDigite a coordenada x do alvo %i: ", i + 1);
        scanf("%f", &x2);

        printf("Digite a coordenada y do alvo %i: ", i + 1);
        scanf("%f", &y2);

        // Calculando a distancia 

        distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

        // Caso a teia nao alcance o alvo.

        if (distancia > teia){
            printf("\nN");
            return 0;
        }

        // Depois de fixar a teia no primeiro alvo a nova posição do Homem-Aranha.

        x1 = (2 * x2 - x1);
        y1 = (2 * y2 - y1);

    }

    // Caso a teia alcance todos os alvos. 

    printf("\nS");
    
    return 0;

}