//Desenvolva um algoritmo que some todos os números
//Inteiros compreendidos entre 1 e 10 (inclusive)
// 1) utilizando while
// 2) utilizando for 
// 3) 10 número inteiros informados pelo usuarios. 
// 4) inteiros de 1 a 10 armazenados em vetor

#include <stdio.h>

int main(){
    // While 
    int i = 1; 
    int somaWhile = 0;
    int somaFor = 0;
    int somaUsuario = 0;
    int somavetor = 0;
    int vetorDados[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    
    while ( i <= 10){
        somaWhile += i; 
        i++;
    }
    printf("While\n");
    printf("Soma: %d.\n",somaWhile);
    //For
    for(i = 1; i <= 10; i++){
        somaFor += i;
    }
    printf("For\n");
    printf("Soma: %d.\n", somaFor);

    // Informar número do usuario
    int dado; 
    for(i = 1; i <= 10; i++){
        printf("Por favor, Digitar elementos:\n ");
        scanf("%d",&dado);
        somaUsuario += dado; 
    }
    printf("Valor inserido do usuario: \n");
    printf("Soma: %d.\n", somaUsuario);

    //Números armazedos em VETOR
    int vetor[10] ={ 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int v = 0;
    while(v<10){
        somavetor += vetorDados[v]; 
        v++;
    } 

    printf("Numero no vetor: \n");
    printf("Soma: %d", somavetor);


}