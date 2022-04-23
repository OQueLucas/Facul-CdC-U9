#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int num1, num2, resposta;
	
	printf ("Digite o primeiro número: ");
	scanf ("%d", &num1);
	
	printf ("Digite o segundo número: ");
	scanf ("%d", &num2);
	
	num1 < num2 ? printf ("Sim\n") : printf ("Não\n");

	system("pause");

}

