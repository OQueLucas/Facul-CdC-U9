#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    char nome [30], nome2 [30];
    
    int i;
    
    puts ("\n\n Digite um nome de aluno: ");
	gets (nome);
    
    printf ("\n\n Digite um nome de aluno: ");
	gets (nome2);
    
		if (strcmp (nome, nome2) == 0)
		puts ("\n Nomes s�o iguais.\n\n");

		else
		puts ("\n Nomes n�o coincidem.\n\n");
	
    system ("pause");
    
}
