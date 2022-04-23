#include <stdio.h>
#include <stdlib.h>

int main(){
int cont,n,soma;
soma = 0;
printf("digite o valor de N:\n");
scanf("%d",&n);

for (cont = 1 ; cont <=n; cont++){
	soma = soma + cont;
}
printf("somatorio : %d\n",soma);
system(" PAUSE");


}
