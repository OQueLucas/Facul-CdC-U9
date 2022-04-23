#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <ctype.h>

main()
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	int casca, recheio, quantidade;
	char tamanho;
	float preco;
	
	printf("\n	-------------------------------------------- \n");
	printf("	|  BEM VINDOS A MINI FABRICA DE CHOCOLATE! | \n ");
	printf("	-------------------------------------------- \n \n");
		
	printf("	-------------------------------------------- \n");
	printf("	|  ESCOLHA O TIPO DE CHOCOLATE (CASCA):    | \n");
	printf("	-------------------------------------------- \n");
	printf("	|  1 - Ao leite                            | \n");
	printf("	|  2 - Branco                              | \n");
	printf("	|  3 - Meio amargo                         | \n");
	printf("	-------------------------------------------- \n \n	");
	scanf("%d", & casca);
	
	switch (casca)
	{
		case 1:
			printf ("	Ao leite \n \n");
		break;

		case 2:
			printf ("	Branco \n \n ");
		break;
		
		case 3:
			printf ("	Meio amargo \n \n");
		break;
		
		default:
			printf ("	Valor não encontrado \n \n");
		break;
	}
	
	printf("	-------------------------------------------- \n");
	printf("	|  ESCOLHA O TIPO DE RECHEIO:              | \n");
	printf("	-------------------------------------------- \n");
	printf("	|  1 - Brigadeiro                          | \n");
	printf("	|  2 - Doce de leite                       | \n");
	printf("	|  3 - Morango                             | \n");
	printf("	|  4 - Maracujá                            | \n");
	printf("	|  5 - Prestígio                           | \n");
	printf("	-------------------------------------------- \n \n	");
	scanf("%d", & recheio);
	
	switch (recheio)
	{
		case 1:
			printf ("	Brigadeiro \n \n");
		break;

		case 2:
			printf ("	Doce de Leite \n \n");
		break;
		
		case 3:
			printf ("	Morango \n \n");
		break;
		
		case 4:
			printf ("	Maracujá \n \n");
		break;
		
		case 5:
			printf ("	Prestígio \n \n");
		break;
		
		default:
			printf ("	Valor não encontrado \n \n");
	}
	
	printf("	-------------------------------------------- \n");
	printf("	|  ESCOLHA O TAMANHO:                      | \n");
	printf("	-------------------------------------------- \n");
	printf("	|  P - 500g (pequeno)                      | \n");
	printf("	|  M - 1Kg (médio)                         | \n");
	printf("	|  G - 2Kg (grande)                        | \n");
	printf("	-------------------------------------------- \n \n	");
	scanf(" %c", & tamanho);
	
	tamanho=toupper(tamanho);
	
	switch (tamanho)
	{
		case 'P':
			printf ("	500g (pequeno) \n \n");
		break;

		case 'M':
			printf ("	1Kg (médio) \n \n");
		break;
		
		case 'G':
			printf ("	2Kg (grande) \n \n");
		break;
		
		default:
			printf ("	Valor não encontrado \n \n");
		break;
	}
			
	printf("	-------------------------------------------- \n");
	printf("	|  ESCOLHA A QUANTIDADE:                   | \n");
	printf("	-------------------------------------------- \n");
	printf("	|  1 - 1 ovo sem desconto                  | \n");
	printf("	|  2 - 2 ovos 10%% de desconto             | \n");
	printf("	|  3 - 3 ovos 15%% de desconto             | \n");
	printf("	|  4 - 4 ovos ou mais 20%% de desconto     | \n");
	printf("	-------------------------------------------- \n \n	");
	scanf("%d", & quantidade);
	
	switch (quantidade)
	{
		case 1:
			printf ("	sem desconto \n \n");
		break;

		case 2:
			printf ("	10%% de desconto \n \n");
		break;
		
		case 3:
			printf ("	15%% de desconto \n \n");
		break;
		
		case 4:
			printf ("	20%% de desconto \n \n");
		break;
		
		default:
			printf ("	Valor não encontrado \n \n");	
		break;
	}
	
	// Tamanho Pequeno

	if (casca==1 && (recheio==1 || recheio==2) && tamanho=='p')
	preco=30.00;
	
		else if (casca==2 && (recheio==1 || recheio==2) && tamanho=='p')
		preco=32.50;

			else if (casca==3 && (recheio ==1 || recheio==2) && tamanho=='p')
			preco=35.00;
	
				else if (casca==1 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='p')
				preco=32.00;
	
					else if (casca==2 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='p')
					preco=34.50;
	
						else if (casca==3 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='p')
						preco=37.00;
	
	//	Tamanho Médio
						
	if (casca==1 && (recheio==1 || recheio==2) && tamanho=='m')
	preco=60.00;
	
		else if (casca==2 && (recheio==1 || recheio==2) && tamanho=='m')
		preco=65.00;

			else if (casca==3 && (recheio ==1 || recheio==2) && tamanho=='m')
			preco=70.00;
	
				else if (casca==1 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='m')
				preco=64.00;
	
					else if (casca==2 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='m')
					preco=69.00;
	
						else if (casca==3 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='m')
						preco=74.00;
	
	// Tamanho Grande
						
	if (casca==1 && (recheio==1 || recheio==2) && tamanho=='g')
	preco=120.00;
	
		else if (casca==2 && (recheio==1 || recheio==2) && tamanho=='g')
		preco=130.00;

			else if (casca==3 && (recheio ==1 || recheio==2) && tamanho=='g')
			preco=140.00;
	
				else if (casca==1 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='g')
				preco=128.00;
	
					else if (casca==2 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='g')
					preco=138.00;
	
						else if (casca==3 && (recheio==3 || recheio==4 || recheio==5) && tamanho=='g')
						preco=148.00;
	
	// Calculo dos preços de produtos
	
	if (quantidade == 1)
	preco == preco;
	
		else if (quantidade == 2)
		preco == (preco * 2) * 0.9;
	
			else if (quantidade == 3)
			preco == (preco * 3) * 0.85;
	
				else if (quantidade == 4)
				preco == (preco * 4) * 0.80;
	
	printf ("	O valor do seu(s) Ovo(s) é: R$ %.2f \n \n", preco);
	
	
	system("PAUSE");

}
