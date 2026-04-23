#include <iostream>
using namespace std;
int main() {
    int num, suma = 0, pares = 0;
    cout <<"-- SEGURIDAD DE CODIGO --" <<endl;
    cout << "Ingrese el codigo: ";
    cin >> num;
    for (; num > 0; num /= 10) {
        int dig = num % 10;
        suma += dig;
        if (dig % 2 == 0)
            pares++;
    }
    if (pares >= 2 && suma > 15)
        cout << "Codigo seguro";
    else
        cout << "Codigo no seguro";
    return 0;
}