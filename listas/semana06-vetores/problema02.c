#include <stdio.h>

int main() {

    int m, n;
    int figurinhas_possui;
    // // Tamanho 1001 (índices 0 a 1000)
    int colecao[1001] = {0};
    
    scanf("%i %i", &m, &n);

    // Encerra se m e n nao forem validos
    if (m > 1000 || m < 1 || n > m){
        return 1;
    }

    // Verifica as figurinhas que possui
    for (int i = 0; i < n; i++){
        scanf("%i", &figurinhas_possui);
        if (figurinhas_possui <= m && figurinhas_possui >= 1){
            colecao[figurinhas_possui] = 1;
        }
    }
    // Imprime as figurinhas faltantes
    for (int j = 1; j <= m; j++){
        if (colecao[j] == 0){
            printf("%i ", j);
        }  
    }

    printf("\n");

    return 0;

}
