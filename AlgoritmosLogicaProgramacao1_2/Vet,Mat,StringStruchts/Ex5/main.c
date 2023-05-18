#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main (){

   char palavra[20];
   int i, aoContrario;

   printf("Digite uma palavra: ");
   gets(palavra);
   fflush(stdin);
   system("cls");

   aoContrario = strlen(palavra);

   for(i = aoContrario - 1; i <=0; i-- ){
    printf("%c", palavra[i]);

   }

   return(0);
}