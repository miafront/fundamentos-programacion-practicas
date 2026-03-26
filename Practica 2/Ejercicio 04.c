#include <stdio.h>
int main (){
	char nombre [100];
	float salario, meses, aguinaldo;
	printf (" INGRESE EL NOMBRE DEL TRABAJADOR: \n");
	scanf ("%s", nombre);
	printf ("INGRESE EL SALARIO MENSUAL: \n");
	scanf ("%f", &salario);
	printf ("INGRESE LOS MESES TRABAJADOS: \n");
	scanf ("%f", &meses);
	aguinaldo = (salario * meses)/12; 
	if (meses >=12) {
	printf ("El aguinaldo del trabajador es: %.2f\n", salario);
	} else {
		aguinaldo = (salario * meses / 12);
		printf ("El aguinaldo del trabajador es: %.2f\n", aguinaldo);
	}
	
	return 0;
}
