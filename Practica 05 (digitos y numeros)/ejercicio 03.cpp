#include <iostream>
using namespace std;
int main() {
    int num, contador = 0;
   cout <<"-- CONTADOR DE DIGITOS PARES --" <<endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    for (; num > 0; num /= 10) {
        if ((num % 10) % 2 == 0) {
            contador++;
        }
    }
    cout << "Cantidad de digitos pares: " << contador;
    return 0;
}