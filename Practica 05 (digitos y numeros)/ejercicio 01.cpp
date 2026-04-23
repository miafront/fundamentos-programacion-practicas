#include <iostream>
using namespace std;
int main() {
    int num, suma = 0;
   cout <<"-- SUMA DE DIGITOS --" << endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    cout << "Suma de digitos: " << suma;
    return 0;
}
