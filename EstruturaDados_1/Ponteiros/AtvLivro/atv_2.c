// Uma famosa fábrica de semáforos está testando um novo protótipo, menor,
// mais barato e eficiente. Foi solicitado à equipe de TI um programa em linguagem C para fazer o teste do novo hardware. O semáforo tem três objetos, cada
// um contém um atributo cor e outro id. Devido às limitações de memória e processamento, é necessária a criação de um ponteiro que vai percorrendo a memória e imprimindo o valor na tela.
// a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id
//(inteiro).
/// b) Crie três variáveis com o tipo definido no item a.
// c) Crie um ponteiro do mesmo tipo.
/// d) Inicialize as estruturas da seguinte forma:
// • cor vermelha, id 1.
// • cor amarela, id 2.
// • cor verde, id 3.
// e) Inicialize o ponteiro apontando para a primeira variável criada.
// f) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima o valor de cada uma das variáveis criadas nesse progra

#include <stdio.h>
#include <stdlib.h>
struct semafaro
{
    char cor[10];
    int id;
};
struct semafaro s1 = {"Vermelho", 1};
struct semafaro s2 = {"Amarelo", 2};
struct semafaro s3 = {"Verde", 3};
struct semafaro *ptr_s;
int main()
{
    ptr_s = &s1;
    printf("%d - %s\n", (*ptr_s).id, (*ptr_s).cor);
    ptr_s = ptr_s + 1;
    printf("%d - %s\n", (*ptr_s).id, (*ptr_s).cor);
    ptr_s = ptr_s + 1;
    printf("%d - %s\n", (*ptr_s).id, (*ptr_s).cor);
    system("Pause");
    return (0);
}
