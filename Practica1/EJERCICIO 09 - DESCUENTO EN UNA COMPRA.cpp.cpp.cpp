#include <stdio.h>
int main (){
	float compra, total;
	printf ("\n    DESCUENTO EN UNA COMPRA   \n");
	printf ("Ingrese el monto de la compra: ");
	scanf ("%f", &compra);
	if (compra > 100) {
		total =  compra - compra * 0.12;
	} else {
	total = compra;	
	}
	printf ("El monto total a pagar es: %.2f\n", total);
	
	return 0;
	
}
