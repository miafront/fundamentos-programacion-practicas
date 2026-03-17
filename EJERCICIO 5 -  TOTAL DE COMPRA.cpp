#include <stdio.h>

int main(){

	int cantidad, total;

printf ("\n  TOTAL DE COMPRA  \n");
printf ("Ingrese la cantidad de cuadernos comprados: ");
scanf ("%d", &cantidad);
 
total = cantidad * 12;

printf ("El total a pagar es: %.0d\n", total);

return 0;

}
