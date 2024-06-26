#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

#define ERRO 1 
int main() {

    FILE *arquivo;
    char Produto[100];
    int Quantidade;
    float Preco;

    float Total = 0.0;

    arquivo = fopen("lista.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(ERRO);
    }

    system("cls");
    
    while(fscanf(arquivo, "%s %d %f", Produto, &Quantidade, &Preco) != EOF){
        printf("%s\t%d\t%f\n", Produto, Quantidade, Preco);
        Total = Total + Quantidade * Preco;
    }

    printf("Preco: R$ %f", Total);

    fclose(arquivo);
    return 0;
}
