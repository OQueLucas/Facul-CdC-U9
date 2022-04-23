#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"portuguese_brazil");
    
	float etanol, gasolina, quantidade;
	int combustivel;
	
		printf("\n Digite o preco  do litro do Etanol: \n > ");
			scanf("%f", &etanol);
		printf("\n Digite o preco do litro da Gasolina: \n > ");
			scanf("%f", &gasolina);
			
		if(gasolina * 0.70 <= etanol){
			printf("\n A gasolina é mais viável para o seu caso\n");
			printf("\n Digite o combustivel desejado\n 1 Gasolina\n 2 Etanol\n\n > ");
				scanf("%d", &combustivel);
				
			switch(combustivel){
				
				case 001: 
					printf("\n Digite a quantidade de Litros que deseja abastecer: \n >");
						scanf("%f", &quantidade);
							printf("\n Litros de Gasolina abastecidos :\n %f", quantidade);
								printf("\n Valor a  pagar: %f\n", gasolina * quantidade);
							break;
							
				case 002: 
					printf("\n Digite a quantidade de Litros que deseja abastecer: \n >");
						scanf("%f", &quantidade);
							printf("\n Litros de Etanol abastecidos :\n %f", quantidade);
								printf("\n Valor a  pagar: %f", etanol * quantidade);
								break;
			}	
		} else {
					printf("\n O Etanol é mais viável para o seu caso\n");
							printf("\n Digite o combustivel desejado\n 1 Gasolina\n 2 Etanol\n\n > ");
								scanf("%d", &combustivel);
								
			switch(combustivel){
				printf("\n O etanol é mais viável para o seu caso\n");
				
				case 001: 
					printf("\n Digite a quantidade de Litros que deseja abastecer: \n >");
						scanf("%f", &quantidade);
							printf("\n Litros de Gasolina abastecidos:\n %.2f", quantidade);
								printf("\n Valor a  pagar: %.2f", gasolina * quantidade);
									break;
				
				case 002: 
					printf("\n Digite a quantidade de Litros que deseja abastecer: \n >");
						scanf("%f", &quantidade);
							printf("\n Litros de Etanol abastecidos:\n %.2f", quantidade);
								printf("\n Valor a  pagar: %.2f\n", etanol * quantidade);
									break;
			}	
		}
}
