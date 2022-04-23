#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    char nome [30];
    
    printf ("\n Digite a palavra: ");
	gets (nome);
	
	printf (" A quantidade de letras é: %d\n\n", strlen (nome));
		
		system ("pause");
    
}
