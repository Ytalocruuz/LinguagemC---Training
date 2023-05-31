// Desenvolva um algoritmo que peça ao usuários que preencha os dados
// de um vator de 5 posições com valores reais quaisquer, desde que estejam
// compreendidos entre 1 e 100(suponho que o usuario irá respeitar o enunciado). 
// Ao final, o algoritmo deve mostrar, na tela, o conteúdo de cada posição do veto, 
// dividido por 100. 

#include <stdio.h>

int main(){
    float vet[5]; 
    int i = 0;

    while(i < 5){
        printf("Insira um dado de 1 a 100: \n ");
        scanf("%f", &vet[i]);
        vet[i] = vet[i] / 100.0;
        i++;
    }
    i = 0; 
    while (i < 10)
    {
        printf("Soma: %.2f.\n", vet[i]);
        i++;
    }
    printf("\n");
}

