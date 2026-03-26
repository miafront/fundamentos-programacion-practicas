#include <stdio.h>
int main() {
    float kwh, total;
    printf("Ingrese el consumo en kWh: ");
    scanf("%f", &kwh);
    if (kwh == 0) {
        printf("SIN CONSUMO REGISTRADO\n");
    } else {
        if (kwh <= 100)
            total = kwh * 0.30;
        else if (kwh <= 300)
            total = kwh * 0.50;
        else if (kwh <= 600)
            total = kwh * 0.75;
        else
            total = kwh * 1.10;
        total = total + 8;
        printf("Total a pagar: Bs %.2f\n", total);
    }
    return 0;
}
