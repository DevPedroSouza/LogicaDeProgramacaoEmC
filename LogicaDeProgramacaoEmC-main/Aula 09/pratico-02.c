#include <stdio.h>

int main(){
    float valor[8];
    int i;
    float soma = 0.0f;
    float media;
    float valorMedia = 0.0f;
    for(i = 0; i < 8; i++){
        printf("digite o %d valor: ", i+1);
        scanf("%f", &valor[i]);
        soma += valor[i];
    }
    media = soma / 8;
    printf("A media eh: %.2f\n", media);

    valorMedia = media;
    printf("\nValores acima da media:\n");
    for(i =0; i < 8; i++){
        if(valor[i] > valorMedia){
            printf("Valor do aluno %d: %.2f\n", i+1, valor[i]);
        }
    }
    return 0;
}