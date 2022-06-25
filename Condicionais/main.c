#include <stdio.h>
#include <stdlib.h>

int main (){

   int numUsuario;

   printf("Digite um numero: \n");
   scanf("%i", &numUsuario);

   if(numUsuario > 0){
       printf("Numero %i e positivo!", numUsuario);
   }else if (numUsuario == 0){
       printf("Numero %i nao e negativo e nem positivo!", numUsuario);

   } else {
       printf("Numero %i e negativo!", numUsuario);
   }

   return(0);
   
}


int main(){
    int num;
    
    printf("  Qual dia da semana voce deseja? \n 1 - Domingo \n 2 - Segundas-feira \n 3 - Terça-feira \n 4 - Quarta-feira \n 5 - Quinta-feira \n 6 - Sexta-feira \n 7 - Sabado \n");
    scanf("%i", &num);

    switch (num)
    {
    case 1: printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    
    default:
        printf("Opcao valida!!");
        break;
    }

    return 0  ;

}


int main(){

    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(num % 5 == 0){
        printf("O numero %d e divisivel por cinco", num);
    }else{
        printf("O numero %d nao e divisivel por cinco", num);
    }

    return(0);
}

int main (){

    char nome[30];
    int idade;

    printf("\tHello, seja bem vindo! \n \n");
    printf("Digite seu nome: \n ");
    scanf("%s", nome);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    if(idade <= 18){
        printf("Sua mensalidade e R$50,00 reias");
    }else {
        if((idade >= 19) && (idade <=29)){
            printf("sua mensalidade e R$70,00 reais");
        }else{
            if(idade >= 30 && idade <= 45){
                printf("sua mensalidade e R$90,00 reais");
            }else{
                if(idade >= 46 && idade <= 65){
                    printf("sua mensalidade e R$130,00 reias.");
                } else {
                    if ( idade >= 66){
                        printf("Mensalidade R$170,00 reais. ");
                    }
            }
        }
    }
}

}



int main (){

    float peso, altura, IMC;
    char op;

    do{
        printf("Digite seu peso:\n  ");
        scanf("%f", &peso);
        printf("Digite sua Altura:\n  ");
        scanf("%f", &altura);

        IMC = peso / (altura * altura); 

        printf("Seu IMC é: %.2f.\n", IMC);

        if(IMC < 21){
            printf("Abaixo do peso.\n ");
        }else{
        if(IMC > 30.75){
            printf("Obeso. \n");
        }else{
            printf("Peso padrao. \n");
        }
        }
        printf("Deseja executar nvamente: Se sim, digite Y.  \n");
        scanf("%c", &op);
    }while (op == 'y' || op == 'Y' );
        
}

