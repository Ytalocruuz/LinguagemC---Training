#include <stdio.h>
#include <stdlib.h>

// Construa um programa que receba a idade de uma pessoa e identifique sua classe 
// eleitoral: não eleitor (menor que 16 anos de idade), eleitor obrigatório (entre 18 e 
// 65 anos) e eleitor facultativo (entre 16 e 18 anos e maior que 65 anos). 


int main(){

    int idade;

    printf("Qual sua idade: \n");
    scanf("%d",&idade);

    if (idade < 16){
        printf("Naao eleito!");
    }else{
        if(idade > 18 ){
            printf("Eleitor obrigatorio");
        }else{
            if(idade > 16 || idade < 18 || idade > 65 ){
                printf("Eleitor facultativo!");
            }
        }
    }
}