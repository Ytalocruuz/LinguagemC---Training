#include <stdio.h>
#include <math.h>

//  muito comum que programas tenham de implementar funcionalidades para identificar características específicas e realizar operações sobre um conjunto de dados. 
// Dessa forma, faça um programa que apresenta a soma de todos os números inteiros 
// ímpares entre 200 e 500

int main(){

    int i ;
    float soma;

    for(i = 200.00; i <= 500.00; i++){

        if( i % 2 == 1 ){
            soma = soma + i;

            printf("A soma dos numero impares: %.0f \n", soma);
        }
    }

    return(0);
}