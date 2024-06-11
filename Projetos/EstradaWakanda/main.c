#include <stdio.h>
#include <stdlib.h>
#include "cidades.h"

int main() {
  Estrada *estrada = getEstrada("entrada.txt");
  
  double menorVizinhanca = calcularMenorVizinhanca("entrada.txt");
  printf("\n=========== TP03 - TRABALHO INDIVIDUAL ===========\n");
  printf("                ESTRADA DE WAKANDA                \n");
  printf("Aluna: Ana Beatriz Chaves Cardoso da Silva\n");
  printf("Turma: Estrutura de Dados - GPE17N0292\n");
  printf("===================================================\n");
  printf("Menor vizinhanca: %.2f\n", menorVizinhanca);
  
  char *cidadeMenor = cidadeMenorVizinhanca("entrada.txt");
  printf("Cidade com menor vizinhanca: %s\n\n", cidadeMenor);

  free(estrada->C);
  free(estrada);
  return 0;
}