#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	FILE *pont_arq1, *pont_arq2, *pont_arq3, *pont_arq4, *pont_arq5;
	char pergunta1[100] = "   Quanto é 2 + 2?\n   1 - Dois\n   2 - Quatro\n   3 - Um\n   4 - Zero\n\n";
	char pergunta2[100] = "   Quanto é 4 + 4?\n   1 - Dois\n   2 - Quatro\n   3 - Oito\n   4 - Um\n\n";
	char pergunta3[100] = "   Quanto é 8 + 8?\n   1 - Dois\n   2 - Oito\n   3 - Quatro\n   4 - Dezesseis\n\n";
	char pergunta4[100] = "   Quanto é 16 + 16?\n   1 - Trinta e dois\n   2 - Dezesseis\n   3 - Oito\n   4 - Quatro\n\n";
	char pergunta5[100] = "   Quanto é 32 + 32?\n   1 - Trinta e dois\n   2 - Sessenta e quatro\n   3 - Dezesseis\n   4 - Oito\n\n";
	int resposta1 = 0, resposta2 = 0, resposta3 = 0, resposta4 = 0, resposta5 = 0;
    
    setlocale(LC_ALL,"portuguese_brazil");
    
	pont_arq1 = fopen("pergunta1.txt", "w");
	pont_arq2 = fopen("pergunta2.txt", "w");
	pont_arq3 = fopen("pergunta3.txt", "w");
	pont_arq4 = fopen("pergunta4.txt", "w");
	pont_arq5 = fopen("pergunta5.txt", "w");

	fprintf(pont_arq1, "%s", pergunta1);
	fprintf(pont_arq2, "%s", pergunta2);
	fprintf(pont_arq3, "%s", pergunta3);
	fprintf(pont_arq4, "%s", pergunta4);
	fprintf(pont_arq5, "%s", pergunta5);

	fclose(pont_arq1);
	fclose(pont_arq2);
	fclose(pont_arq3);
	fclose(pont_arq4);
	fclose(pont_arq5);

	pont_arq1 = fopen("pergunta1.txt", "r");
	pont_arq2 = fopen("pergunta2.txt", "r");
	pont_arq3 = fopen("pergunta3.txt", "r");
	pont_arq4 = fopen("pergunta4.txt", "r");
	pont_arq5 = fopen("pergunta5.txt", "r");

						printf ("\n  -----------------------------------------\n");
						printf("  | Bem vindo ao Show do Milhão da Globo! |\n");
						printf ("  -----------------------------------------\n\n");

	printf("   Primeira pergunta, valendo R$ 1.000:\n\n");
	while (fgets(pergunta1, 100, pont_arq1) != NULL)
	{
		printf("%s", pergunta1);
	}
	scanf("%d", &resposta1);

	if (resposta1 == 2)
	{
		system("cls");
		printf("\n   Você acertou!\n\n   Próxima pergunta, valendo R$ 100.000:\n\n");
		while (fgets(pergunta2, 100, pont_arq2) != NULL)
		{
			printf("%s", pergunta2);
		}
		scanf("%d", &resposta2);

		if (resposta2 == 3)
		{
			system("cls");
			printf("\n   Acertou novamente!\n\n   Próxima pergunta, valendo R$ 250.000:\n\n");
			while (fgets(pergunta3, 100, pont_arq3) != NULL)
			{
				printf("%s", pergunta3);
			}
			scanf("%d", &resposta3);

			if (resposta3 == 4)
			{
				system("cls");
				printf("\n   Acertou!\n\n   Próxima pergunta, valendo R$ 500.000:\n\n");
				while (fgets(pergunta4, 100, pont_arq4) != NULL)
				{
					printf("%s", pergunta4);
				}
				scanf("%d", &resposta4);

				if (resposta4 == 1)
				{
					system("cls");
					printf("\n   Você acertou!\n\n   Última pergunta, valendo R$ 1.000.000:\n\n");
					while (fgets(pergunta5, 100, pont_arq5) != NULL)
					{
						printf("%s", pergunta5);
					}
					scanf("%d", &resposta5);

					if (resposta5 == 2)
					{
						system("cls");
						printf ("\n  ---------------------------------------------\n");
						printf ("  | Loucura, loucura, loucura!                |\n");
						printf("  | Parabéns!!! Você ganhou o R$ 1.000.000!!! |\n");
						printf ("  ---------------------------------------------\n");
						return 0;
					}
					else
					{
						system("cls");
						printf ("\n  ------------------------------------------------\n");
						printf("  | Você errou. Mas ganhou R$ 500.000! Bom jogo! |\n");
						printf ("  ------------------------------------------------\n");
						return 0;
					}
				}
				else
				{
					system("cls");
						printf ("\n  --------------------------------------------------\n");
						printf("  | Você errou. Mas ganhou R$ 250.000! Bom jogo!!! |\n");
						printf ("  --------------------------------------------------\n");
					return 0;
				}
			}
			else
			{
				system("cls");
						printf ("\n  --------------------------------------------------\n");
						printf("  | Você errou. Mas ganhou R$ 100.000! Bom jogo!!! |\n");
						printf ("  --------------------------------------------------\n");
				return 0;
			}
		}
		else
		{
			system("cls");
						printf ("\n  ------------------------------------------------\n");
						printf("  | Você errou. Mas ganhou R$ 1.000! Bom jogo!!! |\n");
						printf ("  ------------------------------------------------\n");
			return 0;
		}
	}
	else
	{
		system("cls");
						printf ("\n  ----------------------------------------------------\n");
						printf("  | Você perdeu o jogo não ganhou nada. Fim de jogo. |\n");
						printf ("  ----------------------------------------------------\n");
		return 0;
	}

	fclose(pont_arq1);
	fclose(pont_arq2);
	fclose(pont_arq3);
	fclose(pont_arq4);
	fclose(pont_arq5);

	return 0;
}
