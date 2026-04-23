#include <iostream>
using namespace std;
int main(){
    double x, suma = 0;
    int N;
    cin >> x >> N;
    for(int i = 1; i <= N; i++){
        double pot = 1, fac = 1;
        for(int j = 1; j <= i; j++){
            pot *= x;
            fac *= j;
        }
        if(i % 2 == 0)
            suma -= pot / fac;
        else
            suma += pot / fac;
    }
    cout << suma;
    return 0;
}