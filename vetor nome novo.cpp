#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	
main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	while (1) {	
	
	char nome[30];
	
	printf ("\n Digite o nome: ");
	scanf ("%s", &nome);
	
	printf (" /n/n O nome digitado foi: %s", nome);
	
}

}
