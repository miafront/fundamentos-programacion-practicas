#include <stdio.h>
int main() {
    int pollo, carne, queso, refresco, agua;
    float total = 0;
    printf("Cantidad saltena de pollo: ");
    scanf("%d", &pollo);
    printf("Cantidad saltena de carne: ");
    scanf("%d", &carne);
    printf("Cantidad empanada de queso: ");
    scanf("%d", &queso);
    printf("Cantidad refrescos: ");
    scanf("%d", &refresco);
    printf("Cantidad aguas: ");
    scanf("%d", &agua);
    total = pollo * 3.50 +
            carne * 4.00 +
            queso * 3.00 +
            refresco * 5.00 +
            agua * 3.00;
    printf("Total a pagar: Bs %.2f\n", total);

    return 0;
}
