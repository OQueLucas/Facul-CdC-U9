#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	
main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	while (1) {	
	int num[8]= {10,8,9,10};
	
	int indice;
	
	printf ("\n digite a posição do vetor: ");
	scanf ("%d", & indice);
	
	printf (" O valor: %d\n", num[indice]);
	
}

}
