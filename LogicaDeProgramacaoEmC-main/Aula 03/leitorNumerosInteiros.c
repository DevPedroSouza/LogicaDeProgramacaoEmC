int main(){
    int num1, num2, soma, subtracao, multiplicacao;
    printf("Digite o primeiro Numero: ");
    scanf("%d", &num1);
    printf("Digite o Segundo Nuemro: ");
    scanf("%d", &num2);
    //Soma
    soma = num1 + num2;
    printf("A soma é %d\n: ", soma);
    
    //Subtração
    subtracao = num1 - num2;
    printf("a subtracao eh %d\n: ", subtracao);

    //Multiplicação
    multiplicacao = num1 * num2;
    printf("a subtracao eh %d\n", multiplicacao);
}