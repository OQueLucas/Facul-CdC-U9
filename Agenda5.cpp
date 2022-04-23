#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Agenda {

	int Telefone;
	int DDD;
	char Email[100];
	char Nome [60];

};

main () {

	int contador = 1;
	int i = 1;
	int a;
	int h = 1;

	setlocale (LC_ALL, "Portuguese_Brazil");

	struct Agenda umaAgenda[1];

	for (i = 1; i <= contador; i++) {

		printf ("\n Código %d", i);

		printf ("\n\n Nome: ");
		scanf ("%s", &umaAgenda[i].Nome);

		printf ("\n Email: ");
		scanf ("%s", &umaAgenda[i].Email);

		printf ("\n Contato: ");

		printf ("\n\n DDD: ");
		scanf ("%d", &umaAgenda[i].DDD);

		printf ("\n Telefone: ");
		scanf ("%d", &umaAgenda[i].Telefone);

			printf ("\n * Agenda %d *", i);
			printf ("\n\n Nome: %s", umaAgenda[i].Nome);
			printf ("\n Email: %s", umaAgenda[i].Email);
			printf ("\n Contato: (%d) %d\n\n", umaAgenda[i].DDD, umaAgenda[i].Telefone);

		printf ("\n Deseja adicionar outra agenda? 1 - sim / 0 - não \n >> ");
		scanf ("%d", & a);

		if (a == 1) {
			contador++;
		}
	}

	system ("PAUSE");
}
