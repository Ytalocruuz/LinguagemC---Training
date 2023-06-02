#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 5
struct livro{
    int codigo;
    char nome[50];
    char autor[60];
};

struct pilha_livros{
    int dados[MAX_LIVROS];
    int ini;
    int fim;
};

struct pilha_livros pilha;

void Empilhar();

void Empilhar(){
    if(pilha.fim == MAX_LIVROS){
        printf("Sinto muito, mas a mesa nao aguenta muito peso");
        system("pause");
    }else{
        printf("\n Digite o codigo do livro: \n ");
        scanf("%d", &pilha.dados[pilha.fim].codigo);
        printf("\n Digite o nome do livro: \n");
        scanf("%c", &pilha.dados(pilha.fim).nome);
        printf("\n Digite o Autor do livro: \n ");
        scanf("%c", &pilha.dados(pilha.fim).autor);
        pilha.fim++;
    }

}
