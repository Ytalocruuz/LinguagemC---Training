// Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Depois de a matriz ter sido polulada, a algoritmo devera imprimir a matriz da seguinte forma: os dados da diagonal principal devem ser impressos normalmente e os dados fora do diaganal principal devem substitudos por zero.

#include <stdio.h>
#define TAM 3

int main()
{

    int mat[TAM][TAM];
    int i, j;

    // Lendo os dados
    for (i = 0; i < TAM; i++)
    { // linhas
        for (j = 0; j < TAM; j++)
        { // colunas
            printf("Usuario, por gentileza, insira um number:\n");
            scanf("%d", &mat[i][j]);
        }
    }

    // imprimir os dados
    for (i = 0; i < TAM; i++)
    { // linhas
        for (j = 0; j < TAM; j++)
        { // colunas
            if (i == j)
            {
                printf("%d  ", mat[i][j]);
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
}