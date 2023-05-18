#include <stdio.h>

// Em uma avaliação de um produto, o cliente responde sua opinião (1 – satisfatório; 2 – 
// indiferente; 3 – insatisfatório). Faça um programa que leia idade e opinião e apresente: 
// o número de clientes que responderam satisfatório, a média de idade dos clientes que 
// opinaram como satisfatório, e o número de clientes que responderam insatisfatório. 
// O programa se encerra quando for digitado o valor zero para idade

int main (){


    int idade,opiniao, nPessoas, satisfatorio, insatisfatirio ;
    float media, soma;

    nPessoas = 0;
    satisfatorio = 0;
    insatisfatirio = 0;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    while (idade != 0)
    {
        do
        {
            printf("Digite sua opiniao: \n");
            scanf("%d", &opiniao);
        } while ( opiniao!= 1 && opiniao!= 2 && opiniao!= 3);

        nPessoas++;

        if(opiniao == 1){
            soma = soma + idade;
            satisfatorio++;
        }else{
            if(opiniao == 3){
                insatisfatirio++;
            }
        }

        printf("Digite sua idade: \n");
        scanf("%d", &idade);
    }

    media = soma/nPessoas;

    printf("O numero de pessoas insatisfeitas e: %d \n", insatisfatirio);
    printf("O numero de pessoas satisfeitas: %d \n", satisfatorio);
    printf("A media de idade das pessoas satisfeitar e: %.2f \n", media);

    return(0);

}