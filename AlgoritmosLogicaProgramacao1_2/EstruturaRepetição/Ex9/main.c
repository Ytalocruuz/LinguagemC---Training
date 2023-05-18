#include <stdio.h>

// magine que você esteja ensinando a tabuada para uma criança e precisa mostrar 
// a ela todas as possíveis multiplicações entre os números que vão de um até dez. 
// Assim, elabore um programa que imprima a tabuada do um ao dez

int main(){

    int multiplicacao, i, j;

    for(i = 1; i < 10; i++){

        printf("Tabuada de %d\n\n", i);

        for( j= 0; j < 10; j++){

            multiplicacao = i *j; 
            printf("%d X %d = %d \n", i, j, multiplicacao);
        }   
    }
}