#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, x1, x2, d;
    printf("Ingrese a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0 && b == 0) {
        printf("Ecuacion degenerada\n");
    }
    else if (a == 0) {
        x1 = -c / b;
        printf("Ecuacion lineal, x = %.2f\n", x1);
    }
    else {
        d = b*b - 4*a*c;

        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2*a);
            x2 = (-b - sqrt(d)) / (2*a);
            printf("Dos raices reales: %.2f y %.2f\n", x1, x2);
        }
        else if (d == 0) {
            x1 = -b / (2*a);
            printf("Raiz doble: %.2f\n", x1);
        }
        else {
            printf("Raices complejas\n");
        }
    }
    return 0;
}
