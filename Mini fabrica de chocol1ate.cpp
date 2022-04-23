#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
	setlocale (LC_ALL,"Portuguese_Brazil");
	int menu1, menu2, menu3, menu4;
	char tamanho, p, m, g;
	float preco;
	
	menu1=1;
	menu2=1;
	menu3=1;
	menu4=1;
	
	printf("	******************************************** \n");
	printf("	*  BEM VINDOS A MINI FABRICA DE CHOCOLATE! * \n");
	
	while (menu1>=4){	
	printf("	******************************************** \n	*  ESCOLHA O TIPO DE CHOCOLATE (CASCA):    * \n	******************************************** \n	*  1 - Ao leite                            * \n	*  2 - Branco                              * \n	*  3 - Meio amargo                         * \n	******************************************** \n");
	scanf("%d", & menu1);
}

	while(menu2>=6){
	printf("	******************************************** \n	*  ESCOLHA O TIPO DE RECHEIO:              * \n	******************************************** \n	*  1 - Brigadeiro                          * \n	*  2 - Doce de leite                       * \n	*  3 - Morango                             * \n	*  4 - Maracujá                            * \n	*  5 - Prestígio                           * \n	******************************************** \n");
	scanf("%d", & menu2);
}

	while(menu3>=4){
	printf("	******************************************** \n	*  ESCOLHA O TAMANHO:                      * \n	******************************************** \n	*  1 - 500g (pequeno)                      * \n	*  2 - 1Kg (médio)                         * \n	*  3 - 2Kg (grande)                        * \n	******************************************** \n");
	scanf("%", & menu3);
}

	while(menu4>=5){
	printf("	******************************************** \n	*  ESCOLHA A QUANTIDADE:                   * \n	******************************************** \n	*  1 - 1 ovo sem desconto                  * \n	*  2 - 2 ovos 10%% de desconto              * \n	*  3 - 3 ovos 15%% de desconto              * \n	*  4 - 4 ovos ou mais 20%% de desconto      * \n	******************************************** \n");
	scanf("%d", & menu4);
}
	if (menu1==1 && menu2==1 || menu2==2 && menu3==1)
	printf ("Valor é igual a R$ 30,00");
	
	else if (menu1==1 && menu2==3 || menu2==4 || menu2==5 && menu3==1)
	printf ("Valor é igual a R$ 32,00");
		
	else if (menu1==2 && menu2==1 || menu2==2 && menu3==1)
	printf ("Valor é igual a R$ 32,50",30 + 2);
	


	
	system("PAUSE");
}
