#include <stdio.h>

// O problema consiste em auxiliar um professor no fechamento das notas de uma 
// turma. Para tanto, deve ser construído um programa que leia o código do aluno, 
// o número de notas da disciplina e as notas. Calcule a média final de cada aluno e 
// informe o número de alunos aprovados e reprovados. Para ser aprovado, o estudante precisa obter média maior ou igual a seis. O programa é encerrado quando 
// é informado o código de aluno zero

int main (){

    int cod,soma, media, reprovados, aprovados;
    float notas, numeroNotas;

    printf("Insira o numero de notas: \n");
    scanf("%f", &numeroNotas);
    printf("Insira seu codigo: \n");
    scanf("%d", &cod);

    while (cod != 0)
    {
        soma = 0;

        for(int i = 1; i <= numeroNotas; i++){
            printf("Digite a nota do numero: \n");
            scanf("%d", &notas);
            soma = soma + notas;
        }

        media = soma/ numeroNotas;

        reprovados = 0;
        aprovados = 0;

        if(media >= 6){
            reprovados++;
        }else{
            aprovados++;
        }

        printf("Insira seu codigo: \n");
        scanf("%d", &cod);

    }
    
    printf ("O numero de aprovados e: %d\n", 
    aprovados);
    printf ("O numero de reprovados e: %d\n", 
    reprovados);
    return (0);

}