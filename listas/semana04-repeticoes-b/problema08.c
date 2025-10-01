#include <stdio.h>


int main(){

    float preco_fornecedor1, preco_fornecedor2;
    float quantia_disponivel;
    float custo, resto;
    

    printf("\nDigite a quantia disponivel para compra: R$ ");
    scanf("%f", &quantia_disponivel);

    printf("Digite o preco do primeiro fornecedor: R$ ");
    scanf("%f", &preco_fornecedor1);

    printf("Digite o preco do segundo fornecedor: R$ ");
    scanf("%f", &preco_fornecedor2);

    // Analisa todas as combinacoes possiveis de compra dos dois fornecedores
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){

            custo = (i * preco_fornecedor1 + j * preco_fornecedor2);

            if (quantia_disponivel >= custo){
                resto = quantia_disponivel - custo;

                printf("Comprando %i do primeiro e %i do segundo resta: %f \n", i, j, resto);

            }
        }
    }

    return 0;

}