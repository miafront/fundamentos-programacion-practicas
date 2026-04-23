#include <iostream>
using namespace std;
int main(){
    double x, suma = 0;
    int N;
    cin >> x >> N;
    int signo = 1;
    for(int i = 1; i <= N; i += 2){
        double pot = 1, fac = 1;
        for(int j = 1; j <= i; j++){
            pot *= x;
            fac *= j;
        }
        suma += signo * (pot / fac);
        signo *= -1;
    }
    cout << suma;
    return 0;
}