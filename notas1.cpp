#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char nome[5][50];
	float nota [5][3];
	float soma [5];
	float media [5];
	int i,j;
	
	for (i = 0; i < 5; i++) 
	{	
		printf ("\n Digite um nome: ");
		fflush(stdin);
		gets (nome [i]);
	
		for (j = 0; j < 3; j++) 
		{
			printf (" Digite a nota %d: ", j);
			fflush(stdin);
			scanf ("%f", & nota [i] [j]);
	
	soma [i] = soma [i] + nota [i] [j];
	
	media [i] = soma [i] / 3;
	}
	

	printf ("\n Média do %s: %.2f \n\n", nome, media [i]);
	
	system ("PAUSE");
		
system ("cls");

}

	printf ("\n Média do %s: %.2f\n", nome [0], media [0]);
	printf ("\n Média do %s: %.2f\n", nome [1], media [1]);
	printf ("\n Média do %s: %.2f\n", nome [2], media [2]);
	printf ("\n Média do %s: %.2f\n", nome [3], media [3]);
	printf ("\n Média do %s: %.2f\n", nome [4], media [4]);
	
}
