#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float X;
    
    printf("Digite um numero: ");
    scanf("%f", &X);

    // resultado1 = 10 + numeroUsuario;

    if( X > 10 && X < 20 ){
        printf("O valor e maior que 10 e menor que 20");
    }

    return (0);
}