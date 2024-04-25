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
    
    for (int i = 0; i < ponto; i++)fscanf(arquivo, "%f %f", &vertices[i].X, &vertices[i].Y);

    float area = areaTriangulo(vertices, ponto);

    printf("\n-------------------------------------------\n");
    printf("-------- TRABALHO PRATICO NUMERO 02 -------");
    printf("\n                Poligonos               \n");
    printf("\nAluna: Ana Beatriz Chaves Cardoso da Silva");
    printf("\nMatricula: UC23100039");
    printf("\n-------------------------------------------");
    printf("\n---> RESPOSTA\n");
    //Leitura dos vértices
    printf("- Vertices do Poligono:\n");
    for (int i = 0; i < ponto; i++) {
        printf("%.2f, %.2f\n", vertices[i].X, vertices[i].Y);
    }
    printf("- Area do poligono = %.0f", area);
    printf("\n-------------------------------------------\n");
    fclose(arquivo);

    return 0;
}