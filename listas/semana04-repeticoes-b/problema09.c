#include <stdio.h>


int main(){

    float preco_fornecedor1, preco_fornecedor2;
    float quantia_disponivel;
    float custo, resto, menor_resto;
    int indice_primeiro = 0, indice_segundo = 0;
    

    printf("\nDigite a quantia disponivel para compra: R$ ");
    scanf("%f", &quantia_disponivel);

    printf("Digite o preco do primeiro fornecedor: R$ ");
    scanf("%f", &preco_fornecedor1);

    printf("Digite o preco do segundo fornecedor: R$ ");
    scanf("%f", &preco_fornecedor2);

    printf("\n");

    // Menor resto inicia com o valor total disponivel para a compra
    menor_resto = quantia_disponivel;

    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){

            custo = (i * preco_fornecedor1 + j * preco_fornecedor2);

            if (quantia_disponivel >= custo){
                resto = quantia_disponivel - custo;

                // Verifica se o resto atual é menor o anterior
                if (resto < menor_resto){
                    menor_resto = resto;
                    indice_primeiro = i;
                    indice_segundo = j;
                }
            }
        }
    }

    printf("Resta menos comprando %i do primeiro e %i do segundo ",indice_primeiro, indice_segundo);

    return 0;
}