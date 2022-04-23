#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
	
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int n1, n2, n3, troca;
	
	printf ("\n Digite o primeiro número: ");
	scanf ("%d", & n1);
	printf ("\n Digite o segundo número: ");
	scanf ("%d", & n2);
	printf ("\n Digite o terceiro número: ");
	scanf ("%d", & n3);
	
	if( n1 > n2 )
    {
        troca = n2;
        n2 = n1; 
        n1 = troca;
    }
    if( n2 > n3 )
    {
        troca = n3; 
        n3 = n2;
        n2 = troca;
    }
    if( n1 > n2)
    {
        troca = n2;
        n2 = n1;
        n1 = troca;
    }

    printf("\n%d, %d, %d\n\n",n1,n2,n3);
	
	system ("PAUSE");	
}
