#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int i, continua;

	do{
	
	printf("\n\n Numeros sorteados na Mega Sena dessa semana:\n\n");
	
	srand(time (NULL));
	
	for (i = 0; i < 6; i++) {
		/* gerando valores aleatórios entre zero e 60  */
    	printf(" %d ", rand() % 60)+1;
    }
	
	printf ("\n\nDeseja sortear novos números? ");
	scanf ("%d", & continua);
	
}

while (continua);
		
	system ("pause");

}
