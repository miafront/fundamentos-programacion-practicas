
#include <stdio.h>
int main (){
char nombre[100], carrera[100];
float edad, semestre;
printf ("\n   REGISTRO DE ESTUDIANTES   \n");
printf("\n---------------------------------\n");
printf ("Ingrese el nombre completo del estudiante: ");
scanf ("%s", &nombre);
printf("Ingrese la edad del estudiante: ");
scanf ("%f", &edad);
printf ("Ingrese la carrera del estudiante: ");
scanf("%s", &carrera);
printf("Ingrese el semestre del estudiante: ");
scanf("%f", &semestre);
printf("\n---------------------------------\n");
printf("\n   DATOS DEL ESTUDIANTE   \n");
printf("\n---------------------------------\n");
printf(" Nombre completo: %s\n", nombre);
printf(" Edad del estudiante: %.0f\n", edad);
printf(" Carrera del estudiante: %s\n", carrera);
printf (" Semestre del estudiante: %.0f\n", semestre);
printf("\n---------------------------------\n");
return 0;
}

