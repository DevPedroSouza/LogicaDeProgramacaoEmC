#include <stdio.h>

int main(void){
    int pontos[5];
    int i, j, aux;

    //le os 5 pontos
    for(i = 0; i < 5; i++){
        scanf("%d", &pontos[i]);
    }

    //orderanar os Bubble Sort
    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if (pontos[j] < pontos[j + 1]){
                aux = pontos[j];
                pontos[j] = pontos[j + 1];
                pontos[j + 1] = aux;
            }
        }
    }
    printf("Pontos oredenados:\n");
    for(i = 0; i < 5; i++){
        printf("%d ", pontos[i]);
    }
    printf("\n");
    return 0;
}