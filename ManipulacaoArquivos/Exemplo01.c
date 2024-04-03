#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


#define ERRO 1 

int main () {
    FILE * arquivo; //declarando um ponteiro para arquivo
    int numero = 198;
    char palavra [] = "Adicionando msg";

    arquivo = fopen ("saida.txt", "a"); //w: escrita e apaga o que já tem / a: adicionar ao final do arquivo / r: ler

    if ( arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(ERRO);
    }

    fprintf(arquivo, "Número: %d Palavra: %s\n",numero, palavra);
    fclose(arquivo);

    return 0;
}
