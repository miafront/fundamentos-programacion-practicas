#include <stdio.h>
int main (){
	int parcial1, parcial2, final, proyecto, nota;
	printf ("Ingrese la nota del primer parcial: ");
	scanf ("%d", &parcial1);
	printf ("Ingrese la nota del 2do parcial: ");
	scanf ("%d", &parcial2);
	printf ("Ingrese la nota del examen final: ");
	scanf ("%d", &final);
	printf ("Ingrese la nota del proyecto: ");
	scanf ("%d", &proyecto);
	nota = (parcial1 + parcial2 + final + proyecto) / 4;
	if (nota>= 51) {
		printf ("El estudiante esta APROBADO");
	} else { 
	printf ("El estudiante esta REPROBADO");
	}
	
	return 0;
	
	
}
