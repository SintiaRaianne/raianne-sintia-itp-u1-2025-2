#include <stdio.h>
#include <math.h>

int main() {
    int tabuleiro[4][4];
    int i, j, k, l;
    int m, n;
    int solucoes = 0;

    printf("Solucoes para o problema das 8 rainhas:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {
                for (l = 0; l < 4; l++) {
                    
                    // Verifica se rainhas estão em linhas diferentes
                    if (i == j || i == k || i == l || j == k || j == l || k == l) {
                        continue;
                    }

                    // Verifica se as rainhas estao em diagonais diferentes
                    if (abs(i - j) == abs(0 - 1) ||  
                        abs(i - k) == abs(0 - 2) ||  
                        abs(i - l) == abs(0 - 3) ||  
                        abs(j - k) == abs(1 - 2) ||  
                        abs(j - l) == abs(1 - 3) ||  
                        abs(k - l) == abs(2 - 3)) {  
                        continue;  
                    }

                    // Limpa o tabuleiro para nao misturar as solucoes
                    for (m = 0; m < 4; m++) {
                        for (n = 0; n < 4; n++) {
                            tabuleiro[m][n] = 0;
                        }
                    }

                    // Coloca as rainhas no tabuleiro para imprimir 
                    tabuleiro[i][0] = 1;
                    tabuleiro[j][1] = 1;
                    tabuleiro[k][2] = 1;
                    tabuleiro[l][3] = 1;

                    // Clacula a quantidade de possiveis solucoes e imprime 
                    solucoes++;
                    printf("\nSolucao %i:\n", solucoes);
                    
                    for (m = 0; m < 4; m++) {
                        for (n = 0; n < 4; n++) {
                            if (tabuleiro[m][n] == 1) {
                                printf("R ");
                            } else {
                                printf(". ");
                            }
                        }
                        printf("\n");
                    }
                    printf("\n");
                }
            }
        }
    }

    printf("Numero de solucoes encontradas: %i", solucoes);
    return 0;
}