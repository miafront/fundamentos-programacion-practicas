#include <stdio.h>

int main (){
    float A, B, C, D, E, F, denominador, x, y;
    printf ("Ingrese el primer coeficiente A: ");
    scanf ("%f", &A);
    printf ("Ingrese el segundo coeficiente B: ");
    scanf ("%f", &B);
    printf ("Ingrese el tercer coeficiente C: ");
    scanf ("%f", &C);
    printf ("Ingrese el cuarto coeficiente D: ");
    scanf ("%f", &D);
    printf ("Ingrese el quinto coeficiente E: ");
    scanf ("%f", &E);
    printf ("Ingrese el sexto coeficiente F: ");
    scanf ("%f", &F);
    denominador = A * E - B * D;

    if (denominador == 0) {
        if ((A * F == C * D) && (B * F == C * E)) {
            printf ("El sistema tiene infinitas soluciones.\n");
        } else {
            printf ("El sistema no tiene solucion.\n");
        }
    } else {
        y = (A * F - C * D) / denominador;
        x = (C - B * y) / A;
        printf ("El sistema tiene una unica solucion.\n");
        printf ("X = %.2f\n", x);
        printf ("Y = %.2f\n", y);
    }
    return 0;
}
