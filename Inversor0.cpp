#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A, B, C;
	
	printf ("\n Digite o valor de A: ");
	scanf ("%d", & A);
	printf ("\n Digite o valor de B: ");
	scanf ("%d", & B);
	
	C=A;
	A=B;
	B=C;
	
	printf("\n Esse é o novo valor de A:%d \n", A);
	printf("\n Esse é o novo valor de B:%d \n \n", B);
		
	system ("PAUSE");	
}
