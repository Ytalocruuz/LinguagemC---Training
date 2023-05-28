1.
#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr;
 ptr = (int *) malloc(sizeof (int)); 
 *ptr = 42;
 printf ("Endereco: %p\nValor: %d\n\n", ptr, *ptr);
 system("Pause"); 
 

 #include <stdio.h>
#include <stdlib.h>
struct semafaro {
 char cor[10];
 int id;
};
struct semafaro s1 = {"Vermelho", 1};
struct semafaro s2 = {"Amarelo", 2};
struct semafaro s3 = {"Verde", 3};
struct semafaro *ptr_s;
int main(){
 ptr_s = &s1; 
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor); 
 ptr_s = ptr_s + 1;
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor); 
 ptr_s = ptr_s + 1;
 printf("%d - %s\n", (*ptr_s).id,(*ptr_s).cor); 
 system("Pause");
 return(0);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tamanho;
int *vetor1, *vetor2;
int main() {
 int i;
 printf ("Escolha o tamanho do vetor: ");
 scanf("%d", &tamanho);
 vetor1 = (int *) malloc(sizeof (int)*tamanho); 
 vetor2 = (int *) malloc(sizeof (int)*(tamanho*2)); 
 printf ("\nVetor1: \n"); 
 for (i = 0; i < tamanho; i++) {
 vetor1[i] = pow(2,i);
 printf ("Posicao %d: %d\n", i, vetor1[i]); 
 }
 printf ("\nVetor2: \n"); 
 for (i = 0; i < tamanho*2; i++) {
 vetor2[i] = pow(3,i);
 printf ("Posicao %d: %d\n", i, vetor2[i]); 
 } 
 system("Pause"); 
 return(0);
}
