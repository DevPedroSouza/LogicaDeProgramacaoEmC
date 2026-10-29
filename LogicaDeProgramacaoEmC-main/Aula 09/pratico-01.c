#include <stdio.h>

int main(){
    int salario[4];
    int i;
    for(i =0; i<4; i++){
        printf("Digite o %d salario: ", i+1);
        scanf("%d", &salario[i]);
        
    }
    printf("-----Funcionarios Media-----\n");
    for(i =0; i<4; i++){
        printf("funcionario %d: R$%d\n", i+1, salario[i]);
    }
    return 0;
}