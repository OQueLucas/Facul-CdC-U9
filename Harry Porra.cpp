#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    char nome [30];
    
    printf ("\n Qual o animal do Expecto Patronum do Harry Potter: ");
	gets (nome);
    
		if (strcmp (nome, "cervo") == 0)
		puts ("\n Resposta correta.\n\n");

		else
		puts ("\n Vá ler os livros.\n\n");
	
    system ("pause");
    
}
