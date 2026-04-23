#include <iostream>
using namespace std;
int main(){
    double x, suma = 0;
    int N;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++){
        double pot = 1;
        double fac = 1;
        for(int j = 1; j <= i; j++){
            pot *= x;
            fac *= j;
        }
        suma += pot / fac;
    }
    cout << "Suma: " << suma;
    return 0;
}