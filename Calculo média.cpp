#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float num1[5];
	float media;

	printf ("\n\n	Digite a Nota: ");
	scanf ("%f", & num1[0]);
	printf ("\n	Digite a Nota: ");
	scanf ("%f", & num1[1]);
	printf ("\n	Digite a Nota: ");
	scanf ("%f", & num1[2]);
	printf ("\n	Digite a Nota: ");
	scanf ("%f", & num1[3]);
	printf ("\n	Digite a Nota: ");
	scanf ("%f", & num1[4]);
	media = ((num1[0] + num1[1] + num1[2] + num1[3] + num1[4])/5);
	printf ("\n	A m�dia �: %.2f\n\n", media);
	
	if (media < 7)
	printf ("	Voc� repetiu seu BOSTA!\n\n");
	
	else
	printf ("	Parab�ns, n�o fez mais que sua obriga��o!\n\n");
		
	system ("pause");

}
