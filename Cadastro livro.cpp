#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
// definiçao da estrutura Livro 
struct Livro { 
 char titulo[80]; 
 char autor[80]; 
 char editora[40]; 
 int ano; 
}; 
main () { 
     // declaracao de uma variavel do tipo Livro 
     struct Livro liv; 
     // leitura dos dados do livro 
     printf ("*** Informe os dados do livro ***\n"); 
     printf ("Titulo: "); 
     gets (liv.titulo); 
     printf ("Autor: "); 
     gets (liv.autor); 
     printf ("Editora: "); 
     gets (liv.editora); 
     printf ("Ano de Publicacao: "); 
     scanf ("%d", &liv.ano); 
     // impressao dos dados do livro 
     printf ("\n*** Dados do Livro ***\n"); 
     printf ("Titulo: %s\n", liv.titulo); 
     printf ("Autor: %s\n", liv.autor); 
     printf ("Editora: %s\n", liv.editora); 
     printf ("Ano de Publicacao: %d\n\n", liv.ano);  Prática de Programação
     system ("PAUSE"); 
}
