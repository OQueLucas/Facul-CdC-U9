#include <stdio.h>
#include <stdlib.h>
// defini�ao da macro quad
#define quad(n) (n*n)
 
main () {
    int num;
    printf ("Numero: ");
    scanf ("%d", &num);
    // chamada da macro
    int quadrado = quad(num);
    printf ("\nQuadrado = %d\n\n", quadrado);
    system ("PAUSE");
}
