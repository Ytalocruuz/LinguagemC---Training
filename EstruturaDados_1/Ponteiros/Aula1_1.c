#include <stdio.h>

int main(void){
    int *p;
    int num = 10; 
    p = &num;

    printf("Valor apontado por p: %d %d", *p, num);
}