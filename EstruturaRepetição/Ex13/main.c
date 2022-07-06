#include <stdio.h>

int main(){

    int cod, data, ano, quantidade, dia, perdidos;
    float total, precoUnitario;
    char mes;

    quantidade = 0;
    total = 0;
    perdidos = 0;


    printf("Insira numero do perdido. \n");
    scanf("%d", &cod);

    while ( cod != 0)
    {
        printf("Digite a data do produto!\n");
        printf("Dia: \n");
        scanf("%d", &dia);
        printf("Mes: \n");
        scanf("%d", &mes);
        printf("Ano:\n");
        scanf("%d", &ano);
        printf("Preco unitario: \n");
        scanf("%d", &cod);
        printf("Quantidade: \n");
        scanf("%d", &cod);

        total = total + precoUnitario * quantidade;
    }

    printf("Cod: %d", cod);
    printf("Valor total: %.2f", total);


    
    
}