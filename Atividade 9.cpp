#include <stdio.h>
#include <stdlib.h>

main()
{
	int A,B;
	float M, N;
	
	A=10;
	B=4;
	M=10.5;
	N=4.6;
	
	bool X=true;
	bool Y=false;
	
	printf("\n a) A+B*2 = %d \n \n", A+B*2);
	
	printf("\n b) A*B+2 =%d \n \n", A*B+2);
	
	printf("\n c) B*A =%d \n \n", B*A);

	printf("\n d) M/N =%f \n \n", M/N);

	printf("\n e) B-A mod 3 = %d \n \n", B-A % 3);

	printf("\n f) A mod B-B mod A = %d \n \n", A % B-B % A);

	printf("\n g) A mod(A-B) mod A = %d \n \n", A %(A-B) % A);

	printf("\n h) N*2+M-2 =%f \n \n", N*2+M-2);

	printf("\n i) N+2*M-2 =%f \n \n", N+2*M-2);

	printf("\n j) A+B*2+N-M =%f \n \n", A+B*2+N-M);

	printf("\n k) X .ou. Y .e. X =%i \n \n", X || Y && X);

	printf("\n l) X .e. Y .ou. X =%i \n \n", X && Y || X);

	printf("\n m) .nao. X .ou. Y .e. .nao. X =%i \n \n", !X || Y && !X);

	printf("\n n) A<>B .e. B<A =%i \n \n", A!=B && B<A);

	printf("\n o) M=N+6 .ou. M<N =%i \n \n", M=N+6 || M<N);

	printf("\n p) M<=A+N .ou. .nao. X .e. Y =%i \n \n", M<=A+N || !X && Y);
	
	system ("PAUSE");
}
