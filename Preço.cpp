#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float p, s;
	s = 0;
	do {
		printf ("\n \n	Preco: ");
		scanf ("%f", &p);
		system ("cls");
		s = s + p;
		printf ("\n \n	Total: %.2f\n", s);
	} while (p != 0);
	
}
