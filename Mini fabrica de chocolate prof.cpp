#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main()
{
	int casca,recheio,quantidade;
	float preco,precocasca,precorecheio,precotamanho,precofinal,desconto, toupper;
	char tamanho;
	setlocale(LC_ALL,"Portuguese_Brazil");
	while(1)
	{
	system("cls");
	printf("Digite o tipo de chocolate: \n 1-Ao leite\n 2-Branco \n 3-Meio-amargo\n");
	scanf("%d",&casca);
	printf("Digite o tipo de recheio: \n 1-Brigadeiro\n 2-Doce de leite \n 3-Morango \n 4-Maracujá \n 5-Prestígio\n");
	scanf("%d",&recheio);	
	printf("Digite o tamanho do ovo: \n P-Pequeno\n M-Médio \n G-Grande\n");
	scanf(" %c",&tamanho);
	tamanho=toupper(tamanho);
	printf("Digite a quantidade: \n");
	scanf("%d",&quantidade);
    //verifica o tipo de chocolate-casca escolhido
	if (casca==1) 
		precocasca=30.00;
	if (casca==2)
		precocasca=32.50;
   	if (casca==3)
		precocasca=35.00;
    //verifica o tipo de recheio escolhido	
	if (recheio==1 || recheio==2) 
		precorecheio=0.00;
	if (recheio==3 || recheio==4 ||recheio==5 )
		precorecheio=2.00;
    //verifica o tamanho escolhido
	if (tamanho=='P') 
		precotamanho=precocasca+precorecheio;
	if (tamanho=='M')
		precotamanho=(precocasca*2)+(precorecheio*2);
   	if (tamanho=='G')
		precotamanho=(precocasca*4)+(precorecheio*4);
    //verifica a quantidade escolhida para aplicar o desconto
	if (quantidade==1) 
		desconto=0;
	if (quantidade==2)
		desconto=0.10;
   	if (quantidade==3)
		desconto=0.15;
	if (quantidade>=4)
		desconto=0.20;
	//calcula os preços 
	preco=(precotamanho*quantidade);
	precofinal=preco-(preco*desconto);
	//exibe os preços
	printf("O preço da unidade sem desconto: R$ %.2f\n",precotamanho);	
	printf("O preço sem desconto: R$ %.2f\n",preco);	
	printf("O desconto total é de %d%%: R$ %.2f\n",(int)(desconto*100),preco*desconto);	
	printf("O preço final com desconto: R$ %.2f\n",precofinal);
    system ("pause");
  }
}
