// Desenvolva um programa que leia números inteiros continuamente até que o usuário digite o valor 0 (flag de parada), exibindo a soma total dos valores lidos.
#include <stdio.h>

int main (){
    int num, soma = 0;
   do{
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &num);
        soma += num;
    } while(num != 0);
    printf("A soma total dos valores lidos e: %d\n", soma); 

    return 0;
}