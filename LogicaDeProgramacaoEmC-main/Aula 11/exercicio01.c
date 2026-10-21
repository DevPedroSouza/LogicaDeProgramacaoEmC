#include <stdio.h>

int main(void){
    int preco[6];
    int i, j, aux;

    //ler os seis preços
    for (i = 0; i<6; i++){
        scanf("%d", &preco[i]);
    }

    //Ordernar por Bublle Sort
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; i++){
            if(preco[j] > preco[j + 1]){
                aux = preco[j];
                preco[j] = preco[j + 1];
                preco[j + 1] = aux;
            }
        }
    }
    printf("Preco ordenados:\n");
    for (i=0; i < 6; i++){
        printf("%d", preco[i]);
        printf("\n");
    }
    printf("\n");
    return 0;
}