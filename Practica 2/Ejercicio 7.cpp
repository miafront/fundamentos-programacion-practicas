#include <stdio.h>
#include <math.h>
int main (){
	float C, T, M, G;
	int N;
	printf ("Ingrese el capital inicial: ");
	scanf ("%f", &C);
	printf ("Ingrese la tasa de interes anual (en decimales): ");
	scanf ("%f", &T);
	printf ("Ingrese el plazo de años: ");
	scanf ("%d", &N);
	M = C * pow((1 + T / 100 / 12), N * 12);
	G = M - C;
	printf ("El monto acumulado de la inversion con capitalizacion mensual es: %.2f\n", M);
	printf ("La ganancia neta es: %.2f\n", G);
	return 0;
	
}
