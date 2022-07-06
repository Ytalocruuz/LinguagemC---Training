#include <stdio.h>

// Para poder classificar um conjunto de dados, é comum que programadores utilizem estruturas de decisão associadas a estruturas de repetição. Assim sendo, 
// construa um programa que apresente todos os números divisíveis por três e por 
// sete que sejam menores que 30.


int main(){

    int i, divisiveis, soma;

    for( i = 0; i < 30; i++){

        if( i % 3 == 0){
            printf("Os numeros divisiveis por 3. %d\n", i);
        }
        if(i % 7 == 0){
            printf("Os numeros divisiveis por 7. %d\n", i);
        }
    }

    return(0);
}