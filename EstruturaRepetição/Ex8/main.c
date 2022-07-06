#include <stdio.h>
#include <math.h>

// Faça um programa que leia números inteiros até que seja informado o valor 0. 
// Apresente a média dos valores, o maior e o menor valor e a quantidade de números 
// pares e ímpares.

int main(){

    int num, nPares, nImpares, maior, menor, nPessoas, soma;
    float media;

    nPares= 0;
    nImpares = 0;
    media = 0;
    nPares = 0;
    maior = 0;
    menor = 0;
    soma = 0;

    printf("Digite um numero inteiro: \n");
    scanf("%d,", &num);

    while (num != 0)
    {

        if(num!= 0){
            nPessoas++;
        }

        soma = soma + num;

        if(num > maior && num != 0){
            maior++;
        }if (num < menor && num != 0){
            menor++;
        }

        if(num % 2 == 0){
            nPares++;
        }else{
            nImpares++;
        }

        printf("Digite um numero inteiro: \n");
        scanf("%d,", &num);
    }

      media = soma/ nPessoas;

    

    printf("A media da quantidade dos valores e: %.2f \n", media);
    printf("O maior valor é: %d \n", maior);
    printf("O menor valor e: %d \n", menor);
    printf("Quantidade de numero pares: %.d \n", nImpares);
    printf("Quantidade de numero impar e: %d \n", nPares);


    


    



}