#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media_aritmetica;
    float nota_final;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media_aritmetica = ((nota1 + nota2 + nota3) / 3.0);
    
    printf("\nMedia Aritmetica: %.2f\n", media_aritmetica);

    // Verifica a situacao do aluno pela sua media

    if (media_aritmetica < 4.0){
        printf("Situacao: Reprovado");

    } else if (media_aritmetica < 7.0){

        printf("Situacao: Recuperacao");

        // Calcula qual nota precisa tirar na prova final para ser aprovado

        nota_final = (5.0 * 2) - (media_aritmetica);
        
        printf("\nO aluno precisa tirar %.2f na prova final para ser aprovado. ", nota_final);

    } else{
        printf("Situacao: Aprovado");
    }
    
    return 0;
    
}

