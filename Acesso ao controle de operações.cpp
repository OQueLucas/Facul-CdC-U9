#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int cod, senha, n1, cont;
	
	n1= 1;
		
	while(n1)	{

		printf ("\n Digite seu código de acesso: ");
		scanf ("%d", & cod);
		printf ("\n Digite aqui sua senha: ");
		scanf ("%d", & senha);
					
			if (cod == 317108787 && senha == 7725){
			printf ("\n Acesso concedido. \n Seja bem vindo ao sistema de controle de operações, Agente de Operações Especiais SkyLord! \n \n");
			n1=0;
			}
			
			else {
			cont=cont+1;
			
			
			if (cont > 3) {
			
				printf ("\n Limite de tentativas excedido, acesso definitivamente bloquado! \n Atenção a contagem regressiva de autodestruição. \n \n");
			return 0;
			
		}
			
			else {
			printf ("\n Acesso negado. Digite novamente! \n");
		}

	}
}
	system ("color 0b");
}
