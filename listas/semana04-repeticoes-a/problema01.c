#include <stdio.h>

int main() {

    float comprimento_folha, largura, comprimento_bolso, maior_lado;
    int dobras = 0;

    printf("\nDigite o comprimeiro da folha: ");
    scanf("%f", &comprimento_folha);

    printf("Digite a largura da folha: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do bolso: ");
    scanf("%f", &comprimento_bolso);

    // Enquanto os dois lados forem maiores que o bolso, dobra o maior lado
    while (comprimento_folha > comprimento_bolso && largura > comprimento_bolso){

        // Quantidade de dobras realizadas 
        dobras = dobras + 1;

        // Dobra o maior lado 
        if(comprimento_folha > largura){
            comprimento_folha = (comprimento_folha / 2);
        } else {
            largura = (largura / 2);
        } 
    }

        printf("\nComprimento final da folha: %.2f\nLargura final da folha: %.2f\nComprimento do bolso: %.2f", comprimento_folha, largura, comprimento_bolso);

        printf("\nQuantidade de dobras necessarias: %i", dobras);

    return 0;

}