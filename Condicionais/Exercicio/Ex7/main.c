#include <stdio.h>
#include <stdlib.h>

// Elabore um programa que receba o salário de um funcionário e o código do
// cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a 
// seguir apresenta os cargos.

int main(){

    float salario, aumento, novSalario;
    int cod;

    
    printf("Codigo de cargo:\n ");
    scanf("%d", &cod);


    if(cod == 1 || cod == 2 || cod == 3 || cod == 4){


        printf("Qual seu salario:\n ");
        scanf("%f", &salario);



      if(cod == 1){
        aumento = salario / 100;
        aumento = aumento * 40;

        novSalario = aumento + salario;

        printf("Cargo: Servente. \n");
        printf("Aumentou: R$%.2f reais.\n", aumento);
        printf("Salario atualizado R$%.2f reais. \n", novSalario);
     }else{
        if(cod == 2){
            aumento = salario / 100;
            aumento = aumento * 35;

            novSalario = aumento + salario;

            printf("Cargo: Pedreiro. \n");
            printf("Aumentou: R$%.2f reais.\n", aumento);
            printf("Salario atualizado R$%.2f reais. \n", novSalario); 
        }else{
            if(cod == 3){
                aumento = salario / 100;
                aumento = aumento * 20;

                novSalario = aumento + salario;

                printf("Cargo: Mestre de obras. \n");
                printf("Aumentou: R$%.2f reais.\n", aumento);
                printf("Salario atualizado R$%.2f reais. \n", novSalario); 
            }else{
                if(cod == 4){
                    aumento = salario / 100;
                    aumento = aumento * 10;

                    novSalario = aumento + salario;

                    printf("Cargo: Técnico de segurança. \n");
                    printf("Aumentou: R$%.2f reais.\n", aumento);
                    printf("Salario atualizado R$%.2f reais. \n", novSalario); 

                }
            }
        }
    }
    }else{
        printf("Opcao valida!");
    }



    
    
     

}