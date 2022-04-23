#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
    char nome [30], nome2[30];
    
    int i;
    	
    printf ("\n\n Digite um nome de aluno: ");
    scanf ("%s", & nome [i]);
    
    printf ("\n\n Digite um nome de aluno: ");
    scanf ("%s", & nome [i]);
    
    for (i = 0; i < 2; i++) {
    	
    if (nome [i] == nome2 [i])
    printf ("\n Nomes são iguais.\n\n");
    
    else if (nome [i] != nome2 [i])
	printf ("\n Nomes não coincidem.\n\n");
	
    }
    
    system ("pause");
    
}
