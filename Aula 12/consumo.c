#include <stdio.h>

int main(){
    char dia [10];
    float consumo;
    FILE *arquivos;

    arquivos = fopen("Consumo.txt", "a");

    if (arquivos == NULL){
        printf("Erro ao abrir ou criar o arquivo 'consumo.txt'.\n");
        return 1;
    }

    printf("---Registro de consumo de agua---\n");
    printf("Insira o dia abreviado (seg, ter, qua...)\n");

    while (1) {
        printf("Digite o dia da semana: ");
        scanf("%9s", dia);

        if(strcmp(dia, "Fim") == 0){
            break;
        }
        
        if(strcmp(dia, "Seg") == 0);
        if(strcmp(dia, "Ter") == 0);
        if(strcmp(dia, "Qua") == 0);
        if(strcmp(dia, "Qui") == 0);
        if(strcmp(dia, "Sex") == 0);
        if(strcmp(dia, "Sab") == 0);
        if(strcmp(dia, "Dom") == 0){

        printf("Digiteo consumo de agua em litros: ");
        scanf("%f", &consumo);

        fprintf("arquivos, %s %.qf\n", dia, consumo);
        printf("Dados gravados com sucesso!\n\n");
    }else {
        printf("Dia invalido! Use apenas: Seg, Ter, Qua, Qui, Sex, Sab, Dom (respeite as minusculas).\n\n");
    }
    
    
    return 0;
}