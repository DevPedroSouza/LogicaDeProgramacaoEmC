#include <stdio.h>

int main(){
    float nota;
    do
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &nota);

        if(nota< 0.0 | nota >10.0){
            printf("Erro, Nota invalida!\n");
        }
    } while (nota < 0 || nota >10.00);
    
    printf("nota valida!");

    return 0;
}