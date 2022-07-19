#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia dois vetores A e B, com 20 números inteiros. Efetue a 
// soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente. 

int main (){

    int vetorA[30];
    int i;

    for( i = 1; i < 30; i++){
        printf("Digite o %d elemento: \n", i);
        scanf("%d", &vetorA[i]);
        system("cls");
    }

    for( i = 29; i >- 0; i--){
        printf("\n %d", vetorA[i]);
    }

    return(0);
}