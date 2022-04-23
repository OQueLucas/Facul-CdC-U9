#include <stdio.h>
#include <stdlib.h>

int main(){
int cont;
float n1,n2,n3,m;

for (cont = 1; cont <=4; cont++){
	printf("digite as 3 notas");
	scanf("%f%f%f",&n1,&n2,&n3);
	m= (n1+n2+n3)/3;
	printf("media: %.2f\n",m);
}	
system("PAUSE");
}
