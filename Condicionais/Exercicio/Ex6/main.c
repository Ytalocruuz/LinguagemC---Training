#include <stdio.h>
#include <stdlib.h>

// Considere uma aplicação que necessita de um calendário embutido. Assim sendo, 
// construa um programa que, dado um número inteiro, informe o mês correspondente. 

int main(){

    int num;

    printf("Digite um numero do mes desejado: \n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("\n 1 - Janeiro \n");
    break;
    case 2:
        printf("\n 2 - Fevereiro \n");
    break;
    case 3:
        printf("\n 3 - Marco \n");
    break;
    case 4:
        printf("\n 4 - Abril \n");
    break;
    case 5:
        printf("\n 5 - Maio \n");
    break;

    case 6:
        printf("\n 6 - Junho \n");
    break;
    case 7:
        printf("\n 7 - Julho \n");
    break;
    case 8:
        printf("\n 8 - Agosto \n");
    break;
    case 9:
        printf(" \n 9 - Outubro \n ");
    break;

    case 10:
        printf("\n 10 - Setembro \n");
    break;
    case 11:
        printf("\n 11 - Novembro \n");
    break;
    case 12:
        printf("\n 12 - Dezembro \n");
    break;
    }
}