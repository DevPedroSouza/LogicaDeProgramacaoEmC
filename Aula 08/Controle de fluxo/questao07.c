//Faça um programa que leia 10 valores inteiros do usuário e exiba quantos deles são números negativos.
#include <stdio.h>

int main(){
    int cont = 0;
    for(int i = 1; i <= 10; i++){
        int num;
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if(num < 0){
            printf("O numero %d é negativo.\n", num);
            cont++;
        }
        }
    printf("Quantidade de numeros negativos: %d\n", cont);
    return 0;
}