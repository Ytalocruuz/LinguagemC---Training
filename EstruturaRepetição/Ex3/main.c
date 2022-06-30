#include <stdio.h>

// Faça um programa que leia um número inteiro e calcule o seu fatorial.


int main (){


    int num, i, fat;

    printf("Digite um numero: \n ");
    scanf("%d", &num);

    fat = 1;

    for( i = 1; i <= num; i++){
        fat = fat * i;
    }

    printf("O fatorial e: %d \n ", fat);
    return (0);
} 