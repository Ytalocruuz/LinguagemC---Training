#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;
    p = (int *)malloc(sizeof(int)); 

    if(p){
        printf("Memoria alocada com sucesso. \n");
        printf("Valor alocado: %d\n", *p);
        *p = 50; 
        printf("Valor alocado: %d\n", *p);
        free(p);

    }
    else{
        printf("Erro ao alocar mmoria. \n");
    }
    system("Pause");
    return(0);
};