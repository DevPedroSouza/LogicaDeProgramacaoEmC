int quantidade (){
	int quantidadeManha;
	int quantidadeTarde;
    int total;
	printf("Quantidade recebida pela manha? ");
	scanf("%d", &quantidadeManha);
	printf("Quantidade recebida pela tarde? ");
	scanf("%d", &quantidadeTarde);
	
	total= quantidadeManha+quantidadeTarde;
	printf("Total de produtos recebido no dia: %d", total);
	return 0;
}