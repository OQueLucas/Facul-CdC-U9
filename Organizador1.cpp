#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A, B, C;
	
	printf ("\n Digite o primeiro n�mero: ");
	scanf ("%d", & A);
	printf ("\n Digite o segundo n�mero: ");
	scanf ("%d", & B);
	printf ("\n Digite o terceiro n�mero: ");
	scanf ("%d", & C);

	if (A<=B && B<=C)  
	printf("\n A ordem �: %d %d %d \n \n ", A, B, C);
	
		else if (A<=C && C<=B) 
		printf ("\n A ordem �: %d %d %d \n \n ", A, C, B);
		
			else if (B<=A && A<=C) 
			printf("\n A ordem �: %d %d %d \n \n ", B, A, C);
			
				else if (B<=C && C<=A) 
				printf ("\n A ordem �: %d %d %d \n \n ", B, C, A);
			
					else if (C<=A && A<=B) 
					printf ("\n A ordem �: %d %d %d \n \n ", C, A, B);

	system ("PAUSE");	
}
