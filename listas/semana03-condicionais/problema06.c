#include <stdio.h>
#include <ctype.h>


int main() {

    char febre, dor_cabeca, dor_corpo, tosse;

    // toupper padroniza para maiúsculo

    printf("\nTem febre? (S/N) ");
    scanf(" %c", &febre);
    febre = toupper(febre);

    printf("Tem dor de cabeca? (S/N) ");
    scanf(" %c", &dor_cabeca);
    dor_cabeca = toupper(dor_cabeca);

    printf("Tem dor no corpo? (S/N) ");
    scanf(" %c", &dor_corpo);
    dor_corpo = toupper(dor_corpo);

    printf("Tem tosse? (S/N) ");
    scanf(" %c", &tosse);
    tosse = toupper(tosse);

    // Sugestoes com base em cada resposta

    if (febre == 'S' && dor_cabeca == 'S' && dor_corpo == 'S' && tosse == 'N'){
        printf("\nPossivel gripe.");
    } else if (tosse == 'S' && febre == 'S' && dor_cabeca == 'N' && dor_corpo == 'N'){
        printf("\nPossivel resfriado");
    } else if (febre == 'N' && dor_cabeca == 'S' && dor_corpo == 'N' && tosse == 'N'){
        printf("\nPossivel enxaqueca");
    } else if (febre == 'S' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N'){
        printf("\nConsulte um medico");
    } else if (febre == 'N' && dor_cabeca == 'N' && dor_corpo == 'N' && tosse == 'N'){
        printf("\nVoce parece estar bem");
    } else {
        printf("\nConsulte um medico para avaliacao");
    }
    
    return 0;

}