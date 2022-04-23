#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int id, senha, n1, cont;

	n1 = 1;

	while (n1)	{

//		Adicionando identificação do usuário

		printf ("\n Digite sua identificação de acesso: ");
		scanf ("%d", & id);

		printf ("Aguarde enquanto conferimos seus dados.");
		Sleep(1500);

//		Conferindo identificação

		switch (id)
		
//		Acesso Huguinho

		case 1001:

		printf ("Aguarde enquanto conferimos seus dados.");
		Sleep(1500);

		printf ("\n \n Agora digite sua senha de acesso \n");

		printf ("\n Digite aqui sua senha: ");
		scanf ("%d", & senha);

		if (senha == 1357) {
			printf ("Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			printf ("\n Acesso concedido. Logando na sua conta.");
			printf ("\n \n Bem vindo Huguinho");
		}
		
		else if (senha != 1357) {
		printf ("\n Acesso negado. Digite novamente! \n");
		cont=cont+1;
		}
		
//		Acesso Maria

		case 1002:

		printf ("Aguarde enquanto conferimos seus dados.");
		Sleep(1500);

		printf ("\n \n Agora digite sua senha de acesso \n");

		printf ("\n Digite aqui sua senha: ");
		scanf ("%d", & senha);

		if (senha == 2468) {
			printf ("Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			printf ("\n Acesso concedido. Logando na sua conta.");
			printf ("\n \n Bem vindo Maria");
		}
		
		else if (senha != 2468) {
		printf ("\n Acesso negado. Digite novamente! \n");
		cont=cont+1;
		}
		
//		Acesso Zezinho

		case 1003:

		printf ("Aguarde enquanto conferimos seus dados.");
		Sleep(1500);

		printf ("\n \n Agora digite sua senha de acesso \n");

		printf ("\n Digite aqui sua senha: ");
		scanf ("%d", & senha);

		if (senha == 4321) {
			printf ("Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			printf ("\n Acesso concedido. Logando na sua conta.");
			printf ("\n \n Bem vindo Zezinho");
		}
		
		else if (senha != 4321) {
		printf ("\n Acesso negado. Digite novamente! \n");
		cont=cont+1;
		}

	}
	
//		Excedidas as tentativas

	if (cont > 3) {

		printf ("\n Limite de tentativas excedido.Converse com seu Gerente! \n \n");
		return 0;

	}

//		Tentatica negada

	else {
		printf ("\n Acesso negado. Digite novamente! \n");
	}

}
