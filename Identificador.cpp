#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1;
	
	printf ("\n Digite o primeiro n�mero: ");
	scanf ("%d", & num1);
	if (num1>10)
	printf ("\n � maior \n \n");
	else if (num1<10)
		printf ("\n � menor \n \n");
		else if (num1=10)
			printf ("\n � igual \n \n");
		
	system ("PAUSE");	
}
