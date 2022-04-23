#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    char alunos [10][60];
    float nota[5];
    int i;
    for (i = 0; i < 2; i++) {
        printf ("\n\n Digite um nome de aluno: ");
        scanf ("%s", & alunos [i]);
        printf ("\n Digite a nota do aluno: ");
        scanf ("%f", & nota[i]);
    }
    printf ("\n\n Alunos da turma:\n\n");
    for (i = 0; i < 5; i++) {
        printf ("	Aluno: %s \n", alunos [i]);
        printf ("	Nota: %.2f\n\n", nota[i]);
    }
    system ("pause");
}
