#include <stdio.h>

int main() {

    int n;
    int respostas_gabarito[20];
    int respostas_aluno[20];
    int acertos = 0;
    
    scanf("%i", &n);

    if (n < 1 || n > 20){
        // Encerra se n nao estiver entre 1 e 20.
        return 1;
    }
    // Recebe as respostas do gabaito e valida
    for (int i = 0; i < n; i++){
        scanf("%i", &respostas_gabarito[i]);
        if (respostas_gabarito[i] < 1 || respostas_gabarito[i] > 5){
            return 1;
        }
    }
    // Recebe as respostas do aluno e valida
    for (int j = 0; j < n; j++){
        scanf("%i", &respostas_aluno[j]);
        if (respostas_aluno[j] < 1 || respostas_aluno[j] > 5){
            return 1;
        }
    }
    // Conta os acertos
    for (int k = 0; k < n; k++){
        if (respostas_aluno[k] == respostas_gabarito[k]){
            acertos++;
        }
    }

    if (acertos == 1){
        printf("%i acerto ", acertos);
    } else {
        printf("%i acertos ", acertos);
    } 

    return 0;

}
