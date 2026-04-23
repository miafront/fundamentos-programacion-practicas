#include <iostream>
using namespace std;
int main() {
    int num, suma = 0, mayores5 = 0;
    cout <<"-- SIMULACION DE CUENTA BANCARIA --" << endl;
    cout << "Ingrese el numero: ";
    cin >> num;
    while (num > 0) {
        int dig = num % 10;
        suma += dig;
        if (dig > 5)
            mayores5++;
        num /= 10;
    }
    cout << "Total acumulado: " << suma << endl;
    cout << "Transacciones mayores a 5: " << mayores5;
    return 0;
}