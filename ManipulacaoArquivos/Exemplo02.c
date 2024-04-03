#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


#define ERRO 1 

int main () {
    FILE * arquivo; //declarando um ponteiro para arquivo
    int numero;
    char palavra[50];

    arquivo = fopen ("arquivo.txt", "r"); //w: escrita e apaga o que já tem / a: adicionar ao final do arquivo / r: ler

    if ( arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(ERRO);
    }

    fscanf(arquivo, "%d %s\n", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);
    fscanf(arquivo, "%d %s\n", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);
    fscanf(arquivo, "%d %s\n", &numero, palavra);
    printf("Numero: %d - Palavra: %s\n", numero, palavra);
    
    fclose(arquivo);
    return 0;
}