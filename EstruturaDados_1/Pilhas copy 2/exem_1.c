//Biblioteca
#include <stdio.h>
#include <stdlib.h>
//constante
#define tamanho 3
// Estrutura da Pilha
struct tipo_pilha
{
    int dados[tamanho];
    int ini;
    int fim;
};

//VAriaveis Globais
struct tipo_pilha pilha;
int op; 

//Prototipação
void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

//Função prinicpal
int main (){
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0; 
    while ( op != 0)
    {
        system("cls");
        pilha_mostrar();
        pilha_sair();
        pilha_entrar();
        menu_mostrar();
        scanf("%d", &op); 
        switch (op)
        {
        case 1:
            pilha_entrar();
            break;
        case 2: 
           pilha_sair();
           break;
        case 3: 
            pilha_mostrar();
            break;
        default:
            printf("Nenhuma opção escolhida");
            system("pause");
            break;
        } 
    }
    return(0);
}
//Menu de opções

void menu_mostrar(){
    printf("\nEscolha uma opcaoo: \n");
    printf(" 1 - Empilhar\n");
    printf(" 2 - Desempilhar\n");
    printf(" 3 - Mostrar valores empilhado\n");
    printf(" 0 - Sair\n\n");
}
// Adiconar um elemento: 

void pilha_entrar(){
    if(pilha.fim == tamanho){
        printf("\n A Pilha está cheia, impossivel empilhar! \n\n");
        system("pause");
    }else{
        printf("\nDigite o valor a ser empilhado: ");
        scanf("%d", &pilha.dados[pilha.fim]);
        pilha.fim++; 
    }
}
// Tirar elementos
void pilha_sair(){
    if (pilha.ini == pilha.fim){
        printf("\n A Pilha está vazia, impossivel desempilar. \n\n");
        system("pause");
    }else{
        pilha.dados[pilha.fim-1] = 0 ;
        pilha.fim--;
    }
}
//Mostrar conteudo de pilha

void pilha_mostrar(){
    // int i ;
    printf("[ ");
    for(int i = 0; i < tamanho; i++){
        printf("%d ", pilha.dados[i]);
    }
    printf("]\n\n");
}


