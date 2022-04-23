#include <stdio.h>
#include <stdlib.h>

main ()
{
	int n1, n2, n3, n4, n5;
	float a,b,c,d,e,f,g,h,i,j,k,l,desconto,valor;
	a=30;
	b=32,5;
	c=35;
	d= 2;
	e=60;
	f=65;
	g=70;
	h=4;
	i=120;
	j=130;
	k=140;
	l=8;
	n1=1;

	while(n1)
	{ system ("cls");
	printf ("*********************************************************** \n");
	printf ("* Bem vindo a incrivel fabrica de chocolate da uninove!   * \n");
	printf ("*********************************************************** \n");
	
	printf ("\n Escolha por favor o tipo de chocolate que deseja de acordo com nossa lista: \n");
	printf ("*****************\n");
	printf ("* 1.Ao leite    * \n");
	printf ("* 2.Branco      * \n");
	printf ("* 3.Meio Amargo * \n");
	printf ("*****************\n");
	scanf ("%d", &n2);
	
	
	printf ("\n Agora escolha o recheio do ovo \n");
	printf ("***********************\n");
	printf ("* 1.Brigadeiro        * \n");
	printf ("* 2.Doce de leite     * \n");
	printf ("* 3.Morango           * \n");
	printf ("* 4.Maracuja          * \n");
	printf ("* 5.Prestigio         * \n");
	printf ("***********************\n");
	scanf ("%d", &n3);
	
	printf ("\n Qual o tamanho desejado? \n");
	printf ("************************\n");
	printf ("* 1.500gr (Pequeno)    * \n");
	printf ("* 2.1Kg (Medio)        * \n");
	printf ("* 3.2Kg (grande)       * \n");
	printf ("************************\n");
	scanf ("%d", &n4);
	
	
	printf ("\n Agora que definimo o seu chocolate me fale quantas voce ira querer \n");
	printf ("**************\n");
	printf ("* 1.1 ovo   * \n");
	printf ("* 2.2 ovo   * \n");
	printf ("* 3.3 ovo   * \n");
	printf ("* 3.4 ovo   * \n");
	printf ("**************\n");
	scanf ("%d", &n5);
	
	//1 ovo	
	//500g
	//recheio brigadeiro
	if (n2==1&&n3==1&&n4==1&&n5==1){
		printf ("Voce adquiriu 1 ovo de 500gr, ao leite recheado por brigadeiro, por R$30,00");
	}
	else {
	if(n2==2&&n3==1&&n4==1&&n5==1){
		printf ("voce adquiriu 1 ovo de 500gr,chocolate branco recheado por brigadeiro, por 32,50 ");
	}
	else {
	 if (n2==3&&n3==1&&n4==1&&n5==1) {
		printf ("voce adquiriu 1 ovo de 500gr,meio amargo recheado por brigadeiro, por 35,00 ");
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==1&&n5==1){
		printf ("Voce adquiriu 1 ovo de 500gr, ao leite recheado por doce de leite, por R$30,00");
	}
	else {
	if(n2==2&&n3==2&&n4==1&&n5==1){
		printf ("voce adquiriu 1 ovo de 500gr,chocolate branco recheado por doce de leite, por 32,50 ");
	}
	else {
	if (n2==3&&n3==2&&n4==1&&n5==1) {
		printf ("voce adquiriu 1 ovo de 500gr,meio amargo recheado por doce de leite, por 35,00 ");
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==1&&n5==1){
		printf ("Voce adquiriu 1 ovo de 500gr, ao leite recheado por morango, por R$32,00");
	}
	else {
	if(n2==2&&n3==3&&n4==1&&n5==1){
		printf ("voce adquiriu 1 ovo de 500gr,chocolate branco recheado por morango, por 34,50 ");
	}
	else {
	if (n2==3&&n3==3&&n4==1&&n5==1) {
		printf ("voce adquiriu 1 ovo de 500gr,meio amargo recheado por morango, por 37,00 ");
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==1&&n5==1){
		printf ("Voce adquiriu 1 ovo de 500gr, ao leite recheado por maracuja, por R$32,00");
	}
	else {
	if(n2==2&&n3==4&&n4==1&&n5==1){
		printf ("voce adquiriu 1 ovo de 500gr,chocolate branco recheado por maracuja, por 34,50 ");
	}
	else {
	if (n2==3&&n3==4&&n4==1&&n5==1) {
		printf ("voce adquiriu 1 ovo de 500gr,meio amargo recheado por maracuja, por 37,00 ");
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==1&&n5==1){
		printf ("Voce adquiriu 1 ovo de 500gr, ao leite recheado por prestigio, por R$32,00");
	}
	else {
	if(n2==2&&n3==5&&n4==1&&n5==1){
		printf ("voce adquiriu 1 ovo de 500gr,chocolate branco recheado por prestigio, por 34,50 ");
	}
	else {
	if (n2==3&&n3==5&&n4==1&&n5==1) {
		printf ("voce adquiriu 1 ovo de 500gr,meio amargo recheado por prestigio, por 37,00 ");
	}
	
	//1kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==2&&n5==1){
		printf ("Voce adquiriu 1 ovo de 1kg, ao leite recheado por brigadeiro, por R$60,00");
	}
	else {
	if(n2==2&&n3==1&&n4==2&&n5==1){
		printf ("voce adquiriu 1 ovo de 1kg,chocolate branco recheado por brigadeiro, por 65,00 ");
	}
	else {
	if (n2==3&&n3==1&&n4==2&&n5==1) {
		printf ("voce adquiriu 1 ovo de 1kg,meio amargo recheado por brigadeiro, por 70,00 ");
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==2&&n5==1){
		printf ("Voce adquiriu 1 ovo de 1kg, ao leite recheado por doce de leite, por R$60,00");
	}
	else {
	if(n2==2&&n3==2&&n4==2&&n5==1){
		printf ("voce adquiriu 1 ovo de 1kg,chocolate branco recheado por doce de leite, por 65,00 ");
	}
	else {
	if (n2==3&&n3==2&&n4==2&&n5==1) {
		printf ("voce adquiriu 1 ovo de 1kg,meio amargo recheado por doce de leite, por 70,00 ");
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==2&&n5==1){
		printf ("Voce adquiriu 1 ovo de 1kg, ao leite recheado por morango, por R$64,00");
	}
	else {
	if(n2==2&&n3==3&&n4==2&&n5==1){
		printf ("voce adquiriu 1 ovo de 1kg,chocolate branco recheado por morango, por 69,00 ");
	}
	else {
	if (n2==3&&n3==3&&n4==2&&n5==1) {
		printf ("voce adquiriu 1 ovo de 1kg,meio amargo recheado por morango, por 74,00 ");
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==2&&n5==1){
		printf ("Voce adquiriu 1 ovo de 1kg, ao leite recheado por maracuja, por 64,00");
	}
	else {
	if(n2==2&&n3==4&&n4==2&&n5==1){
		printf ("voce adquiriu 1 ovo de 1kg,chocolate branco recheado por maracuja, por 69,00 ");
	}
	else {
	if (n2==3&&n3==4&&n4==2&&n5==1) {
		printf ("voce adquiriu 1 ovo de 1kg,meio amargo recheado por maracuja, por 74,00  ");
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==2&&n5==1){
		printf ("Voce adquiriu 1 ovo de 1kg, ao leite recheado por prestigio, por 64,00");
	}
	else {
	if(n2==2&&n3==5&&n4==2&&n5==1){
		printf ("voce adquiriu 1 ovo de 1kg,chocolate branco recheado por prestigio, por 69,00 ");
	}
	else {
	if (n2==3&&n3==5&&n4==2&&n5==1) {
		printf ("voce adquiriu 1 ovo de 1kg,meio amargo recheado por prestigio, por 74,00 ");
	}
	
	//2kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==3&&n5==1){
		printf ("Voce adquiriu 1 ovo de 2kg, ao leite recheado por brigadeiro, por R$120,00");
	}
	else {
	if(n2==2&&n3==1&&n4==3&&n5==1){
		printf ("voce adquiriu 1 ovo de 2kg,chocolate branco recheado por brigadeiro, por R$130,00 ");
	}
	else {
	if (n2==3&&n3==1&&n4==3&&n5==1) {
		printf ("voce adquiriu 1 ovo de 2kg,meio amargo recheado por brigadeiro, por R$140,00 ");
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==3&&n5==1){
		printf ("Voce adquiriu 1 ovo de 2kg, ao leite recheado por doce de leite, por R$120,00");
	}
	else {
	if(n2==2&&n3==2&&n4==3&&n5==1){
		printf ("voce adquiriu 1 ovo de 2kg,chocolate branco recheado por doce de leite, por R$130,00 ");
	}
	else {
	if (n2==3&&n3==2&&n4==3&&n5==1) {
		printf ("voce adquiriu 1 ovo de 2kg,meio amargo recheado por doce de leite, por R$140,00 ");
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==3&&n5==1){
		printf ("Voce adquiriu 1 ovo de 2kg, ao leite recheado por morango, por 128,00");
	}
	else {
	if(n2==2&&n3==3&&n4==3&&n5==1){
		printf ("voce adquiriu 1 ovo de 2kg,chocolate branco recheado por morango, por 138,00 ");
	}
	else {
	if (n2==3&&n3==3&&n4==3&&n5==1) {
		printf ("voce adquiriu 1 ovo de 2kg,meio amargo recheado por morango, por 148,00 ");
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==3&&n5==1){
		printf ("Voce adquiriu 1 ovo de 2kg, ao leite recheado por maracuja, por 128,00");
	}
	else {
	if(n2==2&&n3==4&&n4==3&&n5==1){
		printf ("voce adquiriu 1 ovo de 2kg,chocolate branco recheado por maracuja, por 138,00");
	}
	else {
	if (n2==3&&n3==4&&n4==3&&n5==1) {
		printf ("voce adquiriu 1 ovo de 2kg,meio amargo recheado por maracuja, por 74,00  ");
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==3&&n5==1){
		printf ("Voce adquiriu 1 ovo de 2kg, ao leite recheado por prestigio, por 128,00");
	}
	else {
	if(n2==2&&n3==5&&n4==3&&n5==1){
		printf ("voce adquiriu 1 ovo de 2kg,chocolate branco recheado por prestigio, por 138,00");
	}
	else {
	if (n2==3&&n3==5&&n4==3&&n5==1) {
		printf ("voce adquiriu 1 ovo de 2kg,meio amargo recheado por prestigio, por 148,00");
	}

	
	//2 ovo	
	//500g
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==1&&n5==2){
		desconto= (a+a)*10/100;
		valor=a+a-desconto;
		printf ("Voce adquiriu 2 ovo de 500gr, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==1&&n5==2){
		desconto= (b+b)*10/100;
		valor=b+b-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==1&&n5==2) {
		desconto= (c+c)*10/100;
		valor=c+c-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==1&&n5==2){
		desconto= (a+a)*10/100;
		valor=a+a-desconto;
		printf ("Voce adquiriu 2 ovo de 500gr, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==1&&n5==2){
		desconto= (b+b)*10/100;
		valor=b+b-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==1&&n5==2) {
		desconto= (c+c)*10/100;
		valor=c+c-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==1&&n5==2){
	 	desconto= (a+a+d)*10/100;
		valor=a+a+d-desconto;
		printf ("Voce adquiriu 2 ovo de 500gr, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==1&&n5==2){
		desconto= (b+b+d+d)*10/100;
		valor=b+b+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==1&&n5==2) {
		desconto= (c+c+d+d)*10/100;
		valor=c+c+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==1&&n5==2){
		desconto= (a+a+d+d)*10/100;
		valor=a+a+d+d-desconto;
		printf ("Voce adquiriu 2 ovo de 500gr, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==1&&n5==2){
		desconto= (b+b+d+d)*10/100;
		valor=b+b+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==1&&n5==2) {
		desconto= (c+c+d+d)*10/100;
		valor=c+c+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==1&&n5==2){
		desconto= (a+a+d+d)*10/100;
		valor=a+a+d+d-desconto;
		printf ("Voce adquiriu 2 ovo de 500gr, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==1&&n5==2){
		desconto= (b+b+d+d)*10/100;
		valor=b+b+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==1&&n5==2) {
		desconto= (c+c+d+d)*10/100;
		valor=c+c+d+d-desconto;
		printf ("voce adquiriu 2 ovo de 500gr,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//1kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==2&&n5==2){
		desconto= (e+e)*10/100;
		valor=e+e-desconto;
		printf ("Voce adquiriu 2 ovo de 1kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==2&&n5==2){
		desconto= (f+f)*10/100;
		valor=f+f-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==2&&n5==2) {
		desconto= (g+g)*10/100;
		valor=g+g-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==2&&n5==2){
		desconto= (e+e)*10/100;
		valor=e+e-desconto;
		printf ("Voce adquiriu 2 ovo de 1kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==2&&n5==2){
		desconto= (f+f)*10/100;
		valor=f+f-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==2&&n5==2) {
		desconto= (g+g)*10/100;
		valor=g+g-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==2&&n5==2){
		desconto= (e+e+h+h)*10/100;
		valor=e+e+h+h-desconto;
		printf ("Voce adquiriu 2 ovo de 1kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==2&&n5==2){
		desconto= (f+f+h+h+h)*10/100;
		valor=f+f+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==2&&n5==2) {
		desconto= (g+g+h+h)*10/100;
		valor=g+g+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==2&&n5==2){
		desconto= (e+e+h+h)*10/100;
		valor=e+e+h+h-desconto;
		printf ("Voce adquiriu 2 ovo de 1kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==2&&n5==2){
		desconto= (f+f+h+h)*10/100;
		valor=f+f+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==2&&n5==2) {
		desconto= (g+g+h+h)*10/100;
		valor=g+g+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==2&&n5==2){
		desconto= (e+e+h+h)*10/100;
		valor=e+e+h+h-desconto;
		printf ("Voce adquiriu 2 ovo de 1kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==2&&n5==2){
		desconto= (f+f+h+h)*10/100;
		valor=f+f+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==2&&n5==2) {
		desconto= (g+g+h+h)*10/100;
		valor=g+g+h+h-desconto;
		printf ("voce adquiriu 2 ovo de 1kg,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//2kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==3&&n5==2){
		desconto= (i+i)*10/100;
		valor=i+i-desconto;
		printf ("Voce adquiriu 2 ovo de 2kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==3&&n5==2){
		desconto= (j+j)*10/100;
		valor=j+j-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==3&&n5==2) {
		desconto= (k+k)*10/100;
		valor=k+k-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==3&&n5==2){
		desconto= (i+i)*10/100;
		valor=i+i-desconto;
		printf ("Voce adquiriu 2 ovo de 2kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==3&&n5==2){
		desconto= (j+j)*10/100;
		valor=j+j-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==3&&n5==2) {
		desconto= (k+k)*10/100;
		valor=k+k-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==3&&n5==2){
		desconto= (i+i+l+l)*10/100;
		valor=i+i+l+l-desconto;
		printf ("Voce adquiriu 2 ovo de 2kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==3&&n5==2){
		desconto= (j+j+l+l)*10/100;
		valor=j+j+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==3&&n5==2) {
		desconto= (k+k+l+l)*10/100;
		valor=k+k+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==3&&n5==2){
		desconto= (i+i+l+l)*10/100;
		valor=i+i+l+l-desconto;
		printf ("Voce adquiriu 2 ovo de 2kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==3&&n5==2){
		desconto= (j+j+l+l)*10/100;
		valor=j+j+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==3&&n5==2) {
		desconto= (k+k+l+l)*10/100;
		valor=k+k+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==3&&n5==2){
		desconto= (i+i+l+l)*10/100;
		valor=i+i+l+l-desconto;
		printf ("Voce adquiriu 2 ovo de 2kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==3&&n5==2){
		desconto= (j+j+l+l)*10/100;
		valor=j+j+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==3&&n5==2) {
		desconto= (k+k+l+l)*10/100;
		valor=k+k+l+l-desconto;
		printf ("voce adquiriu 2 ovo de 2kg,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//3 ovo	
	//500g
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==1&&n5==3){
		desconto= (a+a+a)*15/100;
		valor=a+a+a-desconto;
		printf ("Voce adquiriu 3 ovo de 500gr, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==1&&n5==3){
		desconto= (b+b+b)*15/100;
		valor=b+b+b-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==1&&n5==3) {
		desconto= (c+c+c)*15/100;
		valor=c+c+c-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==1&&n5==3){
		desconto= (a+a+a)*15/100;
		valor=a+a+a-desconto;
		printf ("Voce adquiriu 3 ovo de 500gr, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==1&&n5==3){
		desconto= (b+b+b)*15/100;
		valor=b+b+b-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==1&&n5==3) {
		desconto= (c+c+c)*15/100;
		valor=c+c+c-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==1&&n5==3){
	 	desconto= (a+a+a+d+d+d)*15/100;
		valor=a+a+a+d+d+d-desconto;
		printf ("Voce adquiriu 3 ovo de 500gr, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==1&&n5==3){
		desconto= (b+b+b+d+d+d)*15/100;
		valor=b+b+b+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==1&&n5==3) {
		desconto= (c+c+c+d+d+d)*15/100;
		valor=c+c+c+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==1&&n5==3){
		desconto= (a+a+a+d+d+d)*15/100;
		valor=a+a+a+d+d+d-desconto;
		printf ("Voce adquiriu 3 ovo de 500gr, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==1&&n5==3){
		desconto= (b+b+b+d+d+d)*15/100;
		valor=b+b+b+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==1&&n5==3) {
		desconto= (c+c+c+d+d+d)*15/100;
		valor=c+c+c+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==1&&n5==3){
		desconto= (a+a+a+d+d+d)*15/100;
		valor=a+a+a+d+d+d-desconto;
		printf ("Voce adquiriu 3 ovo de 500gr, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==1&&n5==3){
		desconto= (b+b+b+d+d+d)*15/100;
		valor=b+b+b+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==1&&n5==3) {
		desconto= (c+c+c+d+d+d)*15/100;
		valor=c+c+c+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//1kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==2&&n5==3){
		desconto= (e+e+e)*15/100;
		valor=e+e+e-desconto;
		printf ("Voce adquiriu 3 ovo de 1kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==2&&n5==3){
		desconto= (f+f+f)*15/100;
		valor=f+f+f-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==2&&n5==3) {
		desconto= (g+g+g)*15/100;
		valor=g+g+g-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==2&&n5==3){
		desconto= (e+e+e)*15/100;
		valor=e+e-desconto;
		printf ("Voce adquiriu 3 ovo de 1kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==2&&n5==3){
		desconto= (f+f+f)*15/100;
		valor=f+f+f-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==2&&n5==3) {
		desconto= (g+g+g)*15/100;
		valor=g+g+g-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==2&&n5==3){
		desconto= (e+e+e+h+h+h)*15/100;
		valor=e+e+e+h+h+h-desconto;
		printf ("Voce adquiriu 3 ovo de 1kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==2&&n5==3){
		desconto= (f+f+f+h+h+h)*15/100;
		valor=f+f+f+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==2&&n5==3) {
		desconto= (g+g+g+h+h+h)*15/100;
		valor=g+g+g+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==2&&n5==3){
		desconto= (e+e+e+h+h+h)*15/100;
		valor=e+e+e+h+h+h-desconto;
		printf ("Voce adquiriu 3 ovo de 1kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==2&&n5==3){
		desconto= ((f+f+f+h+h+h)*15)/100;
		valor=f+f+f+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==2&&n5==3) {
		desconto= (g+g+g+h+h+h)*15/100;
		valor=g+g+g+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==2&&n5==3){
		desconto= (e+e+e+h+h+h)*15/100;
		valor=e+e+e+h+h+h-desconto;
		printf ("Voce adquiriu 3 ovo de 1kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==2&&n5==3){
		desconto= (f+f+f+h+h+h)*15/100;
		valor=f+f+f+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==2&&n5==3) {
		desconto= (g+g+g+h+h+h)*15/100;
		valor=g+g+g+h+h+h-desconto;
		printf ("voce adquiriu 3 ovo de 1kg,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//2kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==3&&n5==3){
		desconto= (i+i+i)*15/100;
		valor=i+i+i-desconto;
		printf ("Voce adquiriu 3 ovo de 2kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==3&&n5==3){
		desconto= (j+j+j)*15/100;
		valor=j+j+j-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==3&&n5==3) {
		desconto= (k+k+k)*15/100;
		valor=k+k+k-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==3&&n5==3){
		desconto= (i+i+i)*15/100;
		valor=i+i+i-desconto;
		printf ("Voce adquiriu 3 ovo de 2kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==3&&n5==3){
		desconto= (j+j+j)*15/100;
		valor=j+j+j-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==3&&n5==3) {
		desconto= (k+k+k)*15/100;
		valor=k+k+k-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==3&&n5==3){
		desconto= (i+i+i+l+l+l)*15/100;
		valor=i+i+i+l+l+l-desconto;
		printf ("Voce adquiriu 3 ovo de 2kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==3&&n5==3){
		desconto= (j+j+j+l+l+l)*15/100;
		valor=j+j+j+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==3&&n5==3) {
		desconto= (k+k+k+l+l+l)*15/100;
		valor=k+k+k+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==3&&n5==3){
		desconto= (i+i+i+l+l+l)*15/100;
		valor=i+i+i+l+l+l-desconto;
		printf ("Voce adquiriu 3 ovo de 2kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==3&&n5==3){
		desconto= (j+j+j+l+l+l)*15/100;
		valor=j+j+j+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==3&&n5==3) {
		desconto= (k+k+k+l+l+l)*15/100;
		valor=k+k+k+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==3&&n5==3){
		desconto= (i+i+i+l+l+l)*15/100;
		valor=i+i+i+l+l+l-desconto;
		printf ("Voce adquiriu 3 ovo de 2kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==3&&n5==3){
		desconto= (j+j+j+l+l+l)*15/100;
		valor=j+j+j+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==3&&n5==3) {
		desconto= (k+k+k+l+l+l)*15/100;
		valor=k+k+k+l+l+l-desconto;
		printf ("voce adquiriu 3 ovo de 2kg,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	// 4 ovo
	//500g
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==1&&n5==4){
		desconto= (a+a+a+a)*20/100;
		valor=a+a+a+a-desconto;
		printf ("Voce adquiriu 4 ovo de 500gr, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==1&&n5==4){
		desconto= (b+b+b+b)*20/100;
		valor=b+b+b+b-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==1&&n5==4) {
		desconto= (c+c+c+c)*20/100;
		valor=c+c+c+c-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==1&&n5==4){
		desconto= (a+a+a+a)*20/100;
		valor=a+a+a+a-desconto;
		printf ("Voce adquiriu 4 ovo de 500gr, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==1&&n5==4){
		desconto= (b+b+b+b)*20/100;
		valor=b+b+b+b-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==1&&n5==4) {
		desconto= (c+c+c+c)*20/100;
		valor=c+c+c+c-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==1&&n5==3){
	 	desconto= (a+a+a+a+d+d+d+d)*20/100;
		valor=a+a+a+a+d+d+d+d-desconto;
		printf ("Voce adquiriu 4 ovo de 500gr, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==1&&n5==4){
		desconto= (b+b+b+b+d+d+d+d)*20/100;
		valor=b+b+b+b+d+d+d+d-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==1&&n5==4) {
		desconto= (c+c+c+c+d+d+d+d)*20/100;
		valor=c+c+c+c+d+d+d+d-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==1&&n5==4){
		desconto= (a+a+a+a+d+d+d+d)*20/100;
		valor=a+a+a+a+d+d+d+d-desconto;
		printf ("Voce adquiriu 4 ovo de 500gr, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==1&&n5==4){
		desconto= (b+b+b+b+d+d+d+d)*20/100;
		valor=b+b+b+b+d+d+d+d-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==1&&n5==4) {
		desconto= (c+c+c+c+d+d+d+d)*20/100;
		valor=c+c+c+c+d+d+d+d-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==1&&n5==4){
		desconto= (a+a+a+a+d+d+d+d)*20/100;
		valor=a+a+a+a+d+d+d+d-desconto;
		printf ("Voce adquiriu 4 ovo de 500gr, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==1&&n5==4){
		desconto= (b+b+b+b+d+d+d+d)*20/100;
		valor=b+b+b+b+d+d+d+d-desconto;
		printf ("voce adquiriu 3 ovo de 500gr,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==1&&n5==4) {
		desconto= (c+c+c+c+d+d+d+d)*20/100;
		valor=c+c+c+c+d+d+d+d-desconto;
		printf ("voce adquiriu 4 ovo de 500gr,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//1kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==2&&n5==4){
		desconto= (e+e+e+e)*120/100;
		valor=e+e+e+e-desconto;
		printf ("Voce adquiriu 4 ovo de 1kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==2&&n5==4){
		desconto= (f+f+f+f)*20/100;
		valor=f+f+f+f-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==2&&n5==4) {
		desconto= (g+g+g+g)*20/100;
		valor=g+g+g+g-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==2&&n5==4){
		desconto= (e+e+e+e)*20/100;
		valor=e+e+e+e-desconto;
		printf ("Voce adquiriu 4 ovo de 1kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==2&&n5==4){
		desconto= (f+f+f+f)*20/100;
		valor=f+f+f+f-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==2&&n5==4) {
		desconto= (g+g+g+g)*20/100;
		valor=g+g+g+g-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==2&&n5==4){
		desconto= (e+e+e+e+h+h+h+h)*20/100;
		valor=e+e+e+e+h+h+h+h-desconto;
		printf ("Voce adquiriu 4 ovo de 1kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==2&&n5==4){
		desconto= (f+f+f+f+h+h+h+h)*20/100;
		valor=f+f+f+f+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==2&&n5==4) {
		desconto= (g+g+g+g+h+h+h+h)*20/100;
		valor=g+g+g+g+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==2&&n5==4){
		desconto= (e+e+e+e+h+h+h+h)*20/100;
		valor=e+e+e+e+h+h+h+h-desconto;
		printf ("Voce adquiriu 4 ovo de 1kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==2&&n5==4){
		desconto= (f+f+f+f+h+h+h+h)*20/100;
		valor=f+f+f+f+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==2&&n5==4) {
		desconto= (g+g+g+g+h+h+h+h)*20/100;
		valor=g+g+g+g+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==2&&n5==4){
		desconto= (e+e+e+e+h+h+h+h)*20/100;
		valor=e+e+e+e+h+h+h+h-desconto;
		printf ("Voce adquiriu 4 ovo de 1kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==2&&n5==4){
		desconto= (f+f+f+f+h+h+h+h)*20/100;
		valor=f+f+f+f+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==2&&n5==4) {
		desconto= (g+g+g+g+h+h+h+h)*20/100;
		valor=g+g+g+g+h+h+h+h-desconto;
		printf ("voce adquiriu 4 ovo de 1kg,meio amargo recheado por prestigio, por %.2f", valor);
	}
	
	//2kg
	//recheio brigadeiro
	else {
	if (n2==1&&n3==1&&n4==3&&n5==4){
		desconto= (i+i+i+i)*20/100;
		valor=i+i+i+i-desconto;
		printf ("Voce adquiriu 4 ovo de 2kg, ao leite recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==1&&n4==3&&n5==4){
		desconto= (j+j+j+j)*20/100;
		valor=j+j+j+j-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,chocolate branco recheado por brigadeiro, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==1&&n4==3&&n5==4) {
		desconto= (k+k+k+k)*15/100;
		valor=k+k+k+k-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,meio amargo recheado por brigadeiro, por %.2f", valor);
	}
	
	//recheio Doce de leite
	else {
	if (n2==1&&n3==2&&n4==3&&n5==4){
		desconto= (i+i+i+i)*20/100;
		valor=i+i+i+i-desconto;
		printf ("Voce adquiriu 4 ovo de 2kg, ao leite recheado por doce de leite, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==2&&n4==3&&n5==4){
		desconto= (j+j+j+j)*20/100;
		valor=j+j+j+j-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,chocolate branco recheado por doce de leite, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==2&&n4==3&&n5==4) {
		desconto= (k+k+k+k)*20/100;
		valor=k+k+k+4-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,meio amargo recheado por doce de leite, por %.2f", valor);
	}
	
	//recheio morango
	else {
	if (n2==1&&n3==3&&n4==3&&n5==4){
		desconto= (i+i+i+i+l+l+l+l)*15/100;
		valor=i+i+i+i+l+l+l+l-desconto;
		printf ("Voce adquiriu 4 ovo de 2kg, ao leite recheado por morango, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==3&&n4==3&&n5==4){
		desconto= (j+j+j+j+l+l+l+l)*20/100;
		valor=j+j+j+j+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,chocolate branco recheado por morango, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==3&&n4==3&&n5==4) {
		desconto= (k+k+k+k+l+l+l+l)*20/100;
		valor=k+k+k+k+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,meio amargo recheado por morango, por %.2f", valor);
	}
	
	//recheio maracuja
	else {
	if (n2==1&&n3==4&&n4==3&&n5==4){
		desconto= (i+i+i+i+l+l+l+l)*20/100;
		valor=i+i+i+i+l+l+l+l-desconto;
		printf ("Voce adquiriu 4 ovo de 2kg, ao leite recheado por maracuja, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==4&&n4==3&&n5==4){
		desconto= (j+j+j+j+l+l+l+l)*20/100;
		valor=j+j+j+j+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,chocolate branco recheado por maracuja, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==4&&n4==3&&n5==4) {
		desconto= (k+k+k+k+l+l+l+l)*20/100;
		valor=k+k+k+k+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg,meio amargo recheado por maracuja, por %.2f", valor);
	}
	
	//recheio prestigio
	else {
	if (n2==1&&n3==5&&n4==3&&n5==4){
		desconto= (i+i+i+i+l+l+l+l)*20/100;
		valor=i+i+i+i+l+l+l+l-desconto;
		printf ("Voce adquiriu 4 ovo de 2kg, ao leite recheado por prestigio, por %.2f", valor);
	}
	else {
	if(n2==2&&n3==5&&n4==3&&n5==4){
		desconto= (j+j+j+j+l+l+l+l)*20/100;
		valor=j+j+j+j+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg, chocolate branco recheado por prestigio, por %.2f", valor);
	}
	else {
	if (n2==3&&n3==5&&n4==3&&n5==4) {
		desconto= (k+k+k+k+l+l+l+l)*20/100;
		valor=k+k+k+k+l+l+l+l-desconto;
		printf ("voce adquiriu 4 ovo de 2kg, meio amargo recheado por prestigio, por %.2f ", valor);
	}
	else  {printf (" \n Produto inesistente.");
	
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
	printf (" \n Deseja continuar compra? 1-sim 0-não' \n");
	scanf ("%d", &n1);
	system ("PAUSE");
	}
}
