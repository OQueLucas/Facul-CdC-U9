//#include <stdio.h>
//#include <stdlib.h>
//#include <locale.h>
//main() {
//	
//	setlocale (LC_ALL, "Portuguese_Brazil");
//	
//	int num1, num2, operador;
//	
//	printf("\n CALCULADORA \n 1 - soma \n 2 - subtra��o \n 3 - divis�o \n 4 - multiplica��o \n 5 - m�dulo \n \n ");
//	
//	printf("\n Digite o operador de opera��o: ");
//	scanf("%d", &operador);
//	
//	printf ("\n Digite o primeiro numero: ");
//	scanf("%d", &num1);
//	
//	printf ("\n Digite o segundo numero: ");
//	scanf("%d", &num2);
//	
//		switch (operador) {
//		case 1:
//			printf("\n Seu calculo deu: %d \n \n", num1 + num2);
//		break;
//		
//		case 2:
//			printf("\n Seu calculo deu: %d \n \n", num1 - num2);
//		break;
//		
//		case 3:
//			printf("\n Seu calculo deu: %f \n \n", (float)num1 / (float)num2);
//		break;
//		
//		case 4:
//			printf("\n Seu calculo deu: %d \n \n", num1 * num2);
//		break;
//		
//		default:
//			printf ("\n operador n�o identificado \n \n");
//	}
//	
//	system ("PAUSE");	
//}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main() {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int num1, num2;
	char op;
	
	printf("\n CALCULADORA \n + = soma \n - = subtra��o \n / = divis�o \n * = multiplica��o \n mod = m�dulo \n \n ");
	
	
	printf("\n Digite o operador de opera��o: ");
	scanf(" %c", &op);
	
	printf ("\n Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf ("\n Digite o segundo numero: ");
	scanf("%d", &num2);
	
		switch (op) {
		case '+':
			printf("\n Seu calculo deu: %d \n \n", num1 + num2);
		break;
		
		case '-':
			printf("\n Seu calculo deu: %d \n \n", num1 - num2);
		break;
		
		case '/':
			printf("\n Seu calculo deu: %f \n \n", (float)num1 / (float)num2);
		break;
		
		case '*':
			printf("\n Seu calculo deu: %d \n \n", num1 * num2);
		break;
				
		case '%':
			printf("\n Seu calculo deu: %d \n \n", num1 % num2);
		break;
		
		case '^':
			printf("\n Seu calculo deu: %d \n \n", pow (num1, num2));
		break;
		
		default:
			printf("\n operador n�o identificado \n \n");
	}
	
	system ("PAUSE");	
} 



