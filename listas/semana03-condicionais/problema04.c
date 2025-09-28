#include <stdio.h>
#include <ctype.h>

int main() {

    char jogada1, jogada2;

    // toupper padroniza para maiúsculo

    printf("\nJogada do jogador 1 (P: pedra, A: papel, T: tesoura): ");
    scanf(" %c", &jogada1);
    jogada1 = toupper(jogada1);

    printf("Jogada do jogador 2 (P: pedra, A: papel, T: tesoura): ");
    scanf(" %c", &jogada2);
    jogada2 = toupper(jogada2);

    // Verifica o que cada jogador jogou e quem vence ou se da empata

    if (jogada1 == jogada2){
        printf("Empate!");
    }
    
    else if ((jogada1 == 'P' && jogada2 == 'T') || (jogada1 == 'T' && jogada2 == 'A') || (jogada1 == 'A' && jogada2 == 'P')){
        printf("Jogador 1 vence!");
    } 
    
    else if ((jogada1 == 'T' && jogada2 == 'P') || (jogada1 == 'A' && jogada2 == 'T') || (jogada1 == 'P' && jogada2 == 'A')){
        printf("Jogador 2 vence!");
   }

    return 0;

}