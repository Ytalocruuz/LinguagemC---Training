#include <stdio.h>
#include<stdlib.h>

#define TAM 20;

struct livro
{
    int cod;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};

int main (){

    struct livro ficha[20];
    struct livro troca;
    int busca, i,j, acha,op;

    op = 0;

    while ( op != 5)
    {
        printf("1 - Cadastrar os livros\n");
        printf("2 - Imprimir os livros cadastrados\n");
        printf("3 - Pesquisar livros por codigo\n");
        printf("4 - Ordenar os livros por ano\n");
        printf("5 - Sair\n");
        scanf("%d", &op);
        fflush(stdin);

        if (op == 1){

            system("cls");

            for(i = 0; i < 20; i++){
                printf("Digite o codigo do livro da posicao %d:", i +1);
                scanf("%d", &ficha[i].cod);
                fflush(stdin);
                printf("Digite o titilo do livro: ");
                scanf("%50[^\n]s", &ficha[i].titulo);
                fflush(stdin);
                printf("Digite o nome do autor: ");
                scanf("%30[^\n]s", &ficha[i].autor);
                fflush(stdin);
                printf("Digite a area do livro: ");
                scanf("%30[^\n]s", &ficha[i].area);
                fflush(stdin);
                printf("Digite o ano: ");
                scanf("%f", &ficha[i].ano);
                fflush(stdin);
                printf("Digite o nome da autora: ");
                scanf("%30[^\n]s", ficha[i].editora);
                fflush(stdin);
             }
        }else{
                if (op == 2)
                {
                    system("cls");
                    for(i=0; i < 20;i++){
                        printf("\nCodigo: %d\n", ficha[i].cod);
                        printf("Titulo: %s\n", ficha[i].titulo);
                        printf("Autor: %s\n", ficha[i].autor);
                        printf("Area: %s\n", ficha[i].area);
                        printf("Ano: %d\n", ficha[i].ano);
                        printf("Editora: %s\n\n", ficha[i].editora);


                    }
                }else{
                    if(op == 3){
                        system("cls");
                        printf("Digite o codigo que deseja buscar: ");
                        scanf("%d", &busca);

                        i = 0;
                        acha = 0;

                        while (i < 20 && acha == 0)
                        {
                            if(ficha[i].cod == busca)
                                acha = 1;
                            else
                                i++;
                        }

                        if(acha == 1){
                            printf("\nCodigo: %d\n", ficha[i].cod);
                            printf("Titulo: %s\n", ficha[i].titulo);
                            printf("Autor: %s\n", ficha[i].autor);
                            printf("Area: %s\n", ficha[i].area);
                            printf("Ano: %d\n", ficha[i].ano);
                            printf("Editora: %s\n\n", ficha[i].editora);
                        }else{
                            printf("\n Registro não encontrado");
                    }
                }else{
                    if(op == 4){
                        system("cls");
                        for(i = 0; i < 20-1; i++){
                            for(j  = i +1 ; j < 20; j++);{
                                if(ficha[i].ano > ficha[j].ano){
                                    troca = ficha[i];
                                    ficha[i] = ficha[i];
                                    ficha[i] = troca;
                                }
                            }
                        }

                        for(i = 0; i< 20; i++){
                            printf("\n Codigo: $d, Titulo: %s, Ano: %d\n\n", ficha[i].cod, ficha[i].titulo, ficha[i].ano);
                        }
                    }
                }
             }
         }    
    }

    return (0);
}