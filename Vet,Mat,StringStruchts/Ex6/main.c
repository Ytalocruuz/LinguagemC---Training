#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (){

    char palavra[30];
    int i, tam;

    printf("Digite qualquer palavra: ");
    gets(palavra);

    tam = strlen(palavra);

    for( i = 0; i < tam; i++){
        printf("%s\n", palavra[i]);
    }
    return(0);
}