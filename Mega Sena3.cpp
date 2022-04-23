#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float i[6], continua;

	do{
	
	printf("\n\n Numeros sorteados na Mega Sena dessa semana:\n\n");
	
	srand(time (NULL));
	
	for (i = 0; i < 6; i++) {
		/* gerando valores aleatórios entre zero e 60  */
    	printf(" %d ", rand() % 60)+1;
    }
	
	while (i[1] == i[0])
	i[1] = (rand ()%60)+1;
	
	while (i[2] == i[1] || i[2] == i[0])
	i[2] = (rand ()%60)+1;
	
	while (i[3] == i[1] || i[3] == i[0] || i[3] == i[2])
	i[3] = (rand ()%60)+1;
	
	while (i[4] == i[1] || i[4] == i[0] || i[4] == i[2] || i[4] == i[3])
	i[4] = (rand ()%60)+1;
	
	while (i[5] == i[1] || i[5] == i[0] || i[5] == i[2] || i[5] == i[3] || i[5] == i[4])
	i[5] = (rand ()%60)+1;
	
	printf ("\n\nDeseja sortear novos números? ");
	scanf ("%d", & continua);
	
}

while (continua);
		
	system ("pause");

}
