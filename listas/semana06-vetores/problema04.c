#include <stdio.h>

int main() {
    int sugestoes[10]; 
    int ilhas_visitadas[10] = {0}; 
    int ilha_atual = 0; 
    
    for (int i = 0; i < 10; i++) {
        scanf("%i", &sugestoes[i]);
    }

    // Coloca a ilha 0 como visitada, sera o ponto de partida
    ilhas_visitadas[0] = 1;

    while (1) {
        // Determina a próxima ilha conforme a sugestão dos nativos
        int proxima_ilha = sugestoes[ilha_atual];
        
        // Verifica se a próxima ilha já foi visitada
        if (ilhas_visitadas[proxima_ilha] == 1) {
            printf("%i", proxima_ilha);
            break;
        }
        
        // Coloca a próxima ilha como visitada
        ilhas_visitadas[proxima_ilha] = 1;
        ilha_atual = proxima_ilha;
    }
    
    return 0;
}