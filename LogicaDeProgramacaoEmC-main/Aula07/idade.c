#include <stdio.h>

int main() {
    int idade;
    printf("digite sua idade: ");
    scanf("%d", &idade);
    if(idade<=16){
        printf("não eleitor");
    } else if (idade>=18 ||idade <=69) {
        printf("eleitor obrigatorio");
    } else if (idade >=16 && idade <= 17 || idade >=70){
        printf("Eleitor opcional");
    } 
    return 0;
}