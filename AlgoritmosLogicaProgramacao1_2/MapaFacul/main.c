#include <stdio.h>
#include<stdlib.h>

// Onde:
// D = Dividendo
// d = Divisor
// q = Quociente
// r = Resto

int main(){
	
    int q, D, d, r;
    

    printf("Digite o primeiro numero (Dividendo): \n");
    scanf("%d", &D);
    fflush(stdin);
    printf("Digite o segundo numero (Divisor): \n");
    scanf("%d", &d);
    fflush(stdin);

    system("cls");

    q = D / d;
    
    r = D % d;

    printf("O quociente de %d / %d e: %d \n", D, d , q);
    printf("O resto e: %d\n", r); 
    
    return (0); 
}
