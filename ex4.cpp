#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5
main () {
     // declara a matriz
     int matriz[LINHAS][COLUNAS];
     int i, j;
     // lê os dados para a matriz
     printf ("*** Informe os dados da matriz ***\n");
     for (i = 0; i < LINHAS; i++) {
         for (j = 0; j < COLUNAS; j++) {
               printf ("Valor[%d][%d]: ", i, j);
               scanf ("%d", &matriz[i][j]);
         }
      }
      // calcula a soma da diagonal principal e
      // apresenta os dados da matriz na tela
      int soma = 0;
      printf ("\n*** Dados da Matriz ***\n\n");
      for (i = 0; i < LINHAS; i++) {
          for (j = 0; j < COLUNAS; j++) {
                printf ("%3d ", matriz[i][j]);
                // se o índice da linha é igual ao da coluna, 
                // então o elemento está na diagonal principal.
                if (i == j) {
                      soma += matriz[i][j];
                }
           }
           printf ("\n");
     }
     printf ("\nSoma = %d\n\n", soma);
     system ("PAUSE");
}
