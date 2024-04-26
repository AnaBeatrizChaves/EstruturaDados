//Essa função determinará a área do triângulo conforme os dados do arquivo TXT passados como parâmetros.
float areaTriangulo(Pontos vertices[], int tamanho) {
    float area = 0;

    for (int i = 0; i < tamanho - 2; i++) {
       float M[3][3] = {
            {vertices[0].X, vertices[0].Y, 1},
            {vertices[i + 1].X, vertices[i + 1].Y, 1},
            {vertices[i + 2].X, vertices[i + 2].Y, 1},
        }; 
            
        float det = 0;

        det = det + (M[0][0] * M[1][1] * M[2][2]);
        det = det + (M[0][1] * M[1][2] * M[2][0]);
        det = det + (M[0][2] * M[1][0] * M[2][1]);
        det = det - (M[2][0] * M[1][1] * M[0][2]);
        det = det - (M[2][1] * M[1][2] * M[0][0]);
        det = det - (M[2][2] * M[1][0] * M[0][1]);

/*
        if (det == 0) {
            printf("\n--------------------------------------------");
            printf("\n----------------- ATENCAO ------------------\n");
            printf("\nOs pontos dos vertices presente no arquivo,\nnao formam um triangulo!\n");
            printf("Tente novamente...\n");
            printf("\n-------------------------------------------\n");
            printf("             Programa Encerrado!!             ");
            printf("\n--------------------------------------------\n");
            exit(0);
        }
*/
        area += det / 2;
    }

    if (area < 0) {
        area = -area;
    }

    return area;
}