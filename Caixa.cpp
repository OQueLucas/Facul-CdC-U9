// Lucas Ferraz - 317103076
// Nathalia Pino - 317109473
// Lucas Queiroz - 317108787

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

	int id, senha, n1, cont, user, var, menu, cn20, cn50, cn100, menu1, n20, n50, n100, cn1002, cn502, cn202;
	float din;
	float saque, saldo;

	var = 2;
	menu = 3;
	n100 = 20;
	n50 = 40;
	n20 = 100;

	do	{

		system ("cls");

		printf("\n   ____                          _    _       _ ___ \n");
		printf("  |  _ \\                        | |  | |     (_) _ \\ \n");
		printf("  | |_) | __ _ _ __   ___ ___   | |  | |_ __  | (_) |\n");
		printf("  |  _ < / _` | '_ \\ / __/ _ \\  | |  | | '_ \\| \\__, |\n");
		printf("  | |_) | (_| | | | | (_| (_) | | |__| | | | | | / / \n");
		printf("  |____/ \\__,_|_| |_|\\___\\___/   \\____/|_| |_|_|/_/ \n\n");

		//	Adicionando identificação do usuário

		printf ("\n Digite sua identificação de acesso: ");
		scanf ("%d", & id);

		printf ("\n Aguarde enquanto conferimos seus dados.");
		Sleep(1500);
		
		//	Usuário não encontrado

		if (id != 1001 && id != 1002 && id != 1003) {
			printf ("\n\n Nenhum usuário encontrado.\n\n");
			system ("pause");
			cont=cont+1;
			return (n1);
		}

		printf ("\n \n Agora digite sua senha de acesso \n\n");
		printf (" Senha: ");
		scanf ("%d", & senha);

		printf ("\n Aguarde enquanto conferimos seus dados.");
		Sleep(1500);
		
		//	Senha não encontrada
		
		if (senha != 1357 && senha != 2468 && senha != 4321) {
			printf ("\n\n Senha invalida.\n\n");
			system ("pause");
			cont=cont+1;
			return (n1);
		}

		//	Conferindo identificação Huguinho

		if (id == 1001 && senha == 1357) {

			din = 1000.00;

			system ("cls");

			printf ("\n\n Acesso concedido. Logando na sua conta.");

			Sleep(1500);

			system ("cls");
			printf ("\n Bem vindo Huguinho");
		}

		//	Conferindo identificação Maria

		else if (id == 1002 && senha == 2468) {

			din = 5000.00;

			system ("cls");

			printf ("\n\n Acesso concedido. Logando na sua conta.");

			Sleep(1500);

			system ("cls");

			printf ("\n Bem vindo Maria");
		}

		//	Conferindo identificação Zezinho

		if (id == 1003 && senha == 4321) {

			din = 2000.00;

			system ("cls");

			printf ("\n\n Acesso concedido. Logando na sua conta.");

			Sleep(1500);

			system ("cls");

			printf ("\n Bem vindo Zezinho");
		}

		// menu

		while (menu) {

			cn20 = 0;
			cn50 = 0;
			cn100 = 0;

			printf ("\n\n =====================================\n");
			printf (" | Selecione uma das opções a seguir |\n");
			printf (" | 1 - Saldo                         |\n");
			printf (" | 2 - Saque                         |\n");
			printf (" =====================================");
			printf ("\n\n >> ");
			scanf ("%d",& user);

			switch (user) {

				case 1:
					printf (" Saldo: R$%.2f\n\n", din);
						printf ("\n\n Deseja voltar ao Menu anterior? 1 - sim / 0 - Encerrar operação\n >> ");
						scanf ("%d", & var);
					
					if (var == 0) {
						return(menu);
						break;
					} else
						break;

				case 2:

					printf (" \n");
					printf ("Notas disponiveis : \n");
					printf (" R$100 - R$50 - R$20 \n");
					printf ("\n Digite a quantia que prentende ser sacada: ");
					scanf ("%f", & saque);

					printf ("\n Saldo anterior: R$%.2f\n", din);

					din = din - saque;

					printf ("\n Valor sacado: R$%.2f\n", saque);
					printf ("\n Saldo atual: R$%.2f\n", din);

					// Lógica do contador de notas

					while (saque >= 100 && n100 >= 1) {
						saque = saque - 100;
						cn100++;
						n100--;
					}
					
					while (saque >= 50 && n50 >= 1) {
						saque = saque - 50;
						cn50++;
						n50--;
					}
					while (saque >= 20 && n20 >= 1) {
						saque = saque - 20;
						cn20++;
						n20--;
					}

					printf ("\n Notas sacadas: \n >> %d notas de R$ 100 \n >> %d notas de R$ 50 \n >> %d notas de R$ 20", cn100, cn50, cn20);
					printf ("\n\n Notas disponíveis: \n >> %d notas de R$ 100 \n >> %d Notas de R$ 50 \n >> %d Notas de R$ 20", n100, n50, n20);

					printf ("\n\n Deseja voltar ao Menu anterior? 1 - sim / 0 - Encerrar operação\n >> ");
						scanf ("%d", & var);
					}
					if (var == 0) {
						return(menu);
					} else
						break;
			
		}

	//	Excedidas as tentativas

	if (cont > 2) {

		printf ("\n Limite de tentativas excedido. Converse com seu Gerente! \n \n");
		return 0;

	}

} while (n1);

}
