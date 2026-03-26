#include <stdio.h>
#include <math.h>
int main (){
	float capital, tasainteres, cuotamensual, montototal, interestotal, potencia;
	int numerocuotas;
	printf ("Ingrese el capital prestado: ");
	scanf ("%f", &capital);
	printf ("Ingrese la tasa de interes mensual: ");
	scanf ("%f", &tasainteres);
	printf ("Ingrese el numero de cuotas: ");
	scanf ("%d", &numerocuotas);
	potencia = pow ((1 + tasainteres) , numerocuotas); 
	cuotamensual = capital * (tasainteres * potencia)/ (potencia - 1);
	montototal = cuotamensual * numerocuotas;
	interestotal = montototal - capital;
	printf ("El total a pagar es: %.2f\n", interestotal);
	return 0;
	
	
}
