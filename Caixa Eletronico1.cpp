// Lucas Ferraz - 317103076
// Nathalia Pino - 317109473
// Lucas Queiroz - 317108787

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int id, senha, n1, cont, user;
	float huguinho, maria, zezinho;
	float saque, saldo;

	n1 = 1;
	maria = 5000.00;
	huguinho = 1000.00;
	zezinho = 2000.00;

	printf("  ____                          _    _       _ ___ \n");
	printf(" |  _ \\                        | |  | |     (_) _ \\ \n");
	printf(" | |_) | __ _ _ __   ___ ___   | |  | |_ __  | (_) |\n");
	printf(" |  _ < / _` | '_ \\ / __/ _ \\  | |  | | '_ \\| \\__, |\n");
	printf(" | |_) | (_| | | | | (_| (_) | | |__| | | | | | / / \n");
	printf(" |____/ \\__,_|_| |_|\\___\\___/   \\____/|_| |_|_|/_/ \n\n");

	while (n1)	{

		//	Adicionando identificação do usuário

		printf ("\n Digite sua identificação de acesso: ");
		scanf ("%d", & id);

		printf ("\n Aguarde enquanto conferimos seus dados.");
		Sleep(1500);

		//	Conferindo identificação Huguinho

		if (id == 1001) {
			printf ("\n \n Agora digite sua senha de acesso \n\n");
			printf (" Senha: ");
			scanf ("%d", & senha);

			printf ("\n Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			if (senha == 1357) {

				system ("cls");
				
				printf ("\n\n Acesso concedido. Logando na sua conta.");

				Sleep(1500);

				system ("cls");

				printf ("\n Bem vindo Huguinho\n\n");

				printf (" =====================================\n");
				printf (" | Selecione uma das opções a seguir |\n");
				printf (" | 1 - Saldo                         |\n");
				printf (" | 2 - Saque                         |\n");
				printf (" =====================================");
				printf ("\n\n ");
				scanf ("%d",& user);

				switch (user) {

					case 1:
						printf (" Saldo: R$%.2f\n\n", huguinho);

						break;

					case 2:

						printf ("\n Digite a quantia que prentende ser sacada: ");
						scanf ("%f", & saque);

						printf ("\n Saldo anterior: R$%.2f\n", huguinho);

						huguinho = huguinho - saque;

						printf ("\n Valor sacado: R$%.2f\n", saque);
						printf ("\n Saldo atual: R$%.2f\n\n", huguinho);

						break;
				}
			}
			system ("pause");

			system ("cls");

		}

		//	Conferindo identificação Maria

		if (id == 1002) {
			printf ("\n \n Agora digite sua senha de acesso \n\n");
			printf (" Senha: ");
			scanf ("%d", & senha);

			printf ("\n Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			if (senha == 2468) {

				system ("cls");
				
				printf ("\n\n Acesso concedido. Logando na sua conta.");

				Sleep(1500);

				system ("cls");

				printf ("\n Bem vindo Maria\n\n");

				printf (" =====================================\n");
				printf (" | Selecione uma das opções a seguir |\n");
				printf (" | 1 - Saldo                         |\n");
				printf (" | 2 - Saque                         |\n");
				printf (" =====================================");
				printf ("\n\n ");
				scanf ("%d",& user);

				switch (user) {

					case 1:
						printf (" Saldo: R$%.2f\n\n", maria);

						break;

					case 2:

						printf ("\n Digite a quantia que prentende ser sacada: ");
						scanf ("%f", & saque);

						printf ("\n Saldo anterior: R$%.2f\n", maria);

						maria = maria - saque;

						printf ("\n Valor sacado: R$%.2f\n", saque);
						printf ("\n Saldo atual: R$%.2f\n\n", maria);

						break;
				}
			}
			system ("pause");

			system ("cls");

		}
		}

		//	Conferindo identificação Zezinho

		if (id == 1003) {
			printf ("\n \n Agora digite sua senha de acesso \n\n");
			printf (" Senha: ");
			scanf ("%d", & senha);

			printf ("\n Aguarde enquanto conferimos seus dados.");
			Sleep(1500);

			if (senha == 4321) {

				system ("cls");
				
				printf ("\n\n Acesso concedido. Logando na sua conta.");

				Sleep(1500);

				system ("cls");

				printf ("\n Bem vindo Zezinho\n\n");

				printf (" =====================================\n");
				printf (" | Selecione uma das opções a seguir |\n");
				printf (" | 1 - Saldo                         |\n");
				printf (" | 2 - Saque                         |\n");
				printf (" =====================================");
				printf ("\n\n ");
				scanf ("%d",& user);

				switch (user) {

					case 1:
						printf (" Saldo: R$%.2f\n\n", zezinho);

						break;

					case 2:

						printf ("\n Digite a quantia que prentende ser sacada: ");
						scanf ("%f", & saque);

						printf ("\n Saldo anterior: R$%.2f\n", zezinho);

						zezinho = zezinho - saque;

						printf ("\n Valor sacado: R$%.2f\n", saque);
						printf ("\n Saldo atual: R$%.2f\n\n", zezinho);

						break;
				}
			}
			system ("pause");

			system ("cls");

		}
		}

		//	Usuário não encontrado

		else if (id != 1001 and id != 1002 and id != 1003) {
			printf ("\n\n Nenhum usuário encontrado.\n\n");
			cont=cont+1;
		}

		else if (senha != 1357 and senha != 2468 and senha != 4321) {
			printf ("\n\n Senha invalida.\n\n");
			cont=cont+1;
		}

		//	Excedidas as tentativas

		if (cont > 2) {

			printf ("\n Limite de tentativas excedido. Converse com seu Gerente! \n \n");
			return 0;

		}

	}
}
