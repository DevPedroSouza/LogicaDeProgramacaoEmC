//Desenvolva um programa que imprima todos os números inteiros de 1 até 100 em ordem crescente utilizando um laço 'for'.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_CTYPE, "");
    for (int i = 1; i <= 100; i++){
        if(i == 100){
            printf("núemro 100 alcançado com sucesso!\n");
            continue;
        }
        printf("contagem: %d\n", i);
    }
    printf("codigo fora do loop\n");
    return 0;
}