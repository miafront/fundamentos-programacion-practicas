#include <stdio.h>
 int main(){
	float base, altura, area;
	printf ("\n  AREA DE UN TRIANGULO  \n");
	printf("\n---------------------------------\n");
	printf ("Ingrese la base del triangulo: ");
	scanf ("%f", &base);

	printf ("Ingrese la altura del triangulo: ");
	scanf ("%f", &altura);

	area = (base * altura) /2;

	printf ("El area del triangulo es: %.2f\n", area);
	
	return 0;
	
	
	
	
	

	
}
