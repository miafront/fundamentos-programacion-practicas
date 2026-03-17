#include <stdio.h>
int main (){
	float nota;
	printf ("\n      RESULTADO ACADEMICO   \n");
	printf ("Ingrese la nota final del estudiante: ");
	scanf ("%f", &nota);
	if (nota >= 51) {
	printf ("El estudiante esta APROBADO");
	} else {
	printf ("El estudiante esta REPROBADO");	
	}
	
	return 0;
}
