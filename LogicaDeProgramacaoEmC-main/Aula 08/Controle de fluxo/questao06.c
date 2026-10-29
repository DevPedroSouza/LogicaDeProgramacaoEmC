//Crie um algoritmo que leia 10 números inteiros fornecidos consecutivamente pelo usuário e calcule a soma acumulada de todos eles.
#include <stdio.h>

int main() {
    int i, num, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num;
    }

    printf("A soma acumulada dos números é: %d\n", soma);
    return 0;
}