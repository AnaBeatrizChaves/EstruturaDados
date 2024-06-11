#include <stdio.h>
#include <stdlib.h>
#include "cidades.h"

int main() {
  Estrada *estrada = getEstrada("entrada.txt");
  
  double menorVizinhanca = calcularMenorVizinhanca("entrada.txt");
  printf("Menor vizinhanca: %.2f\n", menorVizinhanca);
  
  char *cidadeMenor = cidadeMenorVizinhanca("entrada.txt");
  printf("Cidade com menor vizinhanca: %s\n", cidadeMenor);

  free(estrada->C);
  free(estrada);
  return 0;
}