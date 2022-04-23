#include <stdio.h>
#include <stdlib.h>

int main(){
int cont,n,result;
result = 0;
printf("digite o valor de N:\n");
scanf("%d",&n);

for (cont = 0 ; cont <= 10; cont++){
	printf("somatorio : %d x %d = %d\n",n,cont,n*cont);

}
system(" PAUSE");


}
