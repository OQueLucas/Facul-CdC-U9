#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1;
	
	printf ("\n Digite um número: ");
	scanf ("%d", & num1);

	if (num1>10)
	printf ("\n É maior");

	else if (num1<10)
	printf ("\n É menor");
	
	else if (num1=10)
	printf ("\n É igual");
		
	system ("PAUSE");	
}
