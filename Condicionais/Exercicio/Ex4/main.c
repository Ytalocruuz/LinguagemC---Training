#include <stdio.h>
#include <stdlib.h>

// É comum, em uma aplicação, ter de determinar quais números são o maior ou o 
// menor, dentre todos os valores de um conjunto de dados. Assim sendo, escreva 
// um programa que receba cinco números inteiros e apresente o maior e o menor.

int main(){

    int num;
    int maior, menor;

    printf("Digite um o primeiro numero: \n  ");
    scanf("%d",&num);
    
    maior = num;
    menor = num;

    printf("Digite um o segundo numero: \n  ");
    scanf("%d",&num);

    if(num > maior){
        maior = num;
    }
    if(num < menor ){
        menor = num;
    }

    printf("Digite um o perceiro numero: \n  ");
    scanf("%d",&num);

    if(num > maior){
        maior = num;
    }
    if(num < menor ){
        menor = num;
    }

    printf("Digite um o quarto numero: \n  ");
    scanf("%d",&num);

    if(num > maior){
        maior = num;
    }
    if(num < menor ){
        menor = num;
    }

    printf("Digite um o quinto numero: \n  ");
    scanf("%d",&num);

    if(num > maior){
        maior = num;
    }
    if(num < menor ){
        menor = num;
    }

    printf("O maior numero é: %d\n", maior);
    printf("O maior numero é: %d\n", menor);

    return (0);
    
    
}