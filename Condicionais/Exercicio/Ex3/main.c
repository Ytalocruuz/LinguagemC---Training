#include <stdio.h>
#include <stdlib.h> 

int main (){

    float calorias;
    int opcao;
    
    calorias = 0;
    
    printf("Hello! Seja bem-vindo. \n");
    printf("Qual opcao: \n 1 - Italiano \n 2 - Japones \n 3 - Salvadorenho \n");
    scanf("%d", &opcao);
    
   
        switch (opcao){
            case 1: calorias = calorias + 750;
        break;
            case 2: calorias = calorias + 324;
        break;
            case 3: calorias = calorias + 545;
        break;
    	}

    
    printf("Qual opcao: \n 1 - Cha \n 2 - Suco de Laranja \n 4 - Refrigerante \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1: calorias = calorias + 30;
        break;
    case 2: calorias = calorias + 80;
        break;
    case 3: calorias = calorias + 90;
        break;
    }
    
    printf("Total de Calorias %.2f \n", calorias);

    return(0);
    

}
