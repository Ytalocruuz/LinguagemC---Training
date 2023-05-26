// Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e 
//alocação dinâmica na memória. 
//a) Defina um ponteiro do tipo inteiro.
//b) Faça alocação dinâmica para o ponteiro recém-criado.
//c) Preencha a memória com o valor 42.
//d) Imprima o endereço do ponteiro na memória e o valor contido nele.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int *p;

    p = (int *) malloc(4);

    if (p == NULL){
        printf("Error.");
    }
    else{
        *p = 42;
        printf("Endereçp dp ponteiro: %p", p);
        printf("Valor alocado: %d", *p);
        free(p);
        // O free é usado para liberar a memória que foi alocada dinamicamente usando malloc. É importante liberar a memória alocada dinamicamente para evitar vazamentos de memória. 
    }

}