#include <stdio.h>  
#include <stdlib.h>    
#include <locale.h>

// defini��o da estrutura Data  
struct Data {   
     int dia, mes, ano;   
};   
 
main () {  
	setlocale (LC_ALL, "Portuguese_Brazil");

    // declaracao de uma variavel da estrutura   
    struct Data umaData; 
    
    // leitura do campo dia
    printf ("\n Dia: "); 
    scanf ("%d", &umaData.dia); 
    
    // leitura do campo mes
    printf ("\n M�s: "); 
    scanf ("%d", &umaData.mes); 
    
    // leitura do campo ano
    printf ("\n Ano: "); 
    scanf ("%d", &umaData.ano); 
    
    // impress�o da tada informada
	printf ("\n*** Data Informada ***\n");  
    printf (" %d / %d / %d\n\n", umaData.dia, umaData.mes, umaData.ano); 
    
	system ("PAUSE");
}
