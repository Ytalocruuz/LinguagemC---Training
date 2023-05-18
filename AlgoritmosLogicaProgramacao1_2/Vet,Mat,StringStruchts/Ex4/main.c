#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

// Faça um programa que leia um nome e apresente as letras que se encontram 
// nas posições pares.

int main (){

    char nome[10];
    int i, tam;

    printf("Digite seu primeirp nome.");
    gets(nome);
    fflush(stdin);
    system("cls");

     tam = strlen(nome);

    for(i = 0; i < tam; i++){
        if(i % 2 == 0){
            printf("\n %c", nome[i]);
        }

    }
    return(0);
}