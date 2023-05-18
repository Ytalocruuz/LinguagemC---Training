#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Em algumas situações, em uma aplicação, é preciso determinar quais são os
// números múltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados. Dessa forma, faça um programa que leia um número e informe 
// se ele é divisível por três e por sete.

int main(){

    int num, divisivel, total;

    printf("Digite um numero: \n ");
    scanf("%d", &num); 

    if(num % 7 == 0)

        printf("O numero %d e divisivel por 7 ",num);

     if(num % 3 == 0)

        printf("e por 3.");

    

}