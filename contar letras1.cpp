#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int tamanho;
	
    char palavra [30];
    
    printf ("\n Digite a palavra: ");
	gets (palavra);
	
	tamanho = strlen (palavra);
	
	printf (" A quantidade de letras é: %d\n\n", tamanho);
	puts (palavra);
		
		system ("pause");
    
}
