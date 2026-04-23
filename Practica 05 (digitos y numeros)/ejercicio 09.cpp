#include <iostream>
using namespace std;
int main() {
    int pin, digitos = 0;
    bool valido = true;
    cout <<"-- VALIDACION DEL PIN --" <<endl;
    cout << "Ingrese el PIN: ";
    cin >> pin;
    int anterior = -1;
    while (pin > 0) {
        int dig = pin % 10;
        if (dig == anterior)
            valido = false;
        anterior = dig;
        digitos++;
        pin /= 10;
    }
    if (digitos == 4 && valido)
        cout << "PIN valido";
    else
        cout << "PIN invalido";
    return 0;
}