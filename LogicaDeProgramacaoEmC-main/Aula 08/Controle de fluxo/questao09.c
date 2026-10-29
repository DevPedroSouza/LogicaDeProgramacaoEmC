//Escreva um algoritmo que imprima todos os números múltiplos de 3 compreendidos entre 1 e 100
#include <stdio.h>

int main(){
    for(int i =1; i<=100; i++){
        if(i % 3 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}