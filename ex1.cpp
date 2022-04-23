#include <stdio.h>
#include <stdlib.h>
// utiliza constante simb�lica para definir a quantidade de linhas
#define LINHAS 3
// utiliza constante simb�lica para definir a quantidade de colunas
#define COLUNAS 4
main () {
    // declara��o da matriz
    int matriz[LINHAS][COLUNAS];
    // i representa a linha e j representa a coluna
    int i, j;
    // leitura dos dados para a matriz
    for (i = 0; i < LINHAS; i++) { // vai de 0 at� a quantidade de linhas - 1
        for (j = 0; j < COLUNAS; j++) { // vai de 0 at� a quantidade de colunas -1
            printf ("matriz[%d][%d]: ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    // calcula a soma dos valores e apresenta os dados da matriz
    int soma = 0;
    for (i = 0; i < LINHAS; i++) { 
        for (j = 0; j < COLUNAS; j++) { 
            soma += matriz[i][j];
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }
    printf ("\nSoma = %d\n", soma);
    system ("PAUSE");
}

