int main() {
	int a = 10;
	int b =3;
	int resultado_soma;
	int resultado_comp;
	//Aritimético e Atribuição
	resultado_soma=a+b;
	printf("Soma:%d\n", resultado_soma);
	//Resto da divisão
	printf("Resto de 10 por 3:%\n", a%b);
	//Relacional
	resultado_comp=(a>b);
	printf("A eh maior que B?%d (1 para sim, 0 para nao)\n", resultado_comp);
	//Lógico 
	if (a > 5 && b<5) {
		printf("Ambas as condiçoes são verdadeiras!\n");
	}
	return 0;
}