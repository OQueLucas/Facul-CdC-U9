#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, num3, num4, num5, num6, continua;

	do{
	
	printf("\n\n Numeros sorteados na Mega Sena dessa semana:\n\n");
	num1 = (rand ()%60)+1;
	num2 = (rand ()%60)+1;
	num3 = (rand ()%60)+1;
	num4 = (rand ()%60)+1;
	num5 = (rand ()%60)+1;
	num6 = (rand ()%60)+1;
	
	while (num2 == num1)
	num2 = (rand ()%60)+1;
	
	while (num3 == num2 || num3 == num1)
	num3 = (rand ()%60)+1;
	
	while (num4 == num2 || num4 == num1 || num4 == num3)
	num3 = (rand ()%60)+1;
	
	while (num5 == num2 || num5 == num1 || num5 == num3 || num5 == num4)
	num3 = (rand ()%60)+1;
	
	while (num6 == num2 || num6 == num1 || num6 == num3 || num6 == num4 || num6 == num5)
	num3 = (rand ()%60)+1;
	
	printf ("\n\nDeseja sortear novos números? ");
	scanf ("%d", & continua);
	
}

while (continua);
		
	system ("pause");

}
