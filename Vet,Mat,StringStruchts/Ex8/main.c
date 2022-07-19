#include <stdio.h>

// Construa um programa que leia informações (matrícula, nome, setor e salário) 
// de 20 funcionários. Deve ser permitido executar quantas consultas o operador 
// desejar, em que ele digita a matrícula e são apresentados o setor e o salário. Se a 
// matrícula digitada não existir, informar o usuário.

struct funcionarios
{
    int matriculo ;
    char nome[50];
    char setor[50];
    float salario;
}

int main(){

    struct funcionarios ficha[4];
    int buscar, i, acha;
    char op;

    for( i = 0; i < 4; i ++){

        printf("Digite sua matricula: \n");
        scanf("%d", &ficha[i].matriculo);
        fflush(stdin);
        printf("Digite seu nome:\n");
        scanf("%50[^\n]s", &ficha[i].nome);
        fflush(stdin);
        printf("Digite o nome do seu setor: \n");
        scanf("%50[^\n]s", &ficha[i].nome);
        fflush(stdin);
        printf("Digite seu salario: \n");
        scanf("%f", &ficha[i].salario);
        fflush(stdin);
    }

    do{
        printf("Deseja fazer uma consulta:(S ou N) \n");
        scanf("%c", &op);
        fflush(stdin);

    }while (op != 'S' && op != 's' && op != 'N' && op != 'n');

    while ( op == 'S' || op == 's' )
    {
        printf("Digite o numero da matricula: \n");
        scanf("%d", &buscar);
        fflush(stdin);
        i = 0;
        acha = 0;
        while ( i < 4 && acha == 0)
        {
            if (ficha[i].matriculo == buscar){
                acha = 1;
            }else{
                i++;
            }
        }
        if(acha == 1){
                printf("O setor e: %.2s\n", ficha[i].setor);
                printf("O salario e: R$%2.f\n ", ficha[i].salario);
        }else{
            printf("Matricula nao cadastrada: ");
        }

        do{
        printf("Deseja fazer uma consulta:(S ou N) \n");
        scanf("%c", &op);

        }while (op != 'S' && op != 's' && op != 'N' && op != 'n');
        
    }
    
    return(0);
}

