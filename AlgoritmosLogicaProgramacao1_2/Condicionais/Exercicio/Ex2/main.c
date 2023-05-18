#include <stdio.h>
#include <stdlib.h>

// De acordo com uma tabela médica, o peso ideal está relacionado com a altura e 
// o sexo. Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e 
// imprima o seu peso ideal, sabendo que:

int main(){

    float altura, peso;
    char sexo;


    printf("Qual seu sexo: F ou M \n");
    scanf("%c", &sexo);
    printf("qual sua Altura: \n");
    scanf("%f", &altura);

    if(sexo == 'Feminino' || sexo == 'fenenimo'){
        
        peso = (62.1 * altura) - 44.7;

    }else{
        
        peso = (72.7 * altura) - 58;  
        
    }

    printf("Seu sexo e %c\n", sexo);
    printf("Sua altura e: %.2f\n", altura);
    printf("Seu peso e: %.2f\n", peso);
    
    return(0);
}
