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
			printf ("\n Caderno \n \n");
			break;
		case 002:
			printf ("\n Lapis \n \n");
			break;
		case 003:
			printf ("\n Borracha \n \n");
			break;
		case 004:
			printf ("\n Mochila \n \n");
			break;
		case 005:
			printf ("\n Estojo \n \n");
			break;
		case 006:
			printf ("\n Lapiseira \n \n");
			break;
		case 7:
			printf ("\n Peladinho \n \n");
			break;
		case 8:
			printf ("\n Branquinho \n \n");
			break;
		case 9:
			printf ("\n Douglas \n \n");
			break;						
		default:
			printf ("\n Código não encontrado \n \n");					
		
	}
	
	system ("PAUSE");
	
}
