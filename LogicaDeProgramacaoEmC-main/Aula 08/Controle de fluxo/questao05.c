// Elabore um programa que calcule e imprima a soma de todos os números inteiros contidos no intervalo de 1 até N, onde N é informado pelo usuário
#include <stdio.h>

int main(){
    int N, soma =0, i;
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    if(N < 1) {
        printf("Numero invalido. Por favor, digite um numero inteiro positivo.\n");
    } else {
        for(i = 1; i <= N; i++) {
            soma += i;
        }
        printf("A soma de todos os numeros inteiros de 1 ate %d e: %d\n", N, soma);
    }
    return 0;
}