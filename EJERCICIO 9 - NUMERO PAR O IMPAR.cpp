#include <stdio.h>
int main  (){
	int numero;
	printf ("\n   NUMERO PAR O IMPAR   \n");
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &numero);
	if (numero % 2 == 0) {
		printf ("El numero es PAR");
	} else {
		printf ("El numero es IMPAR");
	}
	
	return 0;
	
}
