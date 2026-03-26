#include <stdio.h>
int main (){
	float celsius, farenheit, kelvin, rankine;
	printf ("Ingrese los grados en Celsius: ");
	scanf ("%f", &celsius);
	farenheit = (celsius * 9/5) + 32;
	kelvin = celsius + 273.15;
	rankine = (celsius + 273.15) * 9/5;
	
	printf ("La conversion es: \n");
	printf ("F: %.2f\n", farenheit);
	printf ("K: %.2f\n", kelvin);
	printf ("Ra: %.2f\n", rankine);
	
	return 0;
	
	
}
