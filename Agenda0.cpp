#include <stdio.h>  
#include <stdlib.h>    
#include <locale.h>
 
struct Agenda {   
        
	int Telefone, i;
	char Email[100];
	char Nome [60];

};

main () {  

	setlocale (LC_ALL, "Portuguese_Brazil");

    struct Agenda umaAgenda;
    
    for (int i = 1; i < 4; i++) {
    	
    printf ("\n Código %d", i);
    
    printf ("\n Nome: ");
    scanf ("%s", &umaAgenda.Nome);
    
    printf ("\n Email: ");
    scanf ("%s", &umaAgenda.Email);
    
    printf ("\n Telefone: ");
    scanf ("%f", &umaAgenda.Telefone);
    
}
    
    printf ("\n ** Agenda **");
    printf ("\n\n Nome: %s", umaAgenda.Nome);
    printf ("\n Email: %s", umaAgenda.Email);
    printf ("\n Telefone: %d\n\n", umaAgenda.Telefone);
    
	system ("PAUSE");
}
