#include <iostream>
using namespace std;
int main(){
    int N;
    long long fac = 1;
    cout << "Ingrese N: ";
    cin >> N;
    if(N == 0){
        fac = 1;
    } else {
        for(int i = 1; i <= N; i++){
            fac *= i;
        }
    }
    cout << "Factorial: " << fac;
    return 0;
}