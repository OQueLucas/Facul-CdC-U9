#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n1;
	
	n1=1;
	
	while(n1)
	{
	printf ("\n Olá mundo!");
	printf ("\n Deseja continuar? 1 - Sim / 0 - Não : ");
	scanf ("%d", & n1);
	}
}
