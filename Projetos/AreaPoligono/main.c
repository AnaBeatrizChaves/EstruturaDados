#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "funcao.c"

int main() {

    FILE *arquivo;
    int ponto;

    arquivo = fopen("trianguloABC.txt", "r");
    system("cls");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo! Tente Novamente...\n");
        exit(ERRO);
    }

    fscanf(arquivo, "%d", &ponto);
    Pontos vertices[ponto];

    //linha utilizada para fazer a leitura dos pontos de vertices presentes no arquivo .TXT
    for (int i = 0; i < ponto; i++) fscanf(arquivo, "%f %f", &vertices[i].X, &vertices[i].Y);

    float area = areaTriangulo(vertices, ponto);

    printf("\n-------------------------------------------\n");
    printf("-------- TRABALHO PRATICO NUMERO 02 -------");
    printf("\n                Poligonos               \n");
    printf("\nAluna: Ana Beatriz Chaves Cardoso da Silva");
    printf("\nMatricula: UC23100039");
    printf("\n-------------------------------------------");
    printf("\n---> RESPOSTA\n");
    printf("- Vertices do Poligono:\n");
    printf("  X   |   Y\n");
    for (int i = 0; i < ponto; i++) {
        //linha utilizada para printar na tela os pontos de vertices presentes no arquivo .TXT
        printf("%.2f    %.2f\n", vertices[i].X, vertices[i].Y);
    }
    printf("- Area do poligono = %.2f", area);
    printf("\n-------------------------------------------\n");
    fclose(arquivo);

    return 0;
}