#include <stdio.h>

int main(){
    int salario[6];
    int i;
    for(i =0; i<6; i++){
        printf("Digite o %d salario: ", i+1);
        scanf("%d", &salario[i]);
    }
    int soma = 0;
    for(i = 0; i < 6; i++){
        soma += salario[i];
    }
    
    float menorSalario = salario[0];
    for(i = 1; i < 6; i++){
        if(salario[i] < menorSalario){
            menorSalario = salario[i];
            printf("O menor salario e R$%.2f\n", menorSalario);
        }
    }
    float maiorSalario = salario[0];
    for(i = 1; i < 6; i++){ 
        if(salario[i] > maiorSalario){
            maiorSalario = salario[i];
            printf("O maior salario e R$%.2f\n", maiorSalario);
        }
    }

    float media = (float)soma / 6;
    printf("A media dos salarios e R$%.2f\n", media);
    
    return 0;
}