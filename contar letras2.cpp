#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int tamanho, c, conta;
	
    char palavra [30];
    
    conta = 0;
    
    printf ("\n Digite a palavra: ");
	gets (palavra);
	
	tamanho = strlen (palavra);
	
	printf (" A quantidade de letras é: %d\n\n", tamanho);
	
	
	for (c = 0; c < tamanho; c++) {
		
		if (palavra [c] == 'a')
		conta = conta + 1;
		
	}
	
	printf (" A palavra possui %d letras 'a'\n\n", conta);

	system ("pause");
    
}
