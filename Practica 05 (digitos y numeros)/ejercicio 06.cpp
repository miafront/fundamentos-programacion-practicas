#include <iostream>
using namespace std;
int main() {
    int num;
    bool valido = true;
  cout <<"-- VALIDACION EN BASE 8 --" <<endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    do {
        int dig = num % 10;
        if (dig > 7) {
            valido = false;
        }
        num /= 10;
    } while (num > 0);

    if (valido)
        cout << "Numero valido en base 8";
    else
        cout << "Numero invalido en base 8";
    return 0;
}