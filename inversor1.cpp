#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int num, cifra;

	printf ("Digite um número: ");
	scanf ("%d", &num);
	
	if (num >=0) {
		do {
			cifra = num % 10;
			printf ("%d", cifra);
			num /= 10;
		} while (num != 0);
		printf ("\n");
	}
	else if (num < 1){
		num = num * -1;
		
		printf ("-");
		
		do {
			cifra = num % 10;
			printf ("%d", cifra);
			num /= 10;
		} while (num != 0);
		printf ("\n");
	}


	system("pause");

}

