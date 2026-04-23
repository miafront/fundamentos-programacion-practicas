#include <iostream>
using namespace std;
int main() {
    int num, invertido = 0;
   cout <<"-- INVERSION DE NUMERO --" << endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }
    cout << "Numero invertido: " << invertido;
    return 0;
}