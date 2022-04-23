#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1, num2, sinal;
	printf ("\n Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\n Digite o sinal de operação: \n");
	printf("1 - soma \n 2 - subtração \n 3 - divisão \n 4 - multiplicação");
	scanf("%d", &sinal);
	printf ("\n Digite o segundo numero: ");
	scanf("%d", &num2);
	
	
	switch (sinal) {
		case 1:
			printf("Seu calculo deu: %d", num1 + num2);
		break;
		case 2:
			printf("Seu calculo deu: %d", num1 - num2);
		break;
		case 3:
			printf("Seu calculo deu: %d", num1 / num2);
		break;
		case 4:
			printf("Seu calculo deu: %d", num1 * num2);
		break;
	
		default:
			printf ("\n  \n \n");
	}
	
	system ("PAUSE");	
}	
