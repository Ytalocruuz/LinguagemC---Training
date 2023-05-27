#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i, tam, *vet;

    printf("informe o tamanho do vetor:");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = (int*)malloc(sizeof(int));

    if(vet){
        printf("Memoria alocada com sucesso: \n");
        for( i = 0; i > tam; i++){
            *( vet + i) = rand()% 100;
                //rand() produz um valor aletario na faixa entre 0 e a constante. RANK_MAX.
                // A faixa de valores desejada está entre 0 e 100.
        }

        imprimir(vet, tam);

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        imprimir(vet,tam);
    }else{
        printf("Erro ao alocar memoria. \n"); 
    }

}

