#include <stdio.h>

// Construa um programa que efetue a leitura de quatro notas de 20 alunos, calcule 
// a média de cada aluno e a média da turma. 

#define TAM 20;

int main (){

    float media[4]; 
    float notas[4][4];
    float somat, mediat, soma; 
    int i,j; 

    somat = 0;
    mediat = 0;

    for( i = 0; i < 4 ; i++ ){
        soma = 0;
        for( j = 0; j < 4; j++){
            printf("Informe a nota %d do aluno %d: \n", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma = soma + notas[i][j];
        }

        media[i] = soma/ 4;
        somat = somat + media[i];
        
    }

    mediat = somat / 4;
    for( i = 0;  i < 4; i++){
        printf("A media do aluno %d e: %.2f\n", i, media[i]);
    }
    printf("A media da turma e: %.2f\n", mediat);
    return (0);
}