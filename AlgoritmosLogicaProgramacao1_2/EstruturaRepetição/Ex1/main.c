#include <stdio.h>

// O problema consiste em ler um conjunto de números inteiros e contar a 
// quantidade de números pares e ímpares. A leitura deve ser realizada até 
// que seja lido o valor zero.

int main (){

    int par, impar, num;


    impar = 0;
    par = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    while (num != 0 )
    {
       if(num % 2 == 0)
        par++;
       else 
        impar++;

       printf("Digite um numero: \n");
       scanf("%d", &num);
    }

    printf("A quantidade de par e : %d\n", par);
    printf("A quantidade de ímpar e : %d\n", impar);
    return (0);
    
}