#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
// definição da estrutura Data 
struct Data {   
      int dia, mes, ano; 
};
// definição da estrutura Endereco
struct Endereco {  
      char rua[100];  
      char numero[10];  
      char bairro[30];
}; 
// definição da estrutura Pessoa 
struct Pessoa {    
      char nome[80];  
      struct Endereco endereco; 
      struct Data dataNasc; 
};
main () {  
      // declaração da variavel do tipo Pessoa   
      struct Pessoa umaPessoa;
      // leitura do nome   
      printf ("\n Nome: ");  
      gets (umaPessoa.nome);   
      // leitura do endereco  
      printf (" Rua: ");  
      gets (umaPessoa.endereco.rua);   
      printf (" Numero: ");
      gets (umaPessoa.endereco.numero);  
      printf (" Bairro: ");    
      gets (umaPessoa.endereco.bairro);
      // leitura da data de nascimento    
      printf (" Dia: ");   
      scanf ("%d", &umaPessoa.dataNasc.dia);  
      printf (" Mes: ");  
      scanf ("%d", &umaPessoa.dataNasc.mes);
      printf (" Ano: ");
      scanf ("%d", &umaPessoa.dataNasc.ano); 
      // impressao dos dados da pessoa  
      printf ("\n\n *** Dados da Pessoa *** \n");   
      printf (" Nome: ");   
      puts (umaPessoa.nome);  
      printf (" Endereco: %s, ", umaPessoa.endereco.rua); 
      printf ("%s - ", umaPessoa.endereco.numero);  
      printf ("%s\n", umaPessoa.endereco.bairro);
      printf (" Data de Nascimento: %d/%d/%d\n\n", umaPessoa.dataNasc.dia, umaPessoa.dataNasc.mes, umaPessoa.dataNasc.ano);
      system ("PAUSE");   
} 
