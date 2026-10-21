//Faça um programa que execute uma contagem regressiva de 10 até 0 usando 'do-while', imprimindo ao final a mensagem 'Fim da contagem!'.
#include <stdio.h>
 int main() {
    int i = 10;

    do {
        printf("%d\n", i);
        i--;
    } while (i >= 0);

    printf("Fim da contagem!\n");
    return 0;
}