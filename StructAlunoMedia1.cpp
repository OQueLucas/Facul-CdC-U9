#include <stdio.h>  
#include <stdlib.h>    
#include <locale.h>
 
struct Aluno {   
     
	int RA;   
   	float Nota1, Nota2;
   	float Media;
   	char Nome [30];

};

main () {  

	setlocale (LC_ALL, "Portuguese_Brazil");	          
        
    struct Aluno umAluno[3]; 
    
    for (int i = 1; i < 4; i++) {
    
    printf ("\n Informação do %dº aluno\n", i);
    
    printf ("\n RA: "); 
    scanf ("%d", &umAluno[i].RA); 
    
    printf ("\n Nome: "); 
    scanf ("%s", &umAluno[i].Nome); 
    
    printf ("\n Nota1: "); 
    scanf ("%f", &umAluno[i].Nota1);
    
    printf ("\n Nota2: "); 
    scanf ("%f", &umAluno[i].Nota2);
    
    umAluno[i].Media = (umAluno[i].Nota1 + umAluno[i].Nota2) / 2 ;
    
}
    
	printf ("\n*** Informações do 1º Aluno ***\n");
    printf (" RA: %d \n Nome: %s \n Nota1: %.1f / Nota2: %.1f / Media: %.1f \n\n", umAluno[1].RA, umAluno[1].Nome, umAluno[1].Nota1,umAluno[1].Nota2,umAluno[1].Media); 
    
    printf ("\n*** Informações do 2º Aluno ***\n");
    printf (" RA: %d \n Nome: %s \n Nota1: %.1f / Nota2: %.1f / Media: %.1f \n\n", umAluno[2].RA, umAluno[2].Nome, umAluno[2].Nota1,umAluno[2].Nota2,umAluno[2].Media); 
    
    printf ("\n*** Informações do 3º Aluno ***\n");
    printf (" RA: %d \n Nome: %s \n Nota1: %.1f / Nota2: %.1f / Media: %.1f \n\n", umAluno[3].RA, umAluno[3].Nome, umAluno[3].Nota1,umAluno[3].Nota2,umAluno[3].Media); 
        
	system ("PAUSE");
}
