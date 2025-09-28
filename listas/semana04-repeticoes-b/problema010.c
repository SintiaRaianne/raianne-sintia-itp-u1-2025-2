#include <stdio.h>


int main(){

    float p, q;
    int x, y;
    float valor_venda, valor_producao;
    float melhor_promocao = 0;
    int indice_primeiro = 0, indice_segundo = 0;
    float razao;
    

    printf("\nDigite o preco de venda p: R$ ");
    scanf("%f", &p);

    printf("Digite o preco de producao q: R$ ");
    scanf("%f", &q);

    printf("\n");

    for (x = 1; x <= 10; x++){
        for (y = 1; y < x; y++){
            valor_venda = y * p;
            valor_producao = x * q;

            if (valor_venda >= valor_producao){
                razao = (float)x / y;
                if (razao > melhor_promocao){
                    melhor_promocao = razao;
                    indice_primeiro = x;
                    indice_segundo = y;
                }
            }
        }

    } 
    
    if (melhor_promocao > 0) {
        printf("A melhor promocao eh: leve %i pague %i",indice_primeiro, indice_segundo);
    } else {
        printf("\nNenhuma promocao foi encontrada sem causar prejuizo a empresa.");
    }
    
    return 0;

}