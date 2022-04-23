#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	
main() {
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	char nome[30];
	
	while (1) {	
	
	printf ("\n Digite o nome: ");
	gets (nome);
	
	printf ("\n Seu nome é: ");
	puts (nome);
	
}

}
