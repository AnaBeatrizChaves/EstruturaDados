#include <stdio.h>
#include <stdlib.h>

#define ERRO 1 

int main() {
    FILE *arquivo;
    char Letra;

    arquivo = fopen("arquivo.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(ERRO);
    }

    system ("cls");
    
    int x;

    do {
        //EOF: End of File
        x = fscanf(arquivo , "%c", &Letra);
        printf("%c", Letra);
    } while (x != EOF);

    fclose(arquivo);
    return 0;
}
