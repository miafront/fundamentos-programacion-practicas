#include <stdio.h>
int main (){
	float horas, pago, total;
	printf ("\n          CALCULO DE SALARIO   \n");
printf("\n--------------------------------------------------\n");
	printf ("Ingrese la cantidad de horas trabajadas: ");
	scanf ("%f", &horas);
	printf ("Ingrese el pago por hora de trabajo: ");
	scanf ("%f", &pago);
		total = horas * pago;
	if (horas > 40) {
		total = total + total * 0.10; 
	} else {
		total = horas * pago;
	}
	printf ("El salario total del trabajador es: %.2f\n", total);
	
	return 0;
	
}
