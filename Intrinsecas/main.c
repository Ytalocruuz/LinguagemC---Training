#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(){

    int a, resultadoQuadrada, resultadoSeno, resultadoTangente;
    printf("Digite um numero: ");
    scanf("%i", &a);

    resultadoQuadrada = sqrt(a);
    resultadoSeno = sin(a);
    resultadoTangente = tan(a);



    printf("\nA raiz quadrada e: %i", resultadoQuadrada );
    printf("\nO seno e: %i", resultadoSeno );
    printf("\nA tangente e: %i", resultadoTangente);
}

// 