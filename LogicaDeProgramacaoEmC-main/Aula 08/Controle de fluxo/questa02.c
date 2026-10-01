//Crie um algoritmo que utilize um laço 'while' para exibir todos os números pares situados no intervalo de 1 a 50
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 50) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

    printf("Codigo fora do loop executado.\n");
    return 0;
}