#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main () {

	setlocale (LC_ALL, "Portuguese_Brazil");

    char resposta [30];

    int quiz, cont, i;

    quiz = 1;

    while (quiz) {

    printf ("\n Qual o animal do Expecto Patronum do Harry Potter: ");
	gets (resposta);

		for (i = 0; i < 30; i++) {
		resposta[i] = toupper (resposta[i]);
}
		if (strcmp (resposta, "CERVO") == 0){
		puts ("\n Resposta correta. \n");
		cont= cont+1;
	}

		else
		puts ("\n Resposta errada. \n");


	printf ("\n Como Harry descreve seu beijo com Cho Chang no livro 5? ");
	gets (resposta);

		for (i = 0; i < 30; i++) {
		resposta[i] = toupper (resposta[i]);
}

		if (strcmp (resposta, "MOLHADO") == 0){
		puts ("\n Resposta correta. \n");
		cont=cont+1;
	}

		else {
		puts ("\n Resposta errada. \n");
		quiz = 0;
	}


	printf ("\n 'Eu confiaria à Hagrid minha ____'   ");
	gets (resposta);

		for (i = 0; i < 30; i++) {
		resposta[i] = toupper (resposta[i]);
}

		if (strcmp (resposta, "VIDA") == 0){
		puts ("\n Resposta correta. \n");
		cont=cont+1;
	}

		else {
		puts ("\n Resposta errada. \n");
		quiz = 0;
	}


		printf ("\n Coloque aqui a proxima pergunta\n ");
		gets (resposta);

		for (i = 0; i < 30; i++) {
		resposta[i] = toupper (resposta[i]);
}

		if (strcmp (resposta, "resposta") == 0){
		puts ("\n Resposta correta. \n");
		cont=cont+1;
	}

		else {
		puts ("\n Resposta errada. \n");
		quiz = 0;
	}


		if (cont = 3) {

				printf ("\n Parabéns, você é um conhecedor do Mundo Bruxo.\n Você é Bruxão mesmo! \n");
			return 0;

		} else printf("Vá la ler livros!");
}


    system ("pause");

}
