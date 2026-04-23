#include <iostream>
using namespace std;
int main() {
    int num, complemento = 0, factor = 1;
    cout <<"-- COMPLEMENTO A 9-- " <<endl;
    cout << "Ingrese un numero: ";
    cin >> num;
    while (num > 0) {
        int dig = num % 10;
        complemento += (9 - dig) * factor;
        factor *= 10;
        num /= 10;
    }
    cout << "Complemento a 9: " << complemento;
    return 0;
}