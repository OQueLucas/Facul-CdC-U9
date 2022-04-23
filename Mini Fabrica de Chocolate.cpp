#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main() {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n1, recheio, quantidade;
	char casca, tamanho;
	float preco, desconto, precofinal, recheioextra;
	
	1==30;
	2==32.5;
	3==35;
	
	printf ("\n BEM VINDO A MINI FÁBRICA DE CHOCOLATE! \n Monte abaixo o produto ao seu gosto.");
	
	printf ("\n \n Tipos de Chocolates (casca): \n 	L - Ao leite \n	B - Branco \n 	A - Meio amargo");
	printf ("\n Escolha seu chocolate favorito: ");
	scanf (" %c", & casca);
	
	printf ("\n \n Tipos de recheios: \n 	1 - Brigadeiro \n 	2 - Doce de Leite \n 	3 - Morango \n 	4 - Maracujá \n 	5 - Prestígio");
	printf("\n Escolha seu recheio favorito: ");
	scanf ("%d", & recheio);
	
	printf ("\n \n Tamanho dos Chocolates \n 	P - Pequeno (500gr) \n	M - Médio (1kg) \n 	G - Grande (2kg)");
	printf ("\n Escolha o tamanho desejado: ");
	scanf (" %c", & tamanho);
	
	printf ("\n \n Quantidade: \n 	1 - Ovo \n 	2 - Ovos (10% desc.) \n 	3 - Ovos(15% desc.) \n 	4 - Ovos ou mais (20% desc.)");
	printf("\n Insira a quantidade desejada: ");
	scanf ("%d", & quantidade);	
	
	
	
	
	
	system("\n \n \n pause");
}
