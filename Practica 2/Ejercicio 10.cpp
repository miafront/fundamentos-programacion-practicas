#include <stdio.h>
int main() {
    int d1, m1, d2, m2;
    int dias1, dias2, diferencia, meses, dias;
    printf("Fecha inicial (DD MM): ");
    scanf("%d %d", &d1, &m1);
    printf("Fecha final (DD MM): ");
    scanf("%d %d", &d2, &m2);
    dias1 = m1 * 30 + d1;
    dias2 = m2 * 30 + d2;
    diferencia = dias2 - dias1;
    meses = diferencia / 30;
    dias = diferencia % 30;
    printf("Diferencia: %d meses y %d dias\n", meses, dias);
    return 0;
}
