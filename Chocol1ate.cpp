#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()

{
	setlocale(LC_ALL,"Portuguese_Brazil");
	int casca,recheio,quantidade, tamanho,n1,n2,n3,n4,cont;
	float preco;
	n1=1;
	n2=1;
	n3=1;
	n4=1;
	cont=0;
	
	printf("	******************************************** \n");
	printf("	*  BEM VINDOS A MINI FABRICA DE CHOCOLATE! * \n");
	
	while(n1){	
	printf("	******************************************** \n");
	printf("	*  ESCOLHA O TIPO DE CHOCOLATE (CASCA):    * \n");
	printf("	******************************************** \n");
	printf("	*  1 - Ao leite                            * \n");
	printf("	*  2 - Branco                              * \n");
	printf("	*  3 - Meio amargo                         * \n");
	printf("	******************************************** \n");
	scanf("%d",&casca);
	
	if(casca==1 || casca==2 || casca==3){
	printf("	Próximo passo... \n \n");
	n1=0;
	}
	else{
	printf("	Código Inválido. \n \n");
	}
	}
	
	while(n2){
	printf("	******************************************** \n");
	printf("	*  ESCOLHA O TIPO DE RECHEIO:              * \n");
	printf("	******************************************** \n");
	printf("	*  1 - Brigadeiro                          * \n");
	printf("	*  2 - Doce de leite                       * \n");
	printf("	*  3 - Morango                             * \n");
	printf("	*  4 - Maracujá                            * \n");
	printf("	*  5 - Prestígio                           * \n");
	printf("	******************************************** \n");
	scanf("%d",&recheio);
	
	if(recheio==1 || recheio==2 || recheio==3 || recheio==4 || recheio==5){
	printf("	Próximo passo... \n \n");
	n2=0;
	}
	else{
	printf("	Código Inválido. \n \n");
	}
	} 
	
	while(n3){
	printf("	******************************************** \n");
	printf("	*  ESCOLHA O TAMANHO:                      * \n");
	printf("	******************************************** \n");
	printf("	*  1 - 500g (pequeno)                      * \n");
	printf("	*  2 - 1Kg (médio)                         * \n");
	printf("	*  3 - 2Kg (grande)                        * \n");
	printf("	******************************************** \n");
	scanf("%d",&tamanho);
	
	if(tamanho==1 || tamanho==2 || tamanho==3){
	printf("	Próximo passo... \n \n");
	n3=0;
	}
	else{
	printf("	Código Inválido. \n \n");
	}
	}
	
	while(n4){
	printf("	******************************************** \n");
	printf("	*  ESCOLHA A QUANTIDADE:                   * \n");
	printf("	******************************************** \n");
	printf("	*  1 - 1 ovo sem desconto                  * \n");
	printf("	*  2 - 2 ovos 10%% de desconto             * \n");
	printf("	*  3 - 3 ovos 15%% de desconto             * \n");
	printf("	*  4 - 4 ovos ou mais 20%% de desconto     * \n");
	printf("	******************************************** \n");
	
	if(quantidade==1 || quantidade==2 || quantidade==3 || quantidade==4){
	printf("	Próximo passo... \n \n");
	n4=0;
	}
	else{
	printf("	Código Inválido. \n \n");
	}
	break;
	cont=cont+1;
	}
	

	
	system("PAUSE");

}


