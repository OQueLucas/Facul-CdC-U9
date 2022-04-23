#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int A, B, C, D, E, F, G, H, I, J, media;
	
	printf ("\n Digite aqui a idade da primeira pessoa: ");
	scanf ("%d", & A);

	printf ("\n Digite aqui a idade da segunda pessoa: ");
	scanf ("%d", & B);

	printf ("\n Digite aqui a idade da terceira pessoa: ");
	scanf ("%d", & C);

	printf ("\n Digite aqui a idade da quarta pessoa: ");
	scanf ("%d", & D);

	printf ("\n Digite aqui a idade da quinta pessoa: ");
	scanf ("%d", & E);

	printf ("\n Digite aqui a idade da sexta pessoa: ");
	scanf ("%d", & F);

	printf ("\n Digite aqui a idade da setima pessoa: ");
	scanf ("%d", & G);

	printf ("\n Digite aqui a idade da oitava pessoa: ");
	scanf ("%d", & H);

	printf ("\n Digite aqui a idade da nona pessoa: ");
	scanf ("%d", & I);
	
	printf ("\n Digite aqui a idade da décima pessoa: ");
	scanf ("%d", & J);
	
	media = (A+B+C+D+E+F+G+H+I+J) /10;
	
	printf ("\n A média de idades é: %d \n", media);
	
	if (A >= B && A >= C && A >= D && A >= E && A >= F && A >= G && A >= H && A >= I && A >= J)
	printf ("\n Maior idade é: %d \n", A);
	
	else if (B >= A && B >= C && B >= D && B >= E && B >= F && B >= G && B >= H && B >= I && B >= J)
	printf ("\n Maior idade é: %d \n", B);
	
	else if (C >= B && C >= A && C >= D && C >= E && C >= F && C >= G && C >= H && C >= I && C >= J)
	printf ("\n Maior idade é: %d \n", C);
	
	else if (D >= B && D >= C && D >= A && D >= E && D >= F && D >= G && D >= H && D >= I && D >= J)
	printf ("\n Maior idade é: %d \n", D);
	
	else if (E >= B && E >= C && E >= D && E >= A && E >= F && E >= G && E >= H && E >= I && E >= J)
	printf ("\n Maior idade é: %d \n", E);
	
	else if (F >= B && F >= C && F >= D && F >= E && F >= A && F >= G && F >= H && F >= I && F >= J)
	printf ("\n Maior idade é: %d \n", F);
	
	else if (G >= B && G >= C && G >= D && G >= E && G >= F && G >= A && G >= H && G >= I && G >= J)
	printf ("\n Maior idade é: %d \n", G);
	
	else if (H >= B && H >= C && H >= D && H >= E && H >= F && H >= G && H >= A && H >= I && H >= J)
	printf ("\n Maior idade é: %d \n", H);
	
	else if (I >= B && I >= C && I >= D && I >= E && I >= F && I >= G && I >= H && I >= A && I >= J)
	printf ("\n Maior idade é: %d \n", I);
	
	else if (J >= B && J >= C && J >= D && J >= E && J >= F && J >= G && J >= H && J >= I && J >= A)
	printf ("\n Maior idade é: %d \n", J);
	 
		
	if (A <= B && A <= C && A <= D && A <= E && A <= F && A <= G && A <= H && A <= I && A <= J)
	printf ("\n Menor idade é: %d \n", A);
	
	else if (B <= A && B <= C && B <= D && B <= E && B <= F && B <= G && B <= H && B <= I && B <= J)
	printf ("\n Menor idade é: %d \n", B);
	
	else if (C <= B && C <= A && C <= D && C <= E && C <= F && C <= G && C <= H && C <= I && C <= J)
	printf ("\n Menor idade é: %d \n", C);
	
	else if (D <= B && D <= C && D <= A && D <= E && D <= F && D <= G && D <= H && D <= I && D <= J)
	printf ("\n Menor idade é: %d \n", D);
	
	else if (E <= B && E <= C && E <= D && E <= A && E <= F && E <= G && E <= H && E <= I && E <= J)
	printf ("\n Menor idade é: %d \n", E);
	
	else if (F <= B && F <= C && F <= D && F <= E && F <= A && F <= G && F <= H && F <= I && F <= J)
	printf ("\n Menor idade é: %d \n", F);
	
	else if (G <= B && G <= C && G <= D && G <= E && G <= F && G <= A && G <= H && G <= I && G <= J)
	printf ("\n Menor idade é: %d \n", G);
	
	else if (H <= B && H <= C && H <= D && H <= E && H <= F && H <= G && H <= A && H <= I && H <= J)
	printf ("\n Menor idade é: %d \n", H);
	
	else if (I <= B && I <= C && I <= D && I <= E && I <= F && I <= G && I <= H && I <= A && I <= J)
	printf ("\n Menor idade é: %d \n", I);
	
	else if (J <= B && J <= C && J <= D && J <= E && J <= F && J <= G && J <= H && J <= I && J <= A)
	printf ("\n Menor idade é: %d \n", J);
	
	system ("PAUSE");
	}
