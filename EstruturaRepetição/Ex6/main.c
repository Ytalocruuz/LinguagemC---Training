#include <stdio.h>

// A prefeitura de uma cidade está coletando informações sobre o salário e o 
// número de filhos dos habitantes. A leitura de dados é realizada até que seja 
// informado o valor -1 para o salário. Apresente a média de salário da população, 
// a média de filhos e o maior salário.

int main (){


    float salario, maiorSalario;
    int filhos, npessoas, somas, somaf;

    printf("Insira seu salario. \n");
    scanf("%f", &salario);
 
    npessoas = 0;
    somas = 0;
    somaf = 0;
    maiorSalario = 0;

    while ( salario != -1)
    {
        printf("Insira o numero de filhos. \n");
        scanf("%d", &filhos);
        npessoas++;

        if(salario > maiorSalario)
            maiorSalario = salario;
            somaf = somaf + filhos;
            somas = somas + salario;
            printf("Insira seu salario. \n");
            scanf("%f", &salario);

    }
    printf("A media de salarios e : %.2f\n",somas, npessoas);
    printf("A media de filhos e : %.2f\n",somaf, npessoas);
    printf("O maior salário e : %.2f\n", maiorSalario);
    return (0);
}