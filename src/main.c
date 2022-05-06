/*
   @disciplina: Algoritmos e Programação de Computadores - APC
      @autores:
  		          Gabriel Goncalves Rocha
  	      		  Maria Alice Bernardo Da Costa Silva
  	      		  Pedro Henrique Dos Santos Ferreira
  	      		  Vinícius Mendes Martins
*/

#include <stdio.h>
#include <stdlib.h>

#include "point.h"
#include "randNumber.h"
#include "distancia.h"
#include "esperanca.h"

int main()
{
  long long dardos; 
  point_t * points;

  printf("Digite o numero de dardos: ");
  scanf("%lld", &dardos);

  points = (point_t *) malloc (sizeof(point_t[dardos]));

  randomNumber(dardos, points);

  printf("Esperança por Monte Carlo: %.5lf\n",distanc(points, dardos));
  printf("Esperança por Análise: %.5lf\n\n",esperanc());

  free(points);

  return 0;
}
