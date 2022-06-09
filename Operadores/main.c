#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float X;
    
    printf("Digite um numero: ");
    scanf("%f", &X);

    if( X > 10 && X < 20 ){
        printf("O valor e maior que 10 e menor que 20");
    }

    return (0);
}

int main(){
    char nome[20];
    float altura;
    int idade, ano;

    printf ("Oi, qual seu nome: ");
    scanf ("%s", nome);
    printf ("Qual sia idade: ");
    scanf ("%d", &idade);
    printf ("Qual sua altura ");
    scanf ("%f", &altura);

    ano = 2022 - idade;

    printf ("\nPrazer!! %s", nome);
    printf ("\nSua idade: %d", idade);
    printf ("\nAltura: %i", altura);
    printf ("\nAno de nascimento: %d", ano);
    
}

int main(){

    float numeroUsuario, numeroMaquina, resultado;

    numeroMaquina = 10;

    printf("Digite um numero: ");
    scanf("%f", &numeroUsuario);

    resultado = numeroUsuario + numeroMaquina;

    if ( resultado < 5){
        printf("\nNumero maior que 20");
    }else{
        printf("\nNumero menor! ");
    }

    return (0);
}