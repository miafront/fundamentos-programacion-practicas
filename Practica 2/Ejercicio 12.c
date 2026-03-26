#include <stdio.h>
int main() {
    int dia, mes;
    printf("Ingrese dia y mes: ");
    scanf("%d %d", &dia, &mes);
    if ((mes == 3 && dia >= 21) || (mes > 3 && mes < 6) || (mes == 6 && dia < 21))
        printf("Otono\n");
    else if ((mes == 6 && dia >= 21) || (mes > 6 && mes < 9) || (mes == 9 && dia < 21))
        printf("Invierno\n");
    else if ((mes == 9 && dia >= 21) || (mes > 9 && mes < 12) || (mes == 12 && dia < 21))
        printf("Primavera\n");
    else
        printf("Verano\n");
    return 0;
}
