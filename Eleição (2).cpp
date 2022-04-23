#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int voto, medieval, nazismo, comunismo, branco, nulo;
	float total, percentual;
	
	medieval=0;
	nazismo=0;
	comunismo=0; 
	branco=0; 
	nulo=0;
	
	do {
		
	system ("cls");
	
	printf ("\n \n	--------------------- \n");
	printf ("	| Candidatos        | \n");
	printf ("	--------------------- \n");
	printf ("	*********************\n");
	printf ("	--------------------- \n");
	printf ("	| 1 - Medieval      | \n");
	printf ("	| 2 - Nazismo       | \n");
	printf ("	| 3 - Comunismo     | \n");
	printf ("	| 4 - Branco        | \n");
	printf ("	| 5 - Nulo          | \n");
	printf ("	--------------------- \n \n");
	
	printf ("	Digite aqui o número de seu candidato: ");
	scanf ("%d", & voto);
	
	switch (voto)
	{
	
		case 1: {
		printf ("	Você votou em: %d \n \n 	Deseja confirmar seu voto? ", voto);
		medieval=medieval+1;
		break;
		}
			case 2: {
			printf ("	Você votou em: %d \n 	Deseja confirmar seu voto? \n", voto);
			nazismo=nazismo+1;
		break;
			}
				case 3: {
				printf ("	Você votou em: %d \n 	Deseja confirmar seu voto? \n", voto);
				comunismo=comunismo+1;
		break;
				}
					case 4: {
					printf ("	Você votou em: %d \n 	Deseja confirmar seu voto? \n", voto);
					branco=branco+1;
		break;
					}
						case 5: {
						printf ("	Você votou em: %d \n 	Deseja confirmar seu voto? 'v' ou 'f' \n", voto);
						nulo=nulo+1;
		break;
						}
							default: {
							printf ("	Candidato não encontrado. Coloque um número válido. \n \n");
		break;
							}
	
	}
	} while (voto);
	
		system ("cls");
	
	total=medieval+nazismo+comunismo+branco+nulo;
		
	printf ("\n \n	Votos em Medieval: %d \n \n", medieval);
	
	printf ("	Votos em Nazismo: %d \n \n", nazismo);
	
	printf ("	Votos em Comunismo: %d \n \n", comunismo);
	
	printf ("	Votos em Branco: %d \n \n", branco);
	
	printf ("	Votos Nulos: %d \n \n", nulo);
	
	printf ("	Total de Votos: %.0f \n \n", total);
	
	printf ("	Percentual de votos Mediaval: %.2f%% \n \n", (medieval/total)*100);
	
	printf ("	Percentual de votos Nazismo: %.2f%% \n \n", (nazismo/total)*100);
	
	printf ("	Percentual de votos Comunismo: %.2f%% \n \n", (comunismo/total)*100);
	
	printf ("	Percentual de votos Branco: %.2f%% \n \n", (branco/total)*100);
	
	printf ("	Percentual de votos Nulos: %.2f%% \n \n", (nulo/total)*100);
	
}
