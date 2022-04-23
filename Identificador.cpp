#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1;
	
	printf ("\n Digite o primeiro número: ");
	scanf ("%d", & num1);
	if (num1>10)
	printf ("\n É maior \n \n");
	else if (num1<10)
		printf ("\n É menor \n \n");
		else if (num1=10)
			printf ("\n É igual \n \n");
		
	system ("PAUSE");	
}
