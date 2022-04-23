#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main() {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int codigo;
	printf ("\n Digite o código: ");
	scanf("%d", &codigo);
	
	switch (codigo) {
	
		case 001:
			printf ("\n Janeiro \n \n");
			break;
		case 002:
			printf ("\n Fevereiro \n \n");
			break;
		case 003:
			printf ("\n Março \n \n");
			break;
		case 004:
			printf ("\n Abril \n \n");
			break;
		case 005:
			printf ("\n Maio \n \n");
			break;
		case 006:
			printf ("\n Junho \n \n");
			break;
		case 7:
			printf ("\n Julho \n \n");
			break;
		case 8:
			printf ("\n Agosto \n \n");
			break;
		case 9:
			printf ("\n Setembro \n \n");
			break;						
		case 10:
			printf ("\n Outubro \n \n");
			break;		
		case 11:
			printf ("\n Novembro \n \n");
			break;		
		case 12:
			printf ("\n Dezembro \n \n");
			break;		
		default:
			printf ("\n Eu sou o Douglas, Voce não é o Douglas \n \n");					
		
	}
	
	system ("PAUSE");
	
}
