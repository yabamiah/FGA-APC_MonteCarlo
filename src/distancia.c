#include <stdlib.h>
#include <math.h>
#include <stdio.h>

#include "point.h"
#include "randNumber.h"

double distanc(point_t points[], long long dardos)
{
	const double raio = 0.5;
	long pontos = 0;
	
	double *resultados;
	resultados = (double *) malloc (sizeof(point_t[dardos]));
	
	for(long i = 0; i < dardos; ++i)
		resultados[i] = hypot(points[i].pX - raio, points[i].pY - raio);

	for(long i = 0; i < dardos; ++i)
	{
		if(resultados[i] <= 0.1)
			pontos += 100;
		else if(resultados[i] <= 0.2)
			pontos += 50;
		else if(resultados[i] <= 0.3) 
			pontos += 30;
		else if(resultados[i] <= 0.4)
			pontos += 15;
		else if(resultados[i] <= 0.5)
			pontos += 5;
		else
			pontos += 0;
	}

	double espMonte = (double) pontos / dardos;

	free(resultados);

	return espMonte;
}
