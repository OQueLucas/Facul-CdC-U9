#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	srand(time(NULL));
	
	int cob, ct1, ct2, gols1, gols2, extra=1, total ;
		
		gols1 = 0;
		gols2 = 0;
		
	for (cob=1; cob<=5; cob++) {
		
		
		ct1 = (rand () %2);
			
		
		ct2 = (rand () %2);
		
		if (ct1==1)
		printf("\n \nGol do time 1"); gols1++;
		
		if (ct2==1)
		printf("\n\nGol do time 2"); gols2++;
		
	}
	if (gols1>gols2)
	printf ("\n  Time 1 ganhou!\n\n");
	
	else if (gols2>gols1)
	printf ("\n  Time 2 ganhou!\n\n");
	
	else 
	do {
	printf ("\n\n  Resultado da cobran�a extra: ");

	
		ct1 = (rand () %2);
			printf("\n \nGol do time 1"); 
	
		ct2 = (rand () %2);
			printf("\n\nGol do time 2"); 
		if (ct1>ct2) {
			extra = 0;
			printf ("\n  Time 1 ganhou!\n\n");
	}
	
		else if (ct2>ct1) {
			extra = 0;
			printf ("\n  Time 2 ganhou!\n\n");
	}
	
	}
	while (extra);
	
	
	system ("pause");
}
