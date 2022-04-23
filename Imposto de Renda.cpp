#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


main() {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float sal;
	
	printf ("Digite aqui seu salário bruto: ");
	scanf("%d", & sal);
	
	if (sal <= 1903.98) {
	printf ("Aliquota = sento \n");
	printf ("Valor de desconto = %f \n", sal * 0);
	printf ("Salário com desconto = %f \n", sal * 1); }

		else if (sal >= 1903.99 && sal <= 2826.65) {
		printf ("Aliquota = 7,5 \n");
		printf ("Valor de desconto = %f \n", sal * 0.075);
		printf ("Salário com desconto = %f \n", sal * 0.925); }
	
	system ("PAUSE");
	
}
