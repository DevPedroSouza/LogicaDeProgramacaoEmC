//Escreva um programa que leia um número inteiro positivo e apresente a sua tabuada completa de multiplicação de 1 a 10.

#include <stdio.h>

int main(){
    int num, i;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Numero invalido. Por favor, digite um numero positivo.\n");
    } else {
        printf("Tabuada de %d:\n", num);
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }
    return 0;
}
