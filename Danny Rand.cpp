#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	
	int num1, num2;
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	printf ("\n	Digite um número: ");
	scanf ("%d", & num1);
	srand(time (NULL));
	num2=rand()%10;

		if (num1==num2)
		printf ("	Acertomizeravi, seu número era %d",num1);

			else {
			printf ("\n	Errou \n"); 
			printf ("	O numero correto era: %d", num2);
		}
			
			
	return (0);
		
	system ("pause");

}
