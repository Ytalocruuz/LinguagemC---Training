#include <stdio.h>
#include<stdlib.h>

// Faça um programa que leia dois vetores A e B, com 20 números inteiros. Efetue a 
// soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente. 


int main(){

    int vetorA[10];
    int vetorB[10];
    int vetorC[20];
    int i , j, troca;

    for(i = 1; i <10; i++){
        printf("Digite o %d elemento do vetor A: \n", i);
        scanf("%d", &vetorA[i]);
        printf("Digite o %d elemento do vetor B: \n", i);
        scanf("%d", &vetorB[i]);
        fflush(stdin);
        system("cls");

        vetorC[i] = vetorA[i] + vetorB[i];
    }

    for(i = 0; i < 9; i++){
        for(j = i + 1; j < 10; j++){
            if(vetorC[i] > vetorC[j]){
                troca = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = troca;
            }
        }
    }


    

    for(i = 1; i <20; i++){
       printf("%d - \n", vetorC[i]);
    }

    return(0);
    
}