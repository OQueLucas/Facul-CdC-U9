#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1;
	
	printf ("\n Digite um n�mero: ");
	scanf ("%d", & num1);

	if (num1>10)
	printf ("\n � maior");

	else if (num1<10)
	printf ("\n � menor");
	
	else if (num1=10)
	printf ("\n � igual");
		
	system ("PAUSE");	
}
