#include <stdio.h>

int main() {

    int n;
    int altura_terreno[30];
    int altura_maior = 0;
    int primeiro_pico = -1, segundo_pico = -1, comprimento_ponte;

    scanf("%i", &n);

    if (n > 30){
        return 1;
    }
    // Recebe as alturas e valida se sao todas maiores que 0
    for (int i = 0; i < n; i++){
        scanf("%i", &altura_terreno[i]);

        if(altura_terreno[i] <= 0){
            return 1;
        }
    }
    // Identifica a maior altura
    for (int j = 0; j < n; j++){
        if (altura_terreno[j] > altura_maior){
            altura_maior = altura_terreno[j];
        }
    }
    // Identifica a posição do primeiro pico (primeira ocorrência da maior altura)
    for (int k = 0; k < n; k++){
        if (altura_terreno[k] == altura_maior){
            primeiro_pico = k;
            break;
        }
    }
    // Identifica a posição do segundo pico (última ocorrência da maior altura)
    for (int l = n - 1; l >= 0; l--){
        if (altura_terreno[l] == altura_maior){
            segundo_pico = l;
            break;
        }
    }

    // Calcula o comprimento da ponte (distância entre os picos)
    comprimento_ponte = segundo_pico - primeiro_pico - 1;
    printf("%i", comprimento_ponte);

    return 0;

}