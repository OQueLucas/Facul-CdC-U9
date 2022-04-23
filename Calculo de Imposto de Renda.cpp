#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float sal;

	sal=1;

	while(sal)
		
		
		{
		system ("cls");
		printf ("\n CALCULO DE IMPOSTO DE RENDA \n");
		printf (" \n Digite aqui seu salário Bruto: ");
		scanf ("%f", & sal);
		
		if (sal <= 1903.98) {
			printf ("\n Seu é salário isento \n \n");
		}
		else if (sal >= 1903.99 && sal <= 2826.65) {
			printf ("\n Alíquota: 7,5%% \n \n Desconto: %f \n", sal * 0.075);
			printf ("\n Salário: %f \n \n", sal * 0.825);
		}
		else if (sal >= 2826.66 && sal <= 3751.05) {
			printf ("\n Alíquota: 15%% \n \n Desconto: %f \n", sal * 0.15);
			printf ("\n Salário: %f \n \n", sal * 0.85);
		}
		else if (sal >= 3751.06 && sal <= 4664.68) {
			printf ("\n Alíquota: 22,5%% \n \n Desconto: %f \n", sal * 0.225);
			printf ("\n Salário: %f \n \n", sal * 0.775);
		}
		else if (sal > 4664.68) {
			printf ("\n Alíquota: 27,5%% \n \n Desconto: %f \n", sal * 0.275);
			printf (" \n Salário: %f \n \n", sal * 0.725);
		}
	
		system ("PAUSE");
	}
	
}
