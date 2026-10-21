#include <stdio.h>

int main(){
    int soma = 0;
    int produto[3][4];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &produto[i][j]);
            printf("Digite a qte do %d produto no %d dia", i+1, j+1);
            soma += produto[i][j];
        }
    }
    int totalProd01 = 0;
    int totalProd03 = 0;
    printf("Produto %d: %d unidade\n", i+1, produto[i][j]);
    return 0;
}