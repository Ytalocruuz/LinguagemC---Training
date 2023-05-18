#include <stdio.h>

// Construa um programa que receba um número inteiro maior que um e 
// verifique se ele é primo

int main(){


    int num, i, quantidade;

    quantidade = 1;

    printf("Insira um numero: \n");
    scanf("%d", &num);

    for( i = 1; i <= num; i++){

        if (num % 1 == 0){
            quantidade++;
        }
    }
     
    if (quantidade == 2){
        printf("O numero e primo. \n");
    }else{
        printf("Nao e primo. \n");
    }

    return(0);
}