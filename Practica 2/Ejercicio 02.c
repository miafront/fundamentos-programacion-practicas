#include <stdio.h>
int main (){
	float radio, altura, superficie, volumen, arealateral, areatotal;
	printf ("Ingrese el radio del cilindro: ");
	scanf ("%f", &radio);
	printf ("Ingrese la altura del cilindro: ");
	scanf ("%f", &altura);
	arealateral = 2 * 3,1416 * radio * altura;
	areatotal = 2 * 3,1416 * radio * (radio + altura);
	volumen = 3,1416 * radio * radio * altura;
	printf ("El area lateral del cilindro es: %.2f\n", arealateral);
	printf ("El area total del cilindro es: %.2f\n", areatotal);
	printf ("El volumen del cilindro es: %.2f\n", volumen);
	return 0;
	
	
	
}
