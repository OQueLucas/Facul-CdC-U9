#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int num1, num2, resposta;
	
	printf ("Digite o primeiro n�mero: ");
	scanf ("%d", &num1);
	
	printf ("Digite o segundo n�mero: ");
	scanf ("%d", &num2);
	
	num1 < num2 ? printf ("Sim\n") : printf ("N�o\n");

	system("pause");

}

