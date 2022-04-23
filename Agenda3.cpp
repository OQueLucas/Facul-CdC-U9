#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
struct Agenda {   
        
	int Telefone;
	int DDD;
	char Email[100];
	char Nome [60];

};

main () {  
	
	int n1, g, h, i;
	int contador = 1;
	
	i = 1;
	
	g = 2;
	
	setlocale (LC_ALL, "Portuguese_Brazil");
    	
    inicio:

    struct Agenda umaAgenda[i];
	
	printf ("\n Código %d", i);
    
    printf ("\n\n Nome: ");
    scanf ("%s", &umaAgenda[i].Nome);
    
    printf ("\n Email: ");
    scanf ("%s", &umaAgenda[i].Email);
    
    printf ("\n Contato: ");
    printf ("\n\n DDD: ");
    scanf ("%d", &umaAgenda[i].DDD);
    
    printf ("\n Telefone: ");
    scanf ("%d", &umaAgenda[i].Telefone);
    
    printf ("\n Deseja adicionar outra agenda? 1 - sim / 0 - não \n >> ");
    scanf ("%d", & h);
    
    if (h == 1){
    i++;
    goto inicio;
}
    
    printf ("\n ** Agenda %d **", i);
    printf ("\n\n Nome: %s", umaAgenda[i].Nome);
    printf ("\n Email: %s", umaAgenda[i].Email);
    printf ("\n Contato: (%d) %d\n\n", umaAgenda[i].DDD, umaAgenda[i].Telefone);
    contador++;
    

    
	system ("PAUSE");
	
}
