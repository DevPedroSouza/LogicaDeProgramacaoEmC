//Crie um programa que receba um número inteiro positivo N e exiba os N primeiros números ímpares positivos
#include <stdio.h>

int main(){
   int N;
   pintf("Digite um número inteiro positivo: ");
   scanf("%d", &N);
   for(int i =1; i <= N; i++){
        printf("%d\n", 2*i - 1);
   }
   return 0;
}