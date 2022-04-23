#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 5
main () {
    // declaração e inicialização da matriz
    int matriz[LINHAS][COLUNAS] = {
        {3, 5, 2, 1, 10,},
        {15, 12, 18, 4, 6},
        {7, 9, 13, 16, 20}
    };
    // apresentação dos dados da matriz
    int i, j;
    printf ("*** Dados da Matriz ***\n\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf ("%2d ", matriz[i][j]);
        }
        printf ("\n");     
    }           
    system ("PAUSE");
}
