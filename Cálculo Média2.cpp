#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int i;
	float num1[5];
	float media, somador;
	
	for (i = 0; i < 5; i++) {
	printf ("\n\n	Digite a Nota: ");
	scanf ("%f", & num1[i]);
	somador = somador + num1[i];
	printf ("	SOMA DA NOTA: %.0f\n\n", somador);
	
}
	media = somador / 5;
	printf ("\n	A m�dia �: %.2f\n\n", media);

	
	if (media < 7)
	printf ("	Voc� repetiu seu BOSTA!\n\n");
	
	else
	printf ("	Parab�ns, n�o fez mais que sua obriga��o!\n\n");
		
	system ("pause");

}
